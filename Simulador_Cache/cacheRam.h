#ifndef CACHE_RAM_H
#define CACHE_RAM_H
#include "Cache.h"
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>
using namespace std;

class cacheRam
{
private:
	long double _tiempo;
	int* _ram;
	Cache* _cache;
public:
	static std::string toStandardString(System::String^ string){
		 using System::Runtime::InteropServices::Marshal;
		 System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		 char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		 std::string returnString(charPointer, string->Length);
		 Marshal::FreeHGlobal(pointer);
		 return returnString;
	};

	cacheRam(){
		_ram = new int[4096];
		for (int i = 0; i < 4096; i++)
			_ram[i] = 0;
		_cache = new Cache();
		_tiempo = 0.000000000000000000;
		string cadena;
		System::Windows::Forms::OpenFileDialog Open;
		Open.Title = "Abrir";
        Open.Filter = "txt files (*.txt)|*.txt*";
		Open.ShowDialog();
		string ruta = toStandardString(Open.FileName);
		ifstream fe(ruta, ifstream::in);
		int cont = 0;
		
		while(getline(fe,cadena)) {
			_ram[cont] = atoi(cadena.c_str());			
			cont++;
		}
		fe.close();
	};

	int* getRAM(){
		return _ram;
	};

	Cache* getCache(){
		return _cache;
	};

	int leer(int i, int tipo){
		if( tipo == 0 ){
			_tiempo += 0.1;
			return _ram[i];
		}else if( tipo == 1 ){
			_tiempo += 0.01;
			int bloque = i/8;
	        int linea = bloque%64;
	        int etiqueta = bloque/64;
	        int palabra = (i%8);

	        int etiquetaAnt = _cache->obtenerEtiqueta( linea );
	        if( _cache->esValida( linea ) ){
	        	if( _cache->mismaEtiqueta( linea, etiqueta ) )
	        		return _cache->obtenerLinea( linea, palabra );
	        	else{
	        		if( _cache->lineaModificada( linea ) ){
	        			_tiempo += 0.66;
	        			int tmp = (etiquetaAnt*512)+(linea*8);
	        			int j = 0;
	        			for(int k = tmp; k < (tmp+8); k++ ){
	        				_ram[k] = _cache->obtenerLinea( linea, j );
	        				j++;
	        			}
	        		}
	        		_cache->setEtiqueta( linea, etiqueta );
	        		_cache->setMod( linea, false );
	        		_tiempo += 0.66;
	        		int j = 0;
	        		for(int k = bloque*8; k < (bloque*8)+8; k++){
	        			_cache->llenarLinea( linea, j, _ram[k] );
	        			j++;
	        		}
	        	}
	        }else{
	        	_cache->setEtiqueta( linea, etiqueta );
        		_cache->setValido( linea, true );
        		_cache->setMod( linea, false );
	        	_tiempo += 0.66;
        		int j = 0;
        		for(int k = bloque*8; k < (bloque*8)+8; k++){
        			_cache->llenarLinea( linea, j, _ram[k] );
        			j++;
        		}
	        }
	        return _cache->obtenerLinea( linea, palabra );
		}else if( tipo == 3 ){
			_tiempo += 0.01;
			int bloque = i/8;
	        int conjunto = bloque%16;
			int linea = conjunto*4;
	        int etiqueta = bloque/16;
	        int palabra = (i%8);

			int tmp = -1;
			for(int i = linea; i < linea+4; i++){
				if( _cache->mismaEtiqueta( i, etiqueta )){
					tmp = i;
					break;
				}
			}

			if( tmp != -1 && _cache->esValida( tmp ) ){
				return _cache->obtenerLinea( tmp, palabra );
			}else{
				int lineaN = linea + _cache->obtenerLineaConjunto( conjunto );
				if( _cache->esValida( lineaN ) && _cache->lineaModificada( lineaN ) ){
					_tiempo += 0.66;
					int etiquetaAnt = _cache->obtenerEtiqueta( lineaN );
					int tmp = ((etiquetaAnt*16) + (lineaN/4))*8;
	        		int j = 0;
	        		for(int k = tmp; k < (tmp+8); k++ ){
	        			_ram[k] = _cache->obtenerLinea( lineaN, j );
	        			j++;
	        		}
				}else
					_cache->setValido( lineaN, true );
				_cache->setEtiqueta( lineaN, etiqueta );
	        	_cache->setMod( lineaN, false );
				_cache->setValido( lineaN, true );
	        	_tiempo += 0.66;
	        	int j = 0;
	        	for(int k = bloque*8; k < (bloque*8)+8; k++){
	        		_cache->llenarLinea( lineaN, j, _ram[k] );
	        		j++;
	        	}
				_cache->ingresarAsocConj( conjunto );
				return _cache->obtenerLinea( lineaN, palabra );
			}
		}else if( tipo == 2 ){
			_tiempo += 0.01;
			int bloque = i/8;
			int etiqueta = i/8;
	        int palabra = (i%8);

			int tmp = -1;
			for(int i = 0; i < 64; i++){
				if( _cache->mismaEtiqueta( i, etiqueta )){
					tmp = i;
					break;
				}
			}

			if( tmp != -1 && _cache->esValida( tmp ) ){
				return _cache->obtenerLinea( tmp, palabra );
			}else{
				int lineaN = _cache->obtenerLineaAsoc();
				if( _cache->esValida( lineaN ) && _cache->lineaModificada( lineaN ) ){
					_tiempo += 0.66;
					int etiquetaAnt = _cache->obtenerEtiqueta( lineaN );
					int tmp = (etiquetaAnt)*8;
	        		int j = 0;
	        		for(int k = tmp; k < (tmp+8); k++ ){
	        			_ram[k] = _cache->obtenerLinea( lineaN, j );
	        			j++;
	        		}
				}else
					_cache->setValido( lineaN, true );
				_cache->setEtiqueta( lineaN, etiqueta );
	        	_cache->setMod( lineaN, false );
				_cache->setValido( lineaN, true );
	        	_tiempo += 0.66;
	        	int j = 0;
	        	for(int k = bloque*8; k < (bloque*8)+8; k++){
	        		_cache->ingresarAsoc( j, _ram[k] );
	        		j++;
	        	}
				return _cache->obtenerLinea( lineaN, palabra );
			}
		}
		return -1;
	};

