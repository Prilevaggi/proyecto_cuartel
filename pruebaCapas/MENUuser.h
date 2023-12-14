#pragma once

namespace pruebaCapas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ emergencias;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ MARGEN;
	private: System::Windows::Forms::Panel^ panel2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->MARGEN = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->emergencias = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->emergencias);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->MARGEN);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 514);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(200, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(776, 514);
			this->panel2->TabIndex = 1;
			// 
			// MARGEN
			// 
			this->MARGEN->Dock = System::Windows::Forms::DockStyle::Top;
			this->MARGEN->Location = System::Drawing::Point(0, 0);
			this->MARGEN->Name = L"MARGEN";
			this->MARGEN->Size = System::Drawing::Size(200, 100);
			this->MARGEN->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(0, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Inicio";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(0, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Guardias";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// emergencias
			// 
			this->emergencias->Cursor = System::Windows::Forms::Cursors::Hand;
			this->emergencias->Dock = System::Windows::Forms::DockStyle::Top;
			this->emergencias->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emergencias->Location = System::Drawing::Point(0, 184);
			this->emergencias->Name = L"emergencias";
			this->emergencias->Size = System::Drawing::Size(200, 42);
			this->emergencias->TabIndex = 3;
			this->emergencias->Text = L"Nuevo Servicio";
			this->emergencias->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(976, 514);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
