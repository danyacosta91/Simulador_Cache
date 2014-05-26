#pragma once
#include "cacheRam.h"
using namespace std;

namespace Simulador_Cache {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
				free( _cacheRam );
			}
		}
	private: System::Windows::Forms::DataGridView^  _ram;
	private: cacheRam* _cacheRam;
	protected: 

	protected: 

	private: System::Windows::Forms::DataGridView^  _cache;





	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  archivoToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sinCachéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cachéDirectoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cachéAsociativoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cachéAsocConjToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  acercaDeToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  todosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salirToolStripMenuItem;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txt_ram;
	private: System::Windows::Forms::TextBox^  txt_directo;
	private: System::Windows::Forms::TextBox^  txt_conj;
	private: System::Windows::Forms::TextBox^  txt_asoc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  RAM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _cacheValido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _cacheMod;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _cacheEtiqueta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _cacheLinea;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  _cachePalabra;
	private: System::Windows::Forms::ToolStripMenuItem^  pruebatoolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sinCachéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  cachéDirectoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  cachéAsocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cachéAsocitivoConjToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  todosToolStripMenuItem1;






















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->_ram = (gcnew System::Windows::Forms::DataGridView());
			this->RAM = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_cache = (gcnew System::Windows::Forms::DataGridView());
			this->_cacheValido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_cacheMod = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_cacheEtiqueta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_cacheLinea = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_cachePalabra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sinCachéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cachéDirectoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cachéAsociativoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cachéAsocConjToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->todosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pruebatoolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sinCachéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cachéDirectoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cachéAsocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cachéAsocitivoConjToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->todosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txt_conj = (gcnew System::Windows::Forms::TextBox());
			this->txt_asoc = (gcnew System::Windows::Forms::TextBox());
			this->txt_directo = (gcnew System::Windows::Forms::TextBox());
			this->txt_ram = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_ram))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_cache))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// _ram
			// 
			this->_ram->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->_ram->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->_ram->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->_ram->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) {this->RAM});
			this->_ram->Location = System::Drawing::Point(664, 28);
			this->_ram->Name = L"_ram";
			this->_ram->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->_ram->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->_ram->Size = System::Drawing::Size(116, 413);
			this->_ram->TabIndex = 0;
			// 
			// RAM
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->RAM->DefaultCellStyle = dataGridViewCellStyle2;
			this->RAM->FillWeight = 3;
			this->RAM->HeaderText = L"RAM";
			this->RAM->MinimumWidth = 3;
			this->RAM->Name = L"RAM";
			this->RAM->ReadOnly = true;
			this->RAM->Width = 50;
			// 
			// _cache
			// 
			this->_cache->AllowUserToDeleteRows = false;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->_cache->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->_cache->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->_cache->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->_cacheValido, 
				this->_cacheMod, this->_cacheEtiqueta, this->_cacheLinea, this->_cachePalabra});
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->_cache->DefaultCellStyle = dataGridViewCellStyle9;
			this->_cache->Location = System::Drawing::Point(275, 28);
			this->_cache->Name = L"_cache";
			this->_cache->ReadOnly = true;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->_cache->RowHeadersDefaultCellStyle = dataGridViewCellStyle10;
			this->_cache->Size = System::Drawing::Size(383, 413);
			this->_cache->TabIndex = 1;
			// 
			// _cacheValido
			// 
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->_cacheValido->DefaultCellStyle = dataGridViewCellStyle5;
			this->_cacheValido->FillWeight = 5;
			this->_cacheValido->HeaderText = L"Válido";
			this->_cacheValido->Name = L"_cacheValido";
			this->_cacheValido->ReadOnly = true;
			this->_cacheValido->Width = 50;
			// 
			// _cacheMod
			// 
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->_cacheMod->DefaultCellStyle = dataGridViewCellStyle6;
			this->_cacheMod->FillWeight = 5;
			this->_cacheMod->HeaderText = L"Modificado";
			this->_cacheMod->Name = L"_cacheMod";
			this->_cacheMod->ReadOnly = true;
			this->_cacheMod->Width = 50;
			// 
			// _cacheEtiqueta
			// 
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->_cacheEtiqueta->DefaultCellStyle = dataGridViewCellStyle7;
			this->_cacheEtiqueta->FillWeight = 5;
			this->_cacheEtiqueta->HeaderText = L"Etiqueta";
			this->_cacheEtiqueta->Name = L"_cacheEtiqueta";
			this->_cacheEtiqueta->ReadOnly = true;
			this->_cacheEtiqueta->Width = 50;
			// 
			// _cacheLinea
			// 
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->_cacheLinea->DefaultCellStyle = dataGridViewCellStyle8;
			this->_cacheLinea->FillWeight = 5;
			this->_cacheLinea->HeaderText = L"Linea";
			this->_cacheLinea->Name = L"_cacheLinea";
			this->_cacheLinea->ReadOnly = true;
			this->_cacheLinea->Width = 50;
			// 
			// _cachePalabra
			// 
			this->_cachePalabra->FillWeight = 8;
			this->_cachePalabra->HeaderText = L"Palabra";
			this->_cachePalabra->MinimumWidth = 8;
			this->_cachePalabra->Name = L"_cachePalabra";
			this->_cachePalabra->ReadOnly = true;
			this->_cachePalabra->Width = 150;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->archivoToolStripMenuItem, 
				this->acercaDeToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(792, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->nuevoToolStripMenuItem, 
				this->pruebatoolStripMenuItem, this->salirToolStripMenuItem});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->sinCachéToolStripMenuItem, 
				this->cachéDirectoToolStripMenuItem, this->cachéAsociativoToolStripMenuItem, this->cachéAsocConjToolStripMenuItem, this->todosToolStripMenuItem});
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->nuevoToolStripMenuItem->Text = L"Sort";
			// 
			// sinCachéToolStripMenuItem
			// 
			this->sinCachéToolStripMenuItem->Name = L"sinCachéToolStripMenuItem";
			this->sinCachéToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
			this->sinCachéToolStripMenuItem->Size = System::Drawing::Size(212, 22);
			this->sinCachéToolStripMenuItem->Text = L"Sin caché";
			this->sinCachéToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sinCachéToolStripMenuItem_Click);
			// 
			// cachéDirectoToolStripMenuItem
			// 
			this->cachéDirectoToolStripMenuItem->Name = L"cachéDirectoToolStripMenuItem";
			this->cachéDirectoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->cachéDirectoToolStripMenuItem->Size = System::Drawing::Size(212, 22);
			this->cachéDirectoToolStripMenuItem->Text = L"Caché Directo";
			this->cachéDirectoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cachéDirectoToolStripMenuItem_Click);
			// 
			// cachéAsociativoToolStripMenuItem
			// 
			this->cachéAsociativoToolStripMenuItem->Name = L"cachéAsociativoToolStripMenuItem";
			this->cachéAsociativoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->cachéAsociativoToolStripMenuItem->Size = System::Drawing::Size(212, 22);
			this->cachéAsociativoToolStripMenuItem->Text = L"Caché Asociativo";
			this->cachéAsociativoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cachéAsociativoToolStripMenuItem_Click);
			// 
			// cachéAsocConjToolStripMenuItem
			// 
			this->cachéAsocConjToolStripMenuItem->Name = L"cachéAsocConjToolStripMenuItem";
			this->cachéAsocConjToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->cachéAsocConjToolStripMenuItem->Size = System::Drawing::Size(212, 22);
			this->cachéAsocConjToolStripMenuItem->Text = L"Caché Asoc. Conj.";
			this->cachéAsocConjToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cachéAsocConjToolStripMenuItem_Click);
			// 
			// todosToolStripMenuItem
			// 
			this->todosToolStripMenuItem->Name = L"todosToolStripMenuItem";
			this->todosToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::T));
			this->todosToolStripMenuItem->Size = System::Drawing::Size(212, 22);
			this->todosToolStripMenuItem->Text = L"Todos";
			this->todosToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::todosToolStripMenuItem_Click);
			// 
			// pruebatoolStripMenuItem
			// 
			this->pruebatoolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->sinCachéToolStripMenuItem1, 
				this->cachéDirectoToolStripMenuItem1, this->cachéAsocToolStripMenuItem, this->cachéAsocitivoConjToolStripMenuItem, this->todosToolStripMenuItem1});
			this->pruebatoolStripMenuItem->Name = L"pruebatoolStripMenuItem";
			this->pruebatoolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->pruebatoolStripMenuItem->Text = L"Prueba Escritorio";
			// 
			// sinCachéToolStripMenuItem1
			// 
			this->sinCachéToolStripMenuItem1->Name = L"sinCachéToolStripMenuItem1";
			this->sinCachéToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::R));
			this->sinCachéToolStripMenuItem1->Size = System::Drawing::Size(244, 22);
			this->sinCachéToolStripMenuItem1->Text = L"Sin Caché";
			this->sinCachéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::sinCachéToolStripMenuItem1_Click);
			// 
			// cachéDirectoToolStripMenuItem1
			// 
			this->cachéDirectoToolStripMenuItem1->Name = L"cachéDirectoToolStripMenuItem1";
			this->cachéDirectoToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::D));
			this->cachéDirectoToolStripMenuItem1->Size = System::Drawing::Size(244, 22);
			this->cachéDirectoToolStripMenuItem1->Text = L"Caché Directo";
			this->cachéDirectoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::cachéDirectoToolStripMenuItem1_Click);
			// 
			// cachéAsocToolStripMenuItem
			// 
			this->cachéAsocToolStripMenuItem->Name = L"cachéAsocToolStripMenuItem";
			this->cachéAsocToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::A));
			this->cachéAsocToolStripMenuItem->Size = System::Drawing::Size(244, 22);
			this->cachéAsocToolStripMenuItem->Text = L"Caché Asociativo";
			this->cachéAsocToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cachéAsocToolStripMenuItem_Click);
			// 
			// cachéAsocitivoConjToolStripMenuItem
			// 
			this->cachéAsocitivoConjToolStripMenuItem->Name = L"cachéAsocitivoConjToolStripMenuItem";
			this->cachéAsocitivoConjToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::C));
			this->cachéAsocitivoConjToolStripMenuItem->Size = System::Drawing::Size(244, 22);
			this->cachéAsocitivoConjToolStripMenuItem->Text = L"Caché Asoc. Conj.";
			this->cachéAsocitivoConjToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cachéAsocitivoConjToolStripMenuItem_Click);
			// 
			// todosToolStripMenuItem1
			// 
			this->todosToolStripMenuItem1->Name = L"todosToolStripMenuItem1";
			this->todosToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::T));
			this->todosToolStripMenuItem1->Size = System::Drawing::Size(244, 22);
			this->todosToolStripMenuItem1->Text = L"Todos";
			this->todosToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::todosToolStripMenuItem1_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->salirToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::salirToolStripMenuItem_Click);
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->acercaDeToolStripMenuItem1});
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// acercaDeToolStripMenuItem1
			// 
			this->acercaDeToolStripMenuItem1->Name = L"acercaDeToolStripMenuItem1";
			this->acercaDeToolStripMenuItem1->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->acercaDeToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->acercaDeToolStripMenuItem1->Text = L"Acerca de";
			this->acercaDeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::acercaDeToolStripMenuItem1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(12, 40);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(257, 260);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txt_conj);
			this->tabPage1->Controls->Add(this->txt_asoc);
			this->tabPage1->Controls->Add(this->txt_directo);
			this->tabPage1->Controls->Add(this->txt_ram);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(249, 231);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Tiempos";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txt_conj
			// 
			this->txt_conj->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt_conj->Location = System::Drawing::Point(138, 164);
			this->txt_conj->Name = L"txt_conj";
			this->txt_conj->ReadOnly = true;
			this->txt_conj->Size = System::Drawing::Size(100, 26);
			this->txt_conj->TabIndex = 7;
			// 
			// txt_asoc
			// 
			this->txt_asoc->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt_asoc->Location = System::Drawing::Point(138, 113);
			this->txt_asoc->Name = L"txt_asoc";
			this->txt_asoc->ReadOnly = true;
			this->txt_asoc->Size = System::Drawing::Size(100, 26);
			this->txt_asoc->TabIndex = 6;
			// 
			// txt_directo
			// 
			this->txt_directo->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt_directo->Location = System::Drawing::Point(138, 67);
			this->txt_directo->Name = L"txt_directo";
			this->txt_directo->ReadOnly = true;
			this->txt_directo->Size = System::Drawing::Size(100, 26);
			this->txt_directo->TabIndex = 5;
			// 
			// txt_ram
			// 
			this->txt_ram->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt_ram->Location = System::Drawing::Point(138, 15);
			this->txt_ram->Name = L"txt_ram";
			this->txt_ram->ReadOnly = true;
			this->txt_ram->Size = System::Drawing::Size(100, 26);
			this->txt_ram->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Caché Conj.:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Caché Asoc.:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Caché Directo:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sin Caché:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 453);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->_cache);
			this->Controls->Add(this->_ram);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(808, 491);
			this->MinimumSize = System::Drawing::Size(808, 491);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simulador Cache";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_ram))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_cache))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void cachéDirectoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			_cacheRam = new cacheRam();
			metodo( _cacheRam, 1 );
			String^ MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_directo->Text = MyString;
			free( _cacheRam );
		}

		private: System::Void salirToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		}

		private: System::Void sinCachéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			_cacheRam = new cacheRam();
			metodo( _cacheRam, 0 );
			String^ MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_ram->Text = MyString;
			free( _cacheRam );
		}

	void metodo( cacheRam* c, int tipo ){
		int tmp = 0;
		for( int i = 0; i <= 4094; i++ ){
			for (int j = i+1; j <= 4095; ++j){
				if( c->leer(i, tipo) > c->leer(j, tipo) ){
					tmp = c->leer(i, tipo);
					c->escribir( i, tipo, c->leer(j, tipo) );
					c->escribir( j, tipo, tmp );
				}
			}
		}
		actualizarCache( c );
	};

	void metodo2( cacheRam* c, int tipo ){
		c->escribir( 100, tipo, 10 );
		c->escribir( 101, tipo, 13 );
		c->escribir( 102, tipo, 21 );
		c->escribir( 103, tipo, 11 );
		c->escribir( 104, tipo, 67 );
		c->escribir( 105, tipo, 43 );
		c->escribir( 106, tipo, 9 );
		c->escribir( 107, tipo, 11 );
		c->escribir( 108, tipo, 19 );
		c->escribir( 109, tipo, 23 );
		c->escribir( 110, tipo, 32 );
		c->escribir( 111, tipo, 54 );
		c->escribir( 112, tipo, 98 );
		c->escribir( 113, tipo, 7 );
		c->escribir( 114, tipo, 13 );
		c->escribir( 115, tipo, 1 );
		int menor = c->leer(100, tipo);
		int mayor = menor, k = 0;
		for( int i = 101; i <= 115; i++ ){
			k++;
			c->escribir( 615, tipo, k );
			if( c->leer(i, tipo) < menor )
				menor = c->leer(i, tipo);
			if( c->leer(i, tipo) > mayor )
				mayor = c->leer(i, tipo);
		}
		actualizarCache( c );
	};

	void actualizarCache( cacheRam* c ){
		this->_ram->Rows->Clear();
		this->_cache->Rows->Clear();
		int* tmp = c->getRAM();
			for (int i = 0; i < 4096; i++)
				this->_ram->Rows->Add(""+tmp[i]);
		free( tmp );
		String^ valido;String^ mod;String^ eti;
		String^ line;String^ pal;
		for (int i = 0; i < 64; i++){
			valido = gcnew String( ""+c->getCache()->esValida(i) );
			mod = gcnew String( ""+c->getCache()->lineaModificada(i) );
			eti = gcnew String( ""+c->getCache()->obtenerEtiqueta(i) );
			line = gcnew String( ""+i );
			pal = gcnew String( c->getCache()->obtenerLineaC(i).c_str() );
			this->_cache->Rows->Add( valido, mod, eti, line, pal );
		}
	};