	void escribir(int i, int tipo, int valor){
		if( tipo == 0 ){
			_tiempo += 0.1;
			_ram[i] = valor;
		}else if( tipo == 1 ){
			_tiempo += 0.01;
			int bloque = i/8;
	        int linea = bloque%64;
	        int etiqueta = bloque/64;
			int palabra = (i%8);

	        int etiquetaAnt = _cache->obtenerEtiqueta( linea );
	        if( _cache->esValida( linea ) ){
	        	if( _cache->mismaEtiqueta( linea, etiqueta ) ){
	        		_cache->setMod( linea, true );
	        	}else{
	        		if( _cache->lineaModificada( linea ) ){
	        			_tiempo += 0.66;
	        			int tmp = (etiquetaAnt*512)+(linea*8);
	        			int j = 0;
						for(int k = tmp; k < (tmp+8); k++ ){
	        				_ram[k] = _cache->obtenerLinea( linea, j );
	        				j++;
	        			}
	        		}
	        		_cache->setEtiqueta( linea, etiqueta );
	        		_cache->setMod( linea, true );
	        		_tiempo += 0.66;
	        		int j = 0;
					for(int k = bloque*8; k < (bloque*8)+8; k++){
						_cache->llenarLinea( linea, j, _ram[k] );
	        			j++;
	        		}
	        	}
	        }else{
	        	_cache->setEtiqueta( linea, etiqueta );
        		_cache->setValido( linea, true );
        		_cache->setMod( linea, true );
	        	_tiempo += 0.66;
        		int j = 0;
				for(int k = bloque*8; k < (bloque*8)+8; k++){
        			_cache->llenarLinea( linea, j, _ram[k] );
        			j++;
        		}
	        }
	        _cache->llenarLinea( linea, palabra, valor );
		}else if( tipo == 3 ){
			_tiempo += 0.01;
			int bloque = i/8;
	        int conjunto = bloque%16;
			int linea = conjunto*4;
	        int etiqueta = bloque/16;
	        int palabra = (i%8);

			int tmp = -1;
			for(int i = linea; i < linea+4; i++){
				if( _cache->mismaEtiqueta( i, etiqueta )){
					tmp = i;
					break;
				}
			}

			if( tmp != -1 && _cache->esValida( tmp )){
				_cache->llenarLinea( tmp, palabra, valor );
				_cache->setMod( tmp, true );
			}else{
				int lineaN = linea + _cache->obtenerLineaConjunto( conjunto );
				if( _cache->esValida( lineaN ) && _cache->lineaModificada( lineaN ) ){
					_tiempo += 0.66;
					int etiquetaAnt = _cache->obtenerEtiqueta( lineaN );
					int tmp = ((etiquetaAnt*16) + (lineaN/4))*8;
	        		int j = 0;
	        		for(int k = tmp; k < (tmp+8); k++ ){
	        			_ram[k] = _cache->obtenerLinea( lineaN, j );
	        			j++;
	        		}
				}else
					_cache->setValido( lineaN, true );
				_cache->setEtiqueta( lineaN, etiqueta );
	        	_cache->setMod( lineaN, true );
				_cache->setValido( lineaN, true );
	        	_tiempo += 0.66;
	        	int j = 0;
	        	for(int k = bloque*8; k < (bloque*8)+8; k++){
					_cache->llenarLinea( lineaN, j, _ram[k] );
	        		j++;
	        	}
				_cache->ingresarAsocConj( conjunto );
				_cache->llenarLinea( lineaN, palabra, valor );
			}
		}else if( tipo == 2 ){
			_tiempo += 0.01;
			int bloque = i/8;
	        int etiqueta = i/8;
	        int palabra = (i%8);

			int tmp = -1;
			for(int i = 0; i < 64; i++){
				if( _cache->mismaEtiqueta( i, etiqueta )){
					tmp = i;
					break;
				}
			}

			if( tmp != -1 && _cache->esValida( tmp )){
				_cache->llenarLinea( tmp, palabra, valor );
				_cache->setMod( tmp, true );
			}else{
				int lineaN =  _cache->obtenerLineaAsoc();
				if( _cache->esValida( lineaN ) && _cache->lineaModificada( lineaN ) ){
					_tiempo += 0.66;
					int etiquetaAnt = _cache->obtenerEtiqueta( lineaN );
					int tmp = (etiquetaAnt)*8;
	        		int j = 0;
	        		for(int k = tmp; k < (tmp+8); k++ ){
	        			_ram[k] = _cache->obtenerLinea( lineaN, j );
	        			j++;
	        		}
				}else
					_cache->setValido( lineaN, true );
				_cache->setEtiqueta( lineaN, etiqueta );
	        	_cache->setMod( lineaN, true );
				_cache->setValido( lineaN, true );
	        	_tiempo += 0.66;
	        	int j = 0;
	        	for(int k = bloque*8; k < (bloque*8)+8; k++){
					_cache->ingresarAsoc( j, _ram[k] );
	        		j++;
	        	}
				_cache->ingresarAsoc( palabra, valor );
			}
		}
	};

	string obtenerTiempo(){
		stringstream ss;
		ss << _tiempo << endl;
		return ss.str();
	};

	~cacheRam(){
		free( _ram );
		free( _cache );
	};
};

#endif