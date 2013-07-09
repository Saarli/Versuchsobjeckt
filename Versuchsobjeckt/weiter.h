//http://msdn.microsoft.com/de-de/library/xdt36c58%28v=vs.110%29.aspx
#include "start.h"
#include "version.h"
#include "hilfe.h"
#include "Optionen.h"
#include "verschlüsselung.h"
#include <hash_set>
#include <sstream>
#include <msclr\marshal_cppstd.h>

#pragma once

namespace Versuchsobjeckt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für weiter
	/// </summary>
	public ref class weiter : public System::Windows::Forms::Form
	{
	public:
		weiter(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~weiter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip2;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  dateiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  öffnenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  speichernToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  schließenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hilfeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  versionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hilfeToolStripMenuItem1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  bearbeitenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  entschlüsselnToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  verschlüsselnToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^  textEingebenToolStripMenuItem;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;



	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::GroupBox^  groupBox1;






	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  optionenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  textboxFarbeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hintergrundToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  textToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  buttonsFarbeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hintergrundToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  textToolStripMenuItem1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;


	protected: 

	protected: 

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(weiter::typeid));
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->dateiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öffnenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->speichernToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->schließenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bearbeitenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textEingebenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->entschlüsselnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verschlüsselnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textboxFarbeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hintergrundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonsFarbeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hintergrundToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hilfeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->versionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hilfeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->dateiToolStripMenuItem, 
				this->bearbeitenToolStripMenuItem, this->optionenToolStripMenuItem, this->hilfeToolStripMenuItem});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(1044, 24);
			this->menuStrip2->TabIndex = 3;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// dateiToolStripMenuItem
			// 
			this->dateiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->öffnenToolStripMenuItem, 
				this->speichernToolStripMenuItem, this->schließenToolStripMenuItem});
			this->dateiToolStripMenuItem->Name = L"dateiToolStripMenuItem";
			this->dateiToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->dateiToolStripMenuItem->Text = L"Datei";
			// 
			// öffnenToolStripMenuItem
			// 
			this->öffnenToolStripMenuItem->Name = L"öffnenToolStripMenuItem";
			this->öffnenToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->öffnenToolStripMenuItem->Text = L"Öffnen";
			this->öffnenToolStripMenuItem->Click += gcnew System::EventHandler(this, &weiter::öffnenToolStripMenuItem_Click);
			// 
			// speichernToolStripMenuItem
			// 
			this->speichernToolStripMenuItem->Name = L"speichernToolStripMenuItem";
			this->speichernToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->speichernToolStripMenuItem->Text = L"Speichern";
			this->speichernToolStripMenuItem->Click += gcnew System::EventHandler(this, &weiter::speichernToolStripMenuItem_Click);
			// 
			// schließenToolStripMenuItem
			// 
			this->schließenToolStripMenuItem->Name = L"schließenToolStripMenuItem";
			this->schließenToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->schließenToolStripMenuItem->Text = L"Schließen";
			this->schließenToolStripMenuItem->Click += gcnew System::EventHandler(this, &weiter::schließenToolStripMenuItem_Click);
			// 
			// bearbeitenToolStripMenuItem
			// 
			this->bearbeitenToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->textEingebenToolStripMenuItem, 
				this->entschlüsselnToolStripMenuItem, this->verschlüsselnToolStripMenuItem});
			this->bearbeitenToolStripMenuItem->Name = L"bearbeitenToolStripMenuItem";
			this->bearbeitenToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->bearbeitenToolStripMenuItem->Text = L"Bearbeiten";
			// 
			// textEingebenToolStripMenuItem
			// 
			this->textEingebenToolStripMenuItem->Name = L"textEingebenToolStripMenuItem";
			this->textEingebenToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->textEingebenToolStripMenuItem->Text = L"Sperren / Entsperren";
			this->textEingebenToolStripMenuItem->Click += gcnew System::EventHandler(this, &weiter::textEingebenToolStripMenuItem_Click);
			// 
			// entschlüsselnToolStripMenuItem
			// 
			this->entschlüsselnToolStripMenuItem->Name = L"entschlüsselnToolStripMenuItem";
			this->entschlüsselnToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->entschlüsselnToolStripMenuItem->Text = L"Entschlüsseln";
			// 
			// verschlüsselnToolStripMenuItem
			// 
			this->verschlüsselnToolStripMenuItem->Name = L"verschlüsselnToolStripMenuItem";
			this->verschlüsselnToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->verschlüsselnToolStripMenuItem->Text = L"Verschlüsseln";
			// 
			// optionenToolStripMenuItem
			// 
			this->optionenToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->textboxFarbeToolStripMenuItem, 
				this->buttonsFarbeToolStripMenuItem});
			this->optionenToolStripMenuItem->Name = L"optionenToolStripMenuItem";
			this->optionenToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->optionenToolStripMenuItem->Text = L"Optionen";
			// 
			// textboxFarbeToolStripMenuItem
			// 
			this->textboxFarbeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->hintergrundToolStripMenuItem, 
				this->textToolStripMenuItem});
			this->textboxFarbeToolStripMenuItem->Name = L"textboxFarbeToolStripMenuItem";
			this->textboxFarbeToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->textboxFarbeToolStripMenuItem->Text = L"Textbox Farbe";
			// 
			// hintergrundToolStripMenuItem
			// 
			this->hintergrundToolStripMenuItem->Name = L"hintergrundToolStripMenuItem";
			this->hintergrundToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->hintergrundToolStripMenuItem->Text = L"Hintergrund";
			this->hintergrundToolStripMenuItem->Click += gcnew System::EventHandler(this, &weiter::hintergrundToolStripMenuItem_Click);
			// 
			// textToolStripMenuItem
			// 
			this->textToolStripMenuItem->Name = L"textToolStripMenuItem";
			this->textToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->textToolStripMenuItem->Text = L"Text";
			this->textToolStripMenuItem->Click += gcnew System::EventHandler(this, &weiter::textToolStripMenuItem_Click);
			// 
			// buttonsFarbeToolStripMenuItem
			// 
			this->buttonsFarbeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->hintergrundToolStripMenuItem1, 
				this->textToolStripMenuItem1});
			this->buttonsFarbeToolStripMenuItem->Name = L"buttonsFarbeToolStripMenuItem";
			this->buttonsFarbeToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->buttonsFarbeToolStripMenuItem->Text = L"Buttons Farbe";
			// 
			// hintergrundToolStripMenuItem1
			// 
			this->hintergrundToolStripMenuItem1->Name = L"hintergrundToolStripMenuItem1";
			this->hintergrundToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->hintergrundToolStripMenuItem1->Text = L"Hintergrund";
			this->hintergrundToolStripMenuItem1->Click += gcnew System::EventHandler(this, &weiter::hintergrundToolStripMenuItem1_Click);
			// 
			// textToolStripMenuItem1
			// 
			this->textToolStripMenuItem1->Name = L"textToolStripMenuItem1";
			this->textToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->textToolStripMenuItem1->Text = L"Text";
			this->textToolStripMenuItem1->Click += gcnew System::EventHandler(this, &weiter::textToolStripMenuItem1_Click);
			// 
			// hilfeToolStripMenuItem
			// 
			this->hilfeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->versionToolStripMenuItem, 
				this->hilfeToolStripMenuItem1});
			this->hilfeToolStripMenuItem->Name = L"hilfeToolStripMenuItem";
			this->hilfeToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->hilfeToolStripMenuItem->Text = L"Hilfe";
			// 
			// versionToolStripMenuItem
			// 
			this->versionToolStripMenuItem->Name = L"versionToolStripMenuItem";
			this->versionToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->versionToolStripMenuItem->Text = L"Version";
			this->versionToolStripMenuItem->Click += gcnew System::EventHandler(this, &weiter::versionToolStripMenuItem_Click);
			// 
			// hilfeToolStripMenuItem1
			// 
			this->hilfeToolStripMenuItem1->Name = L"hilfeToolStripMenuItem1";
			this->hilfeToolStripMenuItem1->Size = System::Drawing::Size(113, 22);
			this->hilfeToolStripMenuItem1->Text = L"Hilfe";
			this->hilfeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &weiter::hilfeToolStripMenuItem1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1046, 532);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Textdateien|*.txt|Word Dokument|*.doc|Word Dokument 2007|*.dox|C++|*.cpp|C#|*.cs|" 
				L"Alle Dateien|*.*";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Textdateien  .txt|*.txt|C++  .cpp|*.cpp|Headerdateien  .h|*.h|C#  .cs|*.cs|Alle D" 
				L"ateien .*|*.*";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->toolStripStatusLabel1, 
				this->toolStripStatusLabel2, this->toolStripStatusLabel3, this->toolStripProgressBar1, this->toolStripStatusLabel4});
			this->statusStrip1->Location = System::Drawing::Point(0, 549);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1044, 22);
			this->statusStrip1->TabIndex = 4;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(190, 17);
			this->toolStripStatusLabel1->Text = L"Made by the MHMoritz3 and Saarli";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(39, 17);
			this->toolStripStatusLabel2->Text = L"Status";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(16, 17);
			this->toolStripStatusLabel3->Text = L"   ";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			this->toolStripProgressBar1->Step = 1;
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(10, 17);
			this->toolStripStatusLabel4->Text = L" ";
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->AcceptsTab = true;
			this->textBox1->AllowDrop = true;
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->CausesValidation = false;
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(21, 47);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(739, 486);
			this->textBox1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(787, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(237, 71);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Verschlüsseln";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &weiter::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(787, 134);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(237, 71);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Entschlüsseln";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &weiter::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(787, 220);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(237, 71);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Textbox: Freigeben / Entsperren";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &weiter::button4_Click);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->DocumentName = L"Textbox_Print";
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &weiter::printDocument1_PrintPage);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(787, 335);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(237, 166);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Verschlüsselungsart";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(7, 138);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(156, 17);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->Text = L"100 Fache Verschlüsselung";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(7, 115);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(150, 17);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->Text = L"10 Fache Verschlüsselung";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(7, 91);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(74, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->Text = L"Hashcode";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &weiter::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(7, 68);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(60, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"Enigma";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(7, 44);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(132, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Block Verschlüsselung";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(7, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(146, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Einfache verschlüsselung";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// weiter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1044, 571);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(764, 455);
			this->Name = L"weiter";
			this->Text = L"Elsbett - Coding";
			this->Load += gcnew System::EventHandler(this, &weiter::weiter_Load);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void weiter_Load(System::Object^  sender, System::EventArgs^  e) {

				/*Hide();
				start^ XY = gcnew start();
				XY->ShowDialog();
				Show();*/
			 }
	private: System::Void hilfeToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
				hilfe^ Help = gcnew hilfe();
				Help->ShowDialog();
			 }
private: System::Void versionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Version^ version = gcnew Version();
			 version->ShowDialog();
		 }
