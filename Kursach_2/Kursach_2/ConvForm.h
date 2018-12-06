#pragma once
#include "FireNumbers.h"
#include <stdio.h>
#include <math.h>
#include <string>

namespace Kursach2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ConvForm
	/// </summary>
	public ref class ConvForm : public System::Windows::Forms::Form
	{
	public:
		ConvForm(void)
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
		~ConvForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ConvForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(99, 73);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 53);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ConvForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button1->Location = System::Drawing::Point(232, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(271, 85);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ПЕРЕВЕСТИ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ConvForm::button1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Snow;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(482, 92);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(202, 34);
			this->linkLabel1->TabIndex = 4;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Результат = ";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::Fuchsia;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ConvForm::linkLabel1_LinkClicked_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(400, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Основание результата";
			this->label1->Click += gcnew System::EventHandler(this, &ConvForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(229, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Исходное основание";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(96, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Исходное число";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(272, 132);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(55, 34);
			this->numericUpDown1->TabIndex = 10;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &ConvForm::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->Location = System::Drawing::Point(448, 132);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(55, 34);
			this->numericUpDown2->TabIndex = 11;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &ConvForm::numericUpDown2_ValueChanged);
			// 
			// ConvForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(889, 348);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ConvForm";
			this->Text = L"ConvForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		linkLabel1->Text = L"Результат = ";

		Numbers numbers;
		
		String^ string_check_start = Convert::ToString(textBox1->Text);

		if (string_check_start == "") {
			MessageBox::Show("Поле ввода числа не заполнено!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			numbers.radix1 = Convert::ToInt32(numericUpDown1->Value);
			numbers.radix2 = Convert::ToInt32(numericUpDown2->Value);

			String^ string_check = Convert::ToString(textBox1->Text);

			int nota = 0;
			int count_check = string_check->Length;

			int *arr_check = new int[count_check];

			for (int i = 0; i < count_check; i++) {
				switch (string_check[i])
				{
				case 'A':
					arr_check[i] = 10;
					break;
				case 'B':
					arr_check[i] = 11;
					break;
				case 'C':
					arr_check[i] = 12;
					break;
				case 'D':
					arr_check[i] = 13;
					break;
				case 'E':
					arr_check[i] = 14;
					break;
				case 'F':
					arr_check[i] = 15;
					break;
				case '0':
					arr_check[i] = 0;
					break;
				case '1':
					arr_check[i] = 1;
					break;
				case '2':
					arr_check[i] = 2;
					break;
				case '3':
					arr_check[i] = 3;
					break;
				case '4':
					arr_check[i] = 4;
					break;
				case '5':
					arr_check[i] = 5;
					break;
				case '6':
					arr_check[i] = 6;
					break;
				case '7':
					arr_check[i] = 7;
					break;
				case '8':
					arr_check[i] = 8;
					break;
				case '9':
					arr_check[i] = 9;
					break;
				default:
					nota++;
				}
			}

			if (nota != 0) {
				MessageBox::Show("Некорректный ввод символов! Используйте цифры и буквы A, B, C, D, E или F", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				int check_check = 0;
				for (int i = 0; i < count_check; i++) {
					if (arr_check[i] >= numbers.radix1) {
						check_check++;
					}
				}

				if (check_check != 0) {
					MessageBox::Show("Введенное число не соответствует основанию!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					if (numbers.radix1 == 10) {
						int n = Convert::ToInt32(textBox1->Text);
						int n1 = Convert::ToInt32(textBox1->Text);
						char buffer[] = "          ";
						int i = 10;
					
						int g = 0;
						int x;
						while(n>0) {
							x = n % numbers.radix2;
							n = n / numbers.radix2;

							switch (x)
							{
							case 10:
								buffer[i] = 'A';
								break;
							case 11:
								buffer[i] = 'B';
								break;
							case 12:
								buffer[i] = 'C';
								break;
							case 13:
								buffer[i] = 'D';
								break;
							case 14:
								buffer[i] = 'E';
								break;
							case 15:
								buffer[i] = 'F';
								break;
							case 0:
								buffer[i] = '0';
								break;
							case 1:
								buffer[i] = '1';
								break;
							case 2:
								buffer[i] = '2';
								break;
							case 3:
								buffer[i] = '3';
								break;
							case 4:
								buffer[i] = '4';
								break;
							case 5:
								buffer[i] = '5';
								break;
							case 6:
								buffer[i] = '6';
								break;
							case 7:
								buffer[i] = '7';
								break;
							case 8:
								buffer[i] = '8';
								break;
							case 9:
								buffer[i] = '9';
								break;
							default:
								g++;
							}
							i--;
						}/* while (n > 0);*/

						int nota = 0;
						String^ result;

						for (int i = 0; i < strlen(buffer); i++) {
							switch (buffer[i])
							{
							case ' ':
								break;
							case 'A':
								result += "A";
								break;
							case 'B':
								result += "B";
								break;
							case 'C':
								result += "C";
								break;
							case 'D':
								result += "D";
								break;
							case 'E':
								result += "E";
								break;
							case 'F':
								result += "F";
								break;
							case '0':
								result += "0";
								break;
							case '1':
								result += "1";
								break;
							case '2':
								result += "2";
								break;
							case '3':
								result += "3";
								break;
							case '4':
								result += "4";
								break;
							case '5':
								result += "5";
								break;
							case '6':
								result += "6";
								break;
							case '7':
								result += "7";
								break;
							case '8':
								result += "8";
								break;
							case '9':
								result += "9";
								break;
							default:
								nota++;
							}
						}
						if (n1 == 0) {
							linkLabel1->Text = L"Результат = 0";
						}
						else {
							linkLabel1->Text = L"Результат = " + result;
						}
					}
					else if (numbers.radix2 == 10) {
						String^ n = Convert::ToString(textBox1->Text);

						int nota = 0;
						int count = n->Length;

						int *arr = new int[count];

						for (int i = 0; i < count; i++) {
							switch (n[i])
							{
							case 'A':
								arr[i] = 10;
								break;
							case 'B':
								arr[i] = 11;
								break;
							case 'C':
								arr[i] = 12;
								break;
							case 'D':
								arr[i] = 13;
								break;
							case 'E':
								arr[i] = 14;
								break;
							case 'F':
								arr[i] = 15;
								break;
							case '0':
								arr[i] = 0;
								break;
							case '1':
								arr[i] = 1;
								break;
							case '2':
								arr[i] = 2;
								break;
							case '3':
								arr[i] = 3;
								break;
							case '4':
								arr[i] = 4;
								break;
							case '5':
								arr[i] = 5;
								break;
							case '6':
								arr[i] = 6;
								break;
							case '7':
								arr[i] = 7;
								break;
							case '8':
								arr[i] = 8;
								break;
							case '9':
								arr[i] = 9;
								break;
							default:
								nota++;
							}
						}
						int result10;
						if (count > 1) {
							result10 = arr[0] * numbers.radix1 + arr[1];

							for (int i = 2; i < count; i++) {
								result10 = result10 * numbers.radix1 + arr[i];
							}
						}
						else {
							result10 = arr[0];
						}
						linkLabel1->Text = L"Результат = " + result10;
					}
					else {
						String^ n = Convert::ToString(textBox1->Text);

						int nota = 0;
						int count = n->Length;

						int *arr = new int[count];

						for (int i = 0; i < count; i++) {
							switch (n[i])
							{
							case 'A':
								arr[i] = 10;
								break;
							case 'B':
								arr[i] = 11;
								break;
							case 'C':
								arr[i] = 12;
								break;
							case 'D':
								arr[i] = 13;
								break;
							case 'E':
								arr[i] = 14;
								break;
							case 'F':
								arr[i] = 15;
								break;
							case '0':
								arr[i] = 0;
								break;
							case '1':
								arr[i] = 1;
								break;
							case '2':
								arr[i] = 2;
								break;
							case '3':
								arr[i] = 3;
								break;
							case '4':
								arr[i] = 4;
								break;
							case '5':
								arr[i] = 5;
								break;
							case '6':
								arr[i] = 6;
								break;
							case '7':
								arr[i] = 7;
								break;
							case '8':
								arr[i] = 8;
								break;
							case '9':
								arr[i] = 9;
								break;
							default:
								nota++;
							}
						}
						int result10;
						if (count > 1) {
							result10 = arr[0] * numbers.radix1 + arr[1];

							for (int i = 2; i < count; i++) {
								result10 = result10 * numbers.radix1 + arr[i];
							}
						}
						else {
							result10 = arr[0];
						}

						char buffer[] = "          ";
						int i = 10;
						int g = 0;

						do {
							int x = result10 % numbers.radix2;
							result10 = result10 / numbers.radix2;

							switch (x)
							{
							case 10:
								buffer[i] = 'A';
								break;
							case 11:
								buffer[i] = 'B';
								break;
							case 12:
								buffer[i] = 'C';
								break;
							case 13:
								buffer[i] = 'D';
								break;
							case 14:
								buffer[i] = 'E';
								break;
							case 15:
								buffer[i] = 'F';
								break;
							case 0:
								buffer[i] = '0';
								break;
							case 1:
								buffer[i] = '1';
								break;
							case 2:
								buffer[i] = '2';
								break;
							case 3:
								buffer[i] = '3';
								break;
							case 4:
								buffer[i] = '4';
								break;
							case 5:
								buffer[i] = '5';
								break;
							case 6:
								buffer[i] = '6';
								break;
							case 7:
								buffer[i] = '7';
								break;
							case 8:
								buffer[i] = '8';
								break;
							case 9:
								buffer[i] = '9';
								break;
							default:
								g++;
							}
							i--;
						} while (result10 > 0);

						String^ result;

						for (int i = 0; i < strlen(buffer); i++) {
							switch (buffer[i])
							{
							case ' ':
								break;
							case 'A':
								result += "A";
								break;
							case 'B':
								result += "B";
								break;
							case 'C':
								result += "C";
								break;
							case 'D':
								result += "D";
								break;
							case 'E':
								result += "E";
								break;
							case 'F':
								result += "F";
								break;
							case '0':
								result += "0";
								break;
							case '1':
								result += "1";
								break;
							case '2':
								result += "2";
								break;
							case '3':
								result += "3";
								break;
							case '4':
								result += "4";
								break;
							case '5':
								result += "5";
								break;
							case '6':
								result += "6";
								break;
							case '7':
								result += "7";
								break;
							case '8':
								result += "8";
								break;
							case '9':
								result += "9";
								break;
							default:
								break;
							}
						}

						linkLabel1->Text = L"Результат = " + result;
					}
				}
			}
		}
	}

	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void linkLabel1_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}