#ifndef CACHE_H
#define CACHE_H
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;

class Cache
{
private:
	bool* _mod;
	bool* _valido;
	int* _etiqueta;
	int** _lineasC;
	int* _contConj;
	int _contAsoc;
public:
	Cache(){
		_contAsoc = 0;
		_contConj = new int[16];
		for (int i = 0; i < 16; i++)
			_contConj[i] = 0;
		_mod = new bool[64];
		_valido = new bool[64];
		_etiqueta = new int[64];
		_lineasC = new int*[64];
		for( int i = 0; i < 64; i++ ){
			_lineasC[i] = new int[8];
			_valido[i] = false;
			_mod[i] = false;
			_etiqueta[i] = 0;
			for (int j = 0; j < 8; ++j)
				_lineasC[i][j] = 0;
		}
	};

	int obtenerLineaConjunto( int conjunto ){
		return _contConj[conjunto];
	};

	int obtenerLineaAsoc(){
		return _contAsoc;
	};

	bool esValida( int i ){
		return _valido[i];
	};

	bool mismaEtiqueta( int i, int etiqueta ){
		return (_etiqueta[i] == etiqueta);
	};

	bool lineaModificada( int i ){
		return _mod[i];
	};

	int obtenerEtiqueta( int i ){
		return _etiqueta[i];
	};

	int obtenerLinea( int i, int j ){
		return _lineasC[i][j];
	};

	string obtenerLineaC( int i ){
		stringstream ss;
		ss << _lineasC[i][0] << ", " << _lineasC[i][1] << ", " << _lineasC[i][2] << ", "
			 << _lineasC[i][3] << ", " << _lineasC[i][4] << ", " << _lineasC[i][5] << ", "
			 << _lineasC[i][6] << ", " << _lineasC[i][7];
		return ss.str();
	};

	void llenarLinea( int linea, int palabra, int valor ){
		_lineasC[linea][palabra] = valor;
	};

	void setEtiqueta( int i, int valor ){
		_etiqueta[i] = valor;
	};

	void setValido( int i, bool valor ){
		_valido[i] = valor;
	};

	void setMod( int i, bool valor ){
		_mod[i] = valor;
	};

	void ingresarAsocConj( int conjunto ){
		_contConj[conjunto]++;
		if( _contConj[conjunto] >= 4 )
			_contConj[conjunto] = 0;
	};

	void ingresarAsoc( int palabra, int valor ){
		_lineasC[_contAsoc][palabra] = valor;
		if( palabra == 7 )
			_contAsoc++;
		if( _contAsoc >= 64 )
			_contAsoc = 0;
	};

	~Cache(){
		free( _mod );
		free( _valido );
		free( _etiqueta );
		free( _lineasC );
	};
};

#endif