private: System::Void schließenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void öffnenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) 
              {
				  System::IO::StreamReader ^ OpenFile_Dialog = gcnew
				  System::IO::StreamReader(openFileDialog1->FileName);
				  this->textBox1->Text=OpenFile_Dialog->ReadToEnd();
				  OpenFile_Dialog->Close();

              }



		 }
	private: System::Void textEingebenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(this->textBox1->ReadOnly==false)
				 {
					 this->textBox1->ReadOnly=true;
				 }
				 else
				 {
					 this->textBox1->ReadOnly=false;
				 }

			 }
private: System::Void speichernToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->saveFileDialog1->ShowDialog();
			 if(this->saveFileDialog1->FileName != "")
			 {
				 System::IO::StreamWriter ^ SaveFile_Dialog = gcnew System::IO::StreamWriter(this->saveFileDialog1->FileName);
				 SaveFile_Dialog->Write(this->textBox1->Text);
				 SaveFile_Dialog->Close();
			 }

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel4->Text="";
			 if(textBox1->Text == "")
			 {
				 MessageBox::Show("Bitte geben Sie Text ein!", "Textbox Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }else
			 {
				 if (radioButton4->Checked==true)
				 {
					 toolStripStatusLabel4->Text="Inizialisierung";
					 toolStripProgressBar1->Value=10;
					 Sleep(1000);
					 using msclr::interop::marshal_as;
					 toolStripStatusLabel4->Text="Werte Konvertierung";
					 toolStripProgressBar1->Value=30;
					 Sleep(1000);
					 std::string string_string = marshal_as<std::string>(textBox1->Text);
					 toolStripStatusLabel4->Text="Erstellung Hashcode";
					 toolStripProgressBar1->Value=70;
					 Sleep(1000);
					 int k = stdext::hash_value(string_string);
					 toolStripStatusLabel4->Text="Werte Konvertierung";
					 toolStripProgressBar1->Value=90;
					 Sleep(1000);
					 std::string int_string;
					 std::stringstream out;
					 out << k;
					 int_string = out.str();
					 textBox1->Text= marshal_as<String^>(int_string);
					 toolStripStatusLabel4->Text="Hashcode Erstellung erfolgreich.";
					 toolStripProgressBar1->Value=100;
				 }
				 if (radioButton1->Checked==true)
				 {
					 toolStripProgressBar1->Value=10;
					 Sleep(1000);
					 C1FacheVerschuelsselung Fach1Versch;
					 toolStripProgressBar1->Value=30;
					 Sleep(1000);
					 Fach1Versch.uebergabe(textBox1->Text);
					 Fach1Versch.Zufallswert();
					 toolStripProgressBar1->Value=70;
					 Sleep(5000);
					 Fach1Versch.Verschluesselung();
					 toolStripStatusLabel4->Text="Einfache Verschlüsselung Erstellung erfolgreich.";
					 toolStripProgressBar1->Value=100;
					 textBox1->Text=Fach1Versch.ausgabe(false);
				 }
				 if (radioButton2->Checked==true)
				 {
					 toolStripProgressBar1->Value=10;
					 Sleep(1000);
					 CBlockVerschlueselung Fach1Versch;
					 toolStripProgressBar1->Value=30;
					 Sleep(1000);
					 Fach1Versch.uebergabe(textBox1->Text);
					 toolStripProgressBar1->Value=70;
					 Sleep(5000);
					 Fach1Versch.Verschluesselung();
					 toolStripStatusLabel4->Text="Einfache Verschlüsselung Erstellung erfolgreich.";
					 toolStripProgressBar1->Value=100;
					 textBox1->Text=Fach1Versch.ausgabe(false);
				 }
			 }

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text == "")
				 MessageBox::Show("Bitte geben Sie Text ein!", "Textbox Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 else
			 {

				 if (radioButton1->Checked==true)
				 {
					 C1FacheVerschuelsselung Fach1Versch;
					 Fach1Versch.uebergabe(textBox1->Text);
					 Fach1Versch.Entschluesselung();
					 textBox1->Text=Fach1Versch.ausgabe(true);
				 }
				 if (radioButton2->Checked==true)
				 {
					 CBlockVerschlueselung Blockversch;
					 Blockversch.uebergabe(textBox1->Text);
					 Blockversch.entschluesselung();
					 textBox1->Text=Blockversch.ausgabe(true);
				 }
			 }
		  }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(this->textBox1->ReadOnly==false)
				 {
					 this->textBox1->ReadOnly=true;
				 }
				 else
				 {
					 this->textBox1->ReadOnly=false;
				 }
			 }

