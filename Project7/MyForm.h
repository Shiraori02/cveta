#pragma once

namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)//huy sosi sherbak
			{//huy sosi sherbak
				delete components; //huy sosi sherbak 
			}//huy sosi sherbak
		}//huy sosi sherbak
	private: System::Windows::Forms::Label^ label1; //huy sosi sherbak
	protected://huy sosi sherbak

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Вам нравится работать в С++";
			
			// 
			// MyForm
			// 
			
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode)
		{
			
		case 'y': { this->BackColor = System::Drawing::Color::Green; break; }      
		case 'Y': { this->BackColor = System::Drawing::Color::Green; break; }
		case 'n': { this->BackColor = System::Drawing::Color::Red; break; }
		case 'N': { this->BackColor = System::Drawing::Color::Red; break; }

		}
		
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode)
		{

		case 'y': { this->BackColor = System::Drawing::Color::Green; break; }
		case 'Y': { this->BackColor = System::Drawing::Color::Green; break; }
		case 'n': { this->BackColor = System::Drawing::Color::Red; break; }
		case 'N': { this->BackColor = System::Drawing::Color::Red; break; }

		} 
	}
	};
}