private: System::Void cachéAsocConjToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			_cacheRam = new cacheRam();
			metodo( _cacheRam, 3 );
			String^ MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_conj->Text = MyString;
			free( _cacheRam );
		 }

private: System::Void cachéAsociativoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			_cacheRam = new cacheRam();
			metodo( _cacheRam, 2 );
			String^ MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_asoc->Text = MyString;
			free( _cacheRam );
		 }
private: System::Void todosToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 _cacheRam = new cacheRam();
			metodo( _cacheRam, 0 );
			String^ MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_ram->Text = MyString;
			free( _cacheRam );

			_cacheRam = new cacheRam();
			metodo( _cacheRam, 1 );
			MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_directo->Text = MyString;
			free( _cacheRam );

			 _cacheRam = new cacheRam();
			metodo( _cacheRam, 2 );
			MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_asoc->Text = MyString;
			free( _cacheRam );

			_cacheRam = new cacheRam();
			metodo( _cacheRam, 3 );
			MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_conj->Text = MyString;
			free( _cacheRam );
		 }
private: System::Void sinCachéToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			  _cacheRam = new cacheRam();
			metodo2( _cacheRam, 0 );
			String^ MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_ram->Text = MyString;
			free( _cacheRam );
		 }
private: System::Void cachéDirectoToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			_cacheRam = new cacheRam();
			metodo2( _cacheRam, 1 );
			String^ MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_directo->Text = MyString;
			free( _cacheRam );
		 }