private: System::Void hintergrundToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 colorDialog1->Color=textBox1->BackColor;
			 colorDialog1->ShowDialog();
			 textBox1->BackColor=colorDialog1->Color;
		 }
private: System::Void textToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 colorDialog1->Color=textBox1->ForeColor;
			 colorDialog1->ShowDialog();
			 textBox1->ForeColor=colorDialog1->Color;
		 }
private: System::Void hintergrundToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 colorDialog1->Color=button1->BackColor;
			 colorDialog1->ShowDialog();
			 button1->BackColor=colorDialog1->Color;
			 button2->BackColor=colorDialog1->Color;
			 button3->BackColor=colorDialog1->Color;
		 }
private: System::Void textToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 colorDialog1->Color=button1->ForeColor;
			 colorDialog1->ShowDialog();
			 button1->ForeColor=colorDialog1->Color;
			 button2->ForeColor=colorDialog1->Color;
			 button3->ForeColor=colorDialog1->Color;
		 }
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
			 this->textBox1->Text;
		 }

private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton4->Checked==true)
				if (MessageBox::Show("Warnung!!\nHashcodes sind nicht wieder entschlüsselbar.\nWollen Sie fortfahen?", "Warnung Hashcode", MessageBoxButtons::OKCancel, MessageBoxIcon::Error)!=System::Windows::Forms::DialogResult::OK)
				{
					radioButton4->Checked=false;
					radioButton1->Checked=true;
				}
		 }
};
}