namespace Project1 {

			using namespace System;
			using namespace System::ComponentModel;
			using namespace System::Collections;
			using namespace System::Windows::Forms;
			using namespace System::Data;
			using namespace System::Drawing;

			/// <summary>
			/// Summary for set1
			/// </summary>
			public ref class set1 : public System::Windows::Forms::Form
			{
			public:
				set1(void)
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
				~set1()
				{
					if (components)
					{
						delete components;
					}
				}
			private: System::Windows::Forms::Panel^ panel1;
			protected:
			private: System::Windows::Forms::Label^ label1;
			private: System::Windows::Forms::Label^ label3;
			private: System::Windows::Forms::Label^ label2;
			private: System::Windows::Forms::Label^ label4;
			private: System::Windows::Forms::Label^ label11;
			private: System::Windows::Forms::Label^ label10;
			private: System::Windows::Forms::Label^ label9;

			private: System::Windows::Forms::Label^ label7;
			private: System::Windows::Forms::Label^ label6;
			private: System::Windows::Forms::Label^ label5;
			private: System::Windows::Forms::Label^ label16;
			private: System::Windows::Forms::Label^ label15;
			private: System::Windows::Forms::Label^ label14;
			private: System::Windows::Forms::Label^ label13;
			private: System::Windows::Forms::Label^ label12;
			private: System::Windows::Forms::Label^ label8;
			private: System::Windows::Forms::Label^ label22;
			private: System::Windows::Forms::Label^ label21;
			private: System::Windows::Forms::Label^ label20;
			private: System::Windows::Forms::Label^ label19;
			private: System::Windows::Forms::Label^ label18;
			private: System::Windows::Forms::Label^ label17;
			private: System::Windows::Forms::Panel^ panel2;

			private:
				/// <summary>
				/// Required designer variable.
				/// </summary>
				System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
				/// <summary>
				/// Required method for Designer support - do not modify
				/// the contents of this method with the code editor.
				/// </summary>
				void InitializeComponent(void)
				{
					System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(set1::typeid));
					this->panel1 = (gcnew System::Windows::Forms::Panel());
					this->label11 = (gcnew System::Windows::Forms::Label());
					this->label10 = (gcnew System::Windows::Forms::Label());
					this->label9 = (gcnew System::Windows::Forms::Label());
					this->label7 = (gcnew System::Windows::Forms::Label());
					this->label6 = (gcnew System::Windows::Forms::Label());
					this->label16 = (gcnew System::Windows::Forms::Label());
					this->label15 = (gcnew System::Windows::Forms::Label());
					this->label14 = (gcnew System::Windows::Forms::Label());
					this->label13 = (gcnew System::Windows::Forms::Label());
					this->label12 = (gcnew System::Windows::Forms::Label());
					this->label22 = (gcnew System::Windows::Forms::Label());
					this->label21 = (gcnew System::Windows::Forms::Label());
					this->label20 = (gcnew System::Windows::Forms::Label());
					this->label19 = (gcnew System::Windows::Forms::Label());
					this->label18 = (gcnew System::Windows::Forms::Label());
					this->label17 = (gcnew System::Windows::Forms::Label());
					this->label8 = (gcnew System::Windows::Forms::Label());
					this->label5 = (gcnew System::Windows::Forms::Label());
					this->label3 = (gcnew System::Windows::Forms::Label());
					this->label4 = (gcnew System::Windows::Forms::Label());
					this->label2 = (gcnew System::Windows::Forms::Label());
					this->label1 = (gcnew System::Windows::Forms::Label());
					this->panel2 = (gcnew System::Windows::Forms::Panel());
					this->panel1->SuspendLayout();
					this->panel2->SuspendLayout();
					this->SuspendLayout();
					// 
					// panel1
					// 
					this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
						static_cast<System::Int32>(static_cast<System::Byte>(61)));
					this->panel1->Controls->Add(this->panel2);
					this->panel1->Controls->Add(this->label1);
					this->panel1->Location = System::Drawing::Point(1, 0);
					this->panel1->Name = L"panel1";
					this->panel1->Size = System::Drawing::Size(967, 468);
					this->panel1->TabIndex = 0;
					// 
					// label11
					// 
					this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label11.Image")));
					this->label11->Location = System::Drawing::Point(36, 272);
					this->label11->Name = L"label11";
					this->label11->Size = System::Drawing::Size(230, 37);
					this->label11->TabIndex = 0;
					this->label11->Text = L"Extra";
					// 
					// label10
					// 
					this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
					this->label10->Location = System::Drawing::Point(36, 235);
					this->label10->Name = L"label10";
					this->label10->Size = System::Drawing::Size(230, 37);
					this->label10->TabIndex = 0;
					this->label10->Text = L"Schooling";
					// 
					// label9
					// 
					this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
					this->label9->Location = System::Drawing::Point(36, 198);
					this->label9->Name = L"label9";
					this->label9->Size = System::Drawing::Size(230, 37);
					this->label9->TabIndex = 0;
					this->label9->Text = L"Laundry";
					this->label9->Click += gcnew System::EventHandler(this, &set1::label9_Click);
					// 
					// label7
					// 
					this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
					this->label7->Location = System::Drawing::Point(36, 161);
					this->label7->Name = L"label7";
					this->label7->Size = System::Drawing::Size(230, 37);
					this->label7->TabIndex = 0;
					this->label7->Text = L"Lodging";
					// 
					// label6
					// 
					this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
					this->label6->Location = System::Drawing::Point(36, 124);
					this->label6->Name = L"label6";
					this->label6->Size = System::Drawing::Size(230, 37);
					this->label6->TabIndex = 0;
					this->label6->Text = L"Fooding";
					// 
					// label16
					// 
					this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label16.Image")));
					this->label16->Location = System::Drawing::Point(285, 272);
					this->label16->Name = L"label16";
					this->label16->Size = System::Drawing::Size(230, 30);
					this->label16->TabIndex = 0;
					this->label16->Text = L"XXX";
					// 
					// label15
					// 
					this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label15.Image")));
					this->label15->Location = System::Drawing::Point(286, 235);
					this->label15->Name = L"label15";
					this->label15->Size = System::Drawing::Size(230, 30);
					this->label15->TabIndex = 0;
					this->label15->Text = L"XXX";
					// 
					// label14
					// 
					this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label14.Image")));
					this->label14->Location = System::Drawing::Point(285, 198);
					this->label14->Name = L"label14";
					this->label14->Size = System::Drawing::Size(230, 30);
					this->label14->TabIndex = 0;
					this->label14->Text = L"XXX";
					// 
					// label13
					// 
					this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label13.Image")));
					this->label13->Location = System::Drawing::Point(285, 161);
					this->label13->Name = L"label13";
					this->label13->Size = System::Drawing::Size(230, 30);
					this->label13->TabIndex = 0;
					this->label13->Text = L"XXX";
					this->label13->Click += gcnew System::EventHandler(this, &set1::label13_Click);
					// 
					// label12
					// 
					this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label12.Image")));
					this->label12->Location = System::Drawing::Point(285, 124);
					this->label12->Name = L"label12";
					this->label12->Size = System::Drawing::Size(230, 30);
					this->label12->TabIndex = 0;
					this->label12->Text = L"XXX";
					this->label12->Click += gcnew System::EventHandler(this, &set1::label12_Click);
					// 
					// label22
					// 
					this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label22.Image")));
					this->label22->Location = System::Drawing::Point(551, 272);
					this->label22->Name = L"label22";
					this->label22->Size = System::Drawing::Size(230, 30);
					this->label22->TabIndex = 0;
					this->label22->Text = L"XXX";
					// 
					// label21
					// 
					this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label21.Image")));
					this->label21->Location = System::Drawing::Point(551, 235);
					this->label21->Name = L"label21";
					this->label21->Size = System::Drawing::Size(230, 30);
					this->label21->TabIndex = 0;
					this->label21->Text = L"XXX";
					// 
					// label20
					// 
					this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label20.Image")));
					this->label20->Location = System::Drawing::Point(551, 198);
					this->label20->Name = L"label20";
					this->label20->Size = System::Drawing::Size(230, 30);
					this->label20->TabIndex = 0;
					this->label20->Text = L"XXX";
					// 
					// label19
					// 
					this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label19.Image")));
					this->label19->Location = System::Drawing::Point(551, 161);
					this->label19->Name = L"label19";
					this->label19->Size = System::Drawing::Size(230, 30);
					this->label19->TabIndex = 0;
					this->label19->Text = L"XXX";
					// 
					// label18
					// 
					this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label18.Image")));
					this->label18->Location = System::Drawing::Point(551, 124);
					this->label18->Name = L"label18";
					this->label18->Size = System::Drawing::Size(230, 30);
					this->label18->TabIndex = 0;
					this->label18->Text = L"XXX";
					// 
					// label17
					// 
					this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label17.Image")));
					this->label17->Location = System::Drawing::Point(551, 87);
					this->label17->Name = L"label17";
					this->label17->Size = System::Drawing::Size(230, 30);
					this->label17->TabIndex = 0;
					this->label17->Text = L"XXX";
					// 
					// label8
					// 
					this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
					this->label8->Location = System::Drawing::Point(285, 87);
					this->label8->Name = L"label8";
					this->label8->Size = System::Drawing::Size(230, 30);
					this->label8->TabIndex = 0;
					this->label8->Text = L"XXX";
					// 
					// label5
					// 
					this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
						static_cast<System::Int32>(static_cast<System::Byte>(239)));
					this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
					this->label5->Location = System::Drawing::Point(36, 87);
					this->label5->Name = L"label5";
					this->label5->Size = System::Drawing::Size(230, 37);
					this->label5->TabIndex = 0;
					this->label5->Text = L"Housing";
					this->label5->Click += gcnew System::EventHandler(this, &set1::label5_Click);
					// 
					// label3
					// 
					this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label3->ForeColor = System::Drawing::Color::Blue;
					this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
					this->label3->Location = System::Drawing::Point(551, 35);
					this->label3->Name = L"label3";
					this->label3->Size = System::Drawing::Size(230, 41);
					this->label3->TabIndex = 0;
					this->label3->Text = L"Current:";
					// 
					// label4
					// 
					this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label4->ForeColor = System::Drawing::Color::Blue;
					this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
					this->label4->Location = System::Drawing::Point(285, 35);
					this->label4->Name = L"label4";
					this->label4->Size = System::Drawing::Size(230, 41);
					this->label4->TabIndex = 0;
					this->label4->Text = L"Expected:";
					this->label4->Click += gcnew System::EventHandler(this, &set1::label2_Click);
					// 
					// label2
					// 
					this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label2->ForeColor = System::Drawing::Color::Blue;
					this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
					this->label2->Location = System::Drawing::Point(36, 35);
					this->label2->Name = L"label2";
					this->label2->Size = System::Drawing::Size(230, 41);
					this->label2->TabIndex = 0;
					this->label2->Text = L"Criteria:";
					this->label2->Click += gcnew System::EventHandler(this, &set1::label2_Click);
					// 
					// label1
					// 
					this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
					this->label1->Location = System::Drawing::Point(71, 23);
					this->label1->Name = L"label1";
					this->label1->Size = System::Drawing::Size(514, 60);
					this->label1->TabIndex = 0;
					this->label1->Text = L"Your Current Status";
					// 
					// panel2
					// 
					this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
					this->panel2->Controls->Add(this->label11);
					this->panel2->Controls->Add(this->label10);
					this->panel2->Controls->Add(this->label9);
					this->panel2->Controls->Add(this->label7);
					this->panel2->Controls->Add(this->label6);
					this->panel2->Controls->Add(this->label16);
					this->panel2->Controls->Add(this->label15);
					this->panel2->Controls->Add(this->label14);
					this->panel2->Controls->Add(this->label13);
					this->panel2->Controls->Add(this->label12);
					this->panel2->Controls->Add(this->label22);
					this->panel2->Controls->Add(this->label21);
					this->panel2->Controls->Add(this->label20);
					this->panel2->Controls->Add(this->label19);
					this->panel2->Controls->Add(this->label18);
					this->panel2->Controls->Add(this->label17);
					this->panel2->Controls->Add(this->label8);
					this->panel2->Controls->Add(this->label5);
					this->panel2->Controls->Add(this->label3);
					this->panel2->Controls->Add(this->label4);
					this->panel2->Controls->Add(this->label2);
					this->panel2->Location = System::Drawing::Point(82, 104);
					this->panel2->Name = L"panel2";
					this->panel2->Size = System::Drawing::Size(786, 325);
					this->panel2->TabIndex = 1;
					// 
					// set1
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->ClientSize = System::Drawing::Size(968, 473);
					this->Controls->Add(this->panel1);
					this->Name = L"set1";
					this->Text = L"set1";
					this->panel1->ResumeLayout(false);
					this->panel2->ResumeLayout(false);
					this->ResumeLayout(false);

				}
#pragma endregion

			private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
			}
			private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
			}
			private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
			}
			private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
			}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
		}
	}
	};
}
