#pragma once
#include "MENUuser.h"


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace modelo;

	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ text_contra;
	protected:

	private: System::Windows::Forms::TextBox^ text_usuario;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_login;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->text_contra = (gcnew System::Windows::Forms::TextBox());
			this->text_usuario = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// text_contra
			// 
			this->text_contra->Location = System::Drawing::Point(132, 151);
			this->text_contra->Name = L"text_contra";
			this->text_contra->Size = System::Drawing::Size(217, 22);
			this->text_contra->TabIndex = 0;
			// 
			// text_usuario
			// 
			this->text_usuario->Location = System::Drawing::Point(132, 76);
			this->text_usuario->Name = L"text_usuario";
			this->text_usuario->Size = System::Drawing::Size(217, 22);
			this->text_usuario->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 5;
			// 
			// btn_login
			// 
			this->btn_login->Location = System::Drawing::Point(123, 198);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(239, 61);
			this->btn_login->TabIndex = 4;
			this->btn_login->Text = L"LOGIN";
			this->btn_login->UseVisualStyleBackColor = true;
			this->btn_login->Click += gcnew System::EventHandler(this, &Form1::btn_login_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 338);
			this->Controls->Add(this->btn_login);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->text_usuario);
			this->Controls->Add(this->text_contra);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {
		if (text_usuario->Text != "" && text_contra->Text != "") {
			ModeloUsuario^ user = gcnew ModeloUsuario();
			bool logueado = user->loguinUser(text_usuario->Text, text_contra->Text);
			if (logueado) {
				
				
			}
			else
				MessageBox::Show("Usuario Incorrecto");
		}
		else MessageBox::Show("Complete Campos");
	}
	};
}