private: System::Void cachéAsocToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  _cacheRam = new cacheRam();
			metodo2( _cacheRam, 2 );
			String^ MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_asoc->Text = MyString;
			free( _cacheRam );
		 }
private: System::Void cachéAsocitivoConjToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 _cacheRam = new cacheRam();
			metodo2( _cacheRam, 3 );
			String^ MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_conj->Text = MyString;
			free( _cacheRam );
		 }
private: System::Void todosToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			_cacheRam = new cacheRam();
			metodo2( _cacheRam, 0 );
			String^ MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_ram->Text = MyString;
			free( _cacheRam );

			_cacheRam = new cacheRam();
			metodo2( _cacheRam, 1 );
			MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_directo->Text = MyString;
			free( _cacheRam );

			 _cacheRam = new cacheRam();
			metodo2( _cacheRam, 2 );
			MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_asoc->Text = MyString;
			free( _cacheRam );

			_cacheRam = new cacheRam();
			metodo2( _cacheRam, 3 );
			MyString = gcnew String(_cacheRam->obtenerTiempo().c_str());
			this->txt_conj->Text = MyString;
			free( _cacheRam );
		 }
private: System::Void acercaDeToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ ret = gcnew String( "Creado por:\nStephanie Schoenherr\nKerlyn Bustillo\nManuel Nuñez\nDaniel Acosta\n\nClase: Organización de Computadoras\nIng. Pablo Meraz\n\n© CopyRight 2014" );
			 System::Windows::Forms::MessageBox::Show(ret,"About");
		 }
};
}