#pragma once

#include"expenseentry.h"
#include"incomeentry.h"
#include"expenseobject.h"
#include"incomeobject.h"
#include"transobject.h"
#include"incomemanager.h"
#include"goalmanager.h"
#include"transmanager.h"
#include"expensemanager.h"
#include"User.h"
#include"usermanager.h"
#include <cliext/utility>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class dashboard : public System::Windows::Forms::Form
	{
	private:

		// expensemanager, incomemanager haru 
		User^ currentUser;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Panel^ panel13;




	private: System::Windows::Forms::Label^ label23;
		   ExpenseManager^ expensemanager;
		   GoalManager^ goalmanager;
	private: System::Windows::Forms::Label^ label26;

		   IncomeManager^ incomemanager;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ goalspanel;
	private: System::Windows::Forms::Button^ button11;


	private: System::Windows::Forms::ComboBox^ comboBox1;






	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;






















	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Label^ label70;
	private: System::Windows::Forms::Label^ label71;
	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ housingstatus;

	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label45;

	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel25;

		   TransactionManager^ transmanager;

	public:
		dashboard(User^ user)
		{

			InitializeComponent();
			currentUser = user;
			expensemanager = gcnew ExpenseManager(currentUser);
			incomemanager = gcnew IncomeManager(currentUser);
			transmanager = gcnew TransactionManager(currentUser);
			goalmanager = gcnew GoalManager(currentUser);
			expensePanel->Hide();
			expcategory->Hide();
			panel14->Hide();
			panel11->Hide();
			goalspanel->Hide();
			UpdateUI();




			//
			//TODO: Add the constructor code here
			//
		}

		void UpdateUI()
		{
			// Use the loggedInUser object to populate the UI with user-specific data
			String^ username = currentUser->username;
			label2->Text = username;
			label3->Text = username->Substring(0, 1);
			// Load and display expenses, current balance, etc.
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Panel^ panel1;
		String^ username;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Panel^ panelUserIcon;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;




	private: System::Windows::Forms::Label^ label10;





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;




	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel8;


	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ expensePanel;
	private: System::Windows::Forms::Panel^ expcategory;








	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;





















	private: System::Windows::Forms::Label^ label44;





	private: System::Windows::Forms::Button^ addexpbtn;

	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Button^ backbtn;

	private: System::Windows::Forms::Button^ housingbtn;

	private: System::Windows::Forms::Panel^ expParent;
	private: System::Windows::Forms::Button^ entertainbtn;
	private: System::Windows::Forms::Button^ groceriesbtn;


	private: System::Windows::Forms::Button^ healthbtn;

	private: System::Windows::Forms::Button^ utilitiesbtn;

	private: System::Windows::Forms::Button^ foodbtn;



















































	private: System::Windows::Forms::Label^ label19;



	private:
		/// <summary>


		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->expensePanel = (gcnew System::Windows::Forms::Panel());
			this->entertainbtn = (gcnew System::Windows::Forms::Button());
			this->groceriesbtn = (gcnew System::Windows::Forms::Button());
			this->healthbtn = (gcnew System::Windows::Forms::Button());
			this->utilitiesbtn = (gcnew System::Windows::Forms::Button());
			this->foodbtn = (gcnew System::Windows::Forms::Button());
			this->housingbtn = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->expcategory = (gcnew System::Windows::Forms::Panel());
			this->addexpbtn = (gcnew System::Windows::Forms::Button());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->backbtn = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->expParent = (gcnew System::Windows::Forms::Panel());
			this->goalspanel = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->housingstatus = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->expensePanel->SuspendLayout();
			this->expcategory->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->expParent->SuspendLayout();
			this->goalspanel->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel16->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(331, 773);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel1_Paint);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(94, 664);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(156, 61);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Sign Out";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &dashboard::button7_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(3, 532);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(328, 50);
			this->button6->TabIndex = 8;
			this->button6->Text = L"See Stats";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &dashboard::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(3, 475);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(328, 50);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Set Goals";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &dashboard::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(3, 419);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(328, 50);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Expenses";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &dashboard::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(3, 363);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(328, 50);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Income";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &dashboard::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(3, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(328, 50);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Transactions";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &dashboard::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(328, 50);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Dashboard";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &dashboard::button1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(100, 55);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(118, 109);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel3_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 47));
			this->label3->Location = System::Drawing::Point(20, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 90);
			this->label3->TabIndex = 0;
			this->label3->Text = L"J";
			this->label3->Click += gcnew System::EventHandler(this, &dashboard::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(97, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Jane Doe";
			this->label2->Click += gcnew System::EventHandler(this, &dashboard::label2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->panel2->Controls->Add(this->panel10);
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Location = System::Drawing::Point(9, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1220, 773);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel2_Paint);
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->Controls->Add(this->label17);
			this->panel10->Controls->Add(this->label16);
			this->panel10->Location = System::Drawing::Point(940, 271);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(173, 138);
			this->panel10->TabIndex = 0;
			this->panel10->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel10_Paint);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label17->Location = System::Drawing::Point(63, 73);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 25);
			this->label17->TabIndex = 1;
			this->label17->Text = L"XX";
			this->label17->Click += gcnew System::EventHandler(this, &dashboard::label17_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label16->Location = System::Drawing::Point(10, 30);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(156, 28);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Used Income %";
			this->label16->Click += gcnew System::EventHandler(this, &dashboard::label16_Click);
			// 
			// panel9
			// 
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->Controls->Add(this->panel15);
			this->panel9->Controls->Add(this->label10);
			this->panel9->Location = System::Drawing::Point(746, 433);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(381, 302);
			this->panel9->TabIndex = 6;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel9_Paint);
			// 
			// panel15
			// 
			this->panel15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel15.BackgroundImage")));
			this->panel15->Location = System::Drawing::Point(21, 61);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(346, 228);
			this->panel15->TabIndex = 1;
			this->panel15->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel15_Paint);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->Location = System::Drawing::Point(14, 20);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(209, 38);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Recent History:";
			this->label10->Click += gcnew System::EventHandler(this, &dashboard::label10_Click);
			// 
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->Controls->Add(this->label24);
			this->panel8->Controls->Add(this->label22);
			this->panel8->Controls->Add(this->label21);
			this->panel8->Controls->Add(this->label20);
			this->panel8->Controls->Add(this->label19);
			this->panel8->Location = System::Drawing::Point(20, 537);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(707, 203);
			this->panel8->TabIndex = 5;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel8_Paint);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label24->Location = System::Drawing::Point(18, 156);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(305, 27);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Shopping                                          ";
			this->label24->Click += gcnew System::EventHandler(this, &dashboard::label24_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label22.Image")));
			this->label22->Location = System::Drawing::Point(13, 110);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(257, 28);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Highest Expense Category:";
			this->label22->Click += gcnew System::EventHandler(this, &dashboard::label22_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(35, 110);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 17);
			this->label21->TabIndex = 3;
			this->label21->Click += gcnew System::EventHandler(this, &dashboard::label21_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label20->Location = System::Drawing::Point(18, 62);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(306, 27);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Content Creation                       XXX";
			this->label20->Click += gcnew System::EventHandler(this, &dashboard::label20_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label19.Image")));
			this->label19->Location = System::Drawing::Point(13, 14);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(234, 28);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Biggest Expense Record:";
			this->label19->Click += gcnew System::EventHandler(this, &dashboard::label19_Click);
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Location = System::Drawing::Point(20, 431);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(222, 91);
			this->panel5->TabIndex = 3;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel5_Paint);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(77, 49);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 28);
			this->label7->TabIndex = 1;
			this->label7->Text = L"XXXX";
			this->label7->Click += gcnew System::EventHandler(this, &dashboard::label7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(41, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 32);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Total Income";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Click += gcnew System::EventHandler(this, &dashboard::label4_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->button9->Location = System::Drawing::Point(940, 96);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(173, 61);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Delete Record";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &dashboard::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->button8->Location = System::Drawing::Point(940, 15);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(173, 61);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Set Entry";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &dashboard::button8_Click);
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Controls->Add(this->label6);
			this->panel7->Controls->Add(this->label9);
			this->panel7->Location = System::Drawing::Point(503, 431);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(224, 91);
			this->panel7->TabIndex = 5;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel7_Paint_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(80, 51);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 28);
			this->label6->TabIndex = 2;
			this->label6->Text = L"XXXX";
			this->label6->Click += gcnew System::EventHandler(this, &dashboard::label6_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(59, 7);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 32);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Balance";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label9->Click += gcnew System::EventHandler(this, &dashboard::label9_Click);
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->label5);
			this->panel6->Location = System::Drawing::Point(261, 432);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(223, 91);
			this->panel6->TabIndex = 7;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel6_Paint);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(76, 48);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 28);
			this->label8->TabIndex = 2;
			this->label8->Text = L"XXXX";
			this->label8->Click += gcnew System::EventHandler(this, &dashboard::label8_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(30, 6);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 32);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Total Expenses";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label5->Click += gcnew System::EventHandler(this, &dashboard::label5_Click);
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel4->Controls->Add(this->label18);
			this->panel4->Location = System::Drawing::Point(20, 15);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(878, 396);
			this->panel4->TabIndex = 2;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel4_Paint);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label18.Image")));
			this->label18->Location = System::Drawing::Point(284, 9);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(315, 41);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Income V/S Expenses";
			this->label18->Click += gcnew System::EventHandler(this, &dashboard::label18_Click);
			// 
			// expensePanel
			// 
			this->expensePanel->BackColor = System::Drawing::SystemColors::Control;
			this->expensePanel->Controls->Add(this->entertainbtn);
			this->expensePanel->Controls->Add(this->groceriesbtn);
			this->expensePanel->Controls->Add(this->healthbtn);
			this->expensePanel->Controls->Add(this->utilitiesbtn);
			this->expensePanel->Controls->Add(this->foodbtn);
			this->expensePanel->Controls->Add(this->housingbtn);
			this->expensePanel->Controls->Add(this->label33);
			this->expensePanel->Controls->Add(this->label34);
			this->expensePanel->Controls->Add(this->label44);
			this->expensePanel->Location = System::Drawing::Point(0, 0);
			this->expensePanel->Name = L"expensePanel";
			this->expensePanel->Size = System::Drawing::Size(1148, 773);
			this->expensePanel->TabIndex = 1;
			this->expensePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::expensePanel_Paint);
			// 
			// entertainbtn
			// 
			this->entertainbtn->BackColor = System::Drawing::Color::Transparent;
			this->entertainbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->entertainbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->entertainbtn->ForeColor = System::Drawing::Color::Black;
			this->entertainbtn->Location = System::Drawing::Point(461, 342);
			this->entertainbtn->Name = L"entertainbtn";
			this->entertainbtn->Size = System::Drawing::Size(195, 91);
			this->entertainbtn->TabIndex = 38;
			this->entertainbtn->Text = L"Entertainment";
			this->entertainbtn->UseVisualStyleBackColor = false;
			this->entertainbtn->Click += gcnew System::EventHandler(this, &dashboard::entertainbtn_Click);
			// 
			// groceriesbtn
			// 
			this->groceriesbtn->BackColor = System::Drawing::Color::Transparent;
			this->groceriesbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groceriesbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->groceriesbtn->ForeColor = System::Drawing::Color::Black;
			this->groceriesbtn->Location = System::Drawing::Point(810, 341);
			this->groceriesbtn->Name = L"groceriesbtn";
			this->groceriesbtn->Size = System::Drawing::Size(173, 91);
			this->groceriesbtn->TabIndex = 37;
			this->groceriesbtn->Text = L"Groceries";
			this->groceriesbtn->UseVisualStyleBackColor = false;
			this->groceriesbtn->Click += gcnew System::EventHandler(this, &dashboard::groceriesbtn_Click);
			// 
			// healthbtn
			// 
			this->healthbtn->BackColor = System::Drawing::Color::Transparent;
			this->healthbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->healthbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->healthbtn->ForeColor = System::Drawing::Color::Black;
			this->healthbtn->Location = System::Drawing::Point(144, 342);
			this->healthbtn->Name = L"healthbtn";
			this->healthbtn->Size = System::Drawing::Size(173, 91);
			this->healthbtn->TabIndex = 36;
			this->healthbtn->Text = L"Health";
			this->healthbtn->UseVisualStyleBackColor = false;
			this->healthbtn->Click += gcnew System::EventHandler(this, &dashboard::healthbtn_Click);
			// 
			// utilitiesbtn
			// 
			this->utilitiesbtn->BackColor = System::Drawing::Color::Transparent;
			this->utilitiesbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->utilitiesbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->utilitiesbtn->ForeColor = System::Drawing::Color::Black;
			this->utilitiesbtn->Location = System::Drawing::Point(810, 190);
			this->utilitiesbtn->Name = L"utilitiesbtn";
			this->utilitiesbtn->Size = System::Drawing::Size(173, 91);
			this->utilitiesbtn->TabIndex = 35;
			this->utilitiesbtn->Text = L"Utilities";
			this->utilitiesbtn->UseVisualStyleBackColor = false;
			this->utilitiesbtn->Click += gcnew System::EventHandler(this, &dashboard::utilitiesbtn_Click);
			// 
			// foodbtn
			// 
			this->foodbtn->BackColor = System::Drawing::Color::Transparent;
			this->foodbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->foodbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->foodbtn->ForeColor = System::Drawing::Color::Black;
			this->foodbtn->Location = System::Drawing::Point(472, 190);
			this->foodbtn->Name = L"foodbtn";
			this->foodbtn->Size = System::Drawing::Size(173, 91);
			this->foodbtn->TabIndex = 34;
			this->foodbtn->Text = L"Food";
			this->foodbtn->UseVisualStyleBackColor = false;
			this->foodbtn->Click += gcnew System::EventHandler(this, &dashboard::foodbtn_Click);
			// 
			// housingbtn
			// 
			this->housingbtn->BackColor = System::Drawing::Color::Transparent;
			this->housingbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->housingbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->housingbtn->ForeColor = System::Drawing::Color::Black;
			this->housingbtn->Location = System::Drawing::Point(139, 190);
			this->housingbtn->Name = L"housingbtn";
			this->housingbtn->Size = System::Drawing::Size(173, 91);
			this->housingbtn->TabIndex = 1;
			this->housingbtn->Text = L"Housing";
			this->housingbtn->UseVisualStyleBackColor = false;
			this->housingbtn->Click += gcnew System::EventHandler(this, &dashboard::housingbtn_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(612, 559);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(59, 34);
			this->label33->TabIndex = 26;
			this->label33->Text = L"XXX";
			this->label33->Click += gcnew System::EventHandler(this, &dashboard::label33_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(408, 559);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(177, 34);
			this->label34->TabIndex = 25;
			this->label34->Text = L"Total Expenses:";
			this->label34->Click += gcnew System::EventHandler(this, &dashboard::label34_Click);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(430, 67);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(338, 51);
			this->label44->TabIndex = 18;
			this->label44->Text = L"Choose a Category";
			this->label44->Click += gcnew System::EventHandler(this, &dashboard::label44_Click);
			// 
			// expcategory
			// 
			this->expcategory->BackColor = System::Drawing::SystemColors::Control;
			this->expcategory->Controls->Add(this->addexpbtn);
			this->expcategory->Controls->Add(this->label50);
			this->expcategory->Controls->Add(this->label51);
			this->expcategory->Controls->Add(this->label52);
			this->expcategory->Controls->Add(this->backbtn);
			this->expcategory->Location = System::Drawing::Point(0, 0);
			this->expcategory->Name = L"expcategory";
			this->expcategory->Size = System::Drawing::Size(1148, 773);
			this->expcategory->TabIndex = 34;
			this->expcategory->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::expcategory_Paint);
			// 
			// addexpbtn
			// 
			this->addexpbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->addexpbtn->Location = System::Drawing::Point(883, 62);
			this->addexpbtn->Name = L"addexpbtn";
			this->addexpbtn->Size = System::Drawing::Size(144, 44);
			this->addexpbtn->TabIndex = 14;
			this->addexpbtn->Text = L"Add Expense";
			this->addexpbtn->UseVisualStyleBackColor = true;
			this->addexpbtn->Click += gcnew System::EventHandler(this, &dashboard::addexpbtn_Click);
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(619, 146);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(46, 29);
			this->label50->TabIndex = 13;
			this->label50->Text = L"xxx";
			this->label50->Click += gcnew System::EventHandler(this, &dashboard::label50_Click);
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(405, 147);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(219, 28);
			this->label51->TabIndex = 12;
			this->label51->Text = L"Expense Contribution: ";
			this->label51->Click += gcnew System::EventHandler(this, &dashboard::label51_Click);
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(41, 44);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(150, 32);
			this->label52->TabIndex = 11;
			this->label52->Text = L"Category >>";
			this->label52->Click += gcnew System::EventHandler(this, &dashboard::label52_Click);
			// 
			// backbtn
			// 
			this->backbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backbtn->Location = System::Drawing::Point(931, 643);
			this->backbtn->Name = L"backbtn";
			this->backbtn->Size = System::Drawing::Size(96, 35);
			this->backbtn->TabIndex = 20;
			this->backbtn->Text = L"Back";
			this->backbtn->UseVisualStyleBackColor = true;
			this->backbtn->Click += gcnew System::EventHandler(this, &dashboard::backbtn_Click);
			// 
			// bindingSource1
			// 
			this->bindingSource1->CurrentChanged += gcnew System::EventHandler(this, &dashboard::bindingSource1_CurrentChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45));
			this->label1->Location = System::Drawing::Point(26, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 85);
			this->label1->TabIndex = 0;
			this->label1->Text = L"J";
			this->label1->Click += gcnew System::EventHandler(this, &dashboard::label1_Click);
			// 
			// expParent
			// 
			this->expParent->Controls->Add(this->goalspanel);
			this->expParent->Controls->Add(this->panel11);
			this->expParent->Controls->Add(this->expcategory);
			this->expParent->Controls->Add(this->expensePanel);
			this->expParent->Controls->Add(this->panel2);
			this->expParent->Controls->Add(this->panel14);
			this->expParent->Dock = System::Windows::Forms::DockStyle::Right;
			this->expParent->Location = System::Drawing::Point(334, 0);
			this->expParent->Name = L"expParent";
			this->expParent->Size = System::Drawing::Size(1148, 773);
			this->expParent->TabIndex = 1;
			this->expParent->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::expParent_Paint);
			// 
			// goalspanel
			// 
			this->goalspanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->goalspanel->Controls->Add(this->panel24);
			this->goalspanel->Controls->Add(this->panel17);
			this->goalspanel->Controls->Add(this->label30);
			this->goalspanel->Controls->Add(this->label55);
			this->goalspanel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->goalspanel->Location = System::Drawing::Point(0, 0);
			this->goalspanel->Name = L"goalspanel";
			this->goalspanel->Size = System::Drawing::Size(1148, 773);
			this->goalspanel->TabIndex = 32;
			this->goalspanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::goalspanel_Paint);
			// 
			// panel24
			// 
			this->panel24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel24.BackgroundImage")));
			this->panel24->Controls->Add(this->label28);
			this->panel24->Controls->Add(this->label27);
			this->panel24->Controls->Add(this->label12);
			this->panel24->Controls->Add(this->panel21);
			this->panel24->Controls->Add(this->panel23);
			this->panel24->Controls->Add(this->panel19);
			this->panel24->Controls->Add(this->panel20);
			this->panel24->Controls->Add(this->panel22);
			this->panel24->Controls->Add(this->panel18);
			this->panel24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->panel24->Location = System::Drawing::Point(412, 147);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(699, 561);
			this->panel24->TabIndex = 65;
			this->panel24->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel24_Paint);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label28->Location = System::Drawing::Point(557, 12);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(111, 38);
			this->label28->TabIndex = 61;
			this->label28->Text = L"Current";
			this->label28->Click += gcnew System::EventHandler(this, &dashboard::label28_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label27->Location = System::Drawing::Point(278, 16);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(133, 38);
			this->label27->TabIndex = 60;
			this->label27->Text = L"Expected";
			this->label27->Click += gcnew System::EventHandler(this, &dashboard::label27_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label12->Location = System::Drawing::Point(46, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(108, 38);
			this->label12->TabIndex = 59;
			this->label12->Text = L"Criteria";
			this->label12->Click += gcnew System::EventHandler(this, &dashboard::label12_Click);
			// 
			// panel21
			// 
			this->panel21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel21.BackgroundImage")));
			this->panel21->Controls->Add(this->label64);
			this->panel21->Controls->Add(this->label65);
			this->panel21->Controls->Add(this->label66);
			this->panel21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->panel21->Location = System::Drawing::Point(27, 400);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(642, 54);
			this->panel21->TabIndex = 55;
			this->panel21->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel21_Paint);
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label64.Image")));
			this->label64->Location = System::Drawing::Point(550, 12);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(60, 32);
			this->label64->TabIndex = 51;
			this->label64->Text = L"XXX";
			this->label64->Click += gcnew System::EventHandler(this, &dashboard::label64_Click);
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label65.Image")));
			this->label65->Location = System::Drawing::Point(277, 12);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(60, 32);
			this->label65->TabIndex = 50;
			this->label65->Text = L"XXX";
			this->label65->Click += gcnew System::EventHandler(this, &dashboard::label65_Click);
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label66.Image")));
			this->label66->Location = System::Drawing::Point(25, 12);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(166, 32);
			this->label66->TabIndex = 49;
			this->label66->Text = L"Entertainment";
			this->label66->Click += gcnew System::EventHandler(this, &dashboard::label66_Click);
			// 
			// panel23
			// 
			this->panel23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel23.BackgroundImage")));
			this->panel23->Controls->Add(this->label70);
			this->panel23->Controls->Add(this->label71);
			this->panel23->Controls->Add(this->label72);
			this->panel23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->panel23->Location = System::Drawing::Point(27, 478);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(642, 54);
			this->panel23->TabIndex = 58;
			this->panel23->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel23_Paint);
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label70.Image")));
			this->label70->Location = System::Drawing::Point(550, 12);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(60, 32);
			this->label70->TabIndex = 51;
			this->label70->Text = L"XXX";
			this->label70->Click += gcnew System::EventHandler(this, &dashboard::label70_Click);
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label71.Image")));
			this->label71->Location = System::Drawing::Point(277, 12);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(60, 32);
			this->label71->TabIndex = 50;
			this->label71->Text = L"XXX";
			this->label71->Click += gcnew System::EventHandler(this, &dashboard::label71_Click);
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label72.Image")));
			this->label72->Location = System::Drawing::Point(25, 12);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(114, 32);
			this->label72->TabIndex = 49;
			this->label72->Text = L"Groceries";
			this->label72->Click += gcnew System::EventHandler(this, &dashboard::label72_Click);
			// 
			// panel19
			// 
			this->panel19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel19.BackgroundImage")));
			this->panel19->Controls->Add(this->label46);
			this->panel19->Controls->Add(this->label47);
			this->panel19->Controls->Add(this->label48);
			this->panel19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->panel19->Location = System::Drawing::Point(27, 158);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(642, 54);
			this->panel19->TabIndex = 55;
			this->panel19->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel19_Paint);
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label46.Image")));
			this->label46->Location = System::Drawing::Point(550, 12);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(60, 32);
			this->label46->TabIndex = 51;
			this->label46->Text = L"XXX";
			this->label46->Click += gcnew System::EventHandler(this, &dashboard::label46_Click);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label47.Image")));
			this->label47->Location = System::Drawing::Point(277, 12);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(60, 32);
			this->label47->TabIndex = 50;
			this->label47->Text = L"XXX";
			this->label47->Click += gcnew System::EventHandler(this, &dashboard::label47_Click);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label48.Image")));
			this->label48->Location = System::Drawing::Point(25, 12);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(69, 32);
			this->label48->TabIndex = 49;
			this->label48->Text = L"Food";
			this->label48->Click += gcnew System::EventHandler(this, &dashboard::label48_Click);
			// 
			// panel20
			// 
			this->panel20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel20.BackgroundImage")));
			this->panel20->Controls->Add(this->label61);
			this->panel20->Controls->Add(this->label62);
			this->panel20->Controls->Add(this->label63);
			this->panel20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->panel20->Location = System::Drawing::Point(27, 239);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(642, 54);
			this->panel20->TabIndex = 56;
			this->panel20->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel20_Paint);
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label61.Image")));
			this->label61->Location = System::Drawing::Point(550, 12);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(60, 32);
			this->label61->TabIndex = 51;
			this->label61->Text = L"XXX";
			this->label61->Click += gcnew System::EventHandler(this, &dashboard::label61_Click);
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label62.Image")));
			this->label62->Location = System::Drawing::Point(277, 12);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(60, 32);
			this->label62->TabIndex = 50;
			this->label62->Text = L"XXX";
			this->label62->Click += gcnew System::EventHandler(this, &dashboard::label62_Click);
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label63.Image")));
			this->label63->Location = System::Drawing::Point(25, 12);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(94, 32);
			this->label63->TabIndex = 49;
			this->label63->Text = L"Utilities";
			this->label63->Click += gcnew System::EventHandler(this, &dashboard::label63_Click);
			// 
			// panel22
			// 
			this->panel22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel22.BackgroundImage")));
			this->panel22->Controls->Add(this->label67);
			this->panel22->Controls->Add(this->label68);
			this->panel22->Controls->Add(this->label69);
			this->panel22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->panel22->Location = System::Drawing::Point(27, 321);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(642, 54);
			this->panel22->TabIndex = 57;
			this->panel22->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel22_Paint);
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label67.Image")));
			this->label67->Location = System::Drawing::Point(550, 12);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(60, 32);
			this->label67->TabIndex = 51;
			this->label67->Text = L"XXX";
			this->label67->Click += gcnew System::EventHandler(this, &dashboard::label67_Click);
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label68.Image")));
			this->label68->Location = System::Drawing::Point(277, 12);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(60, 32);
			this->label68->TabIndex = 50;
			this->label68->Text = L"XXX";
			this->label68->Click += gcnew System::EventHandler(this, &dashboard::label68_Click);
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label69.Image")));
			this->label69->Location = System::Drawing::Point(25, 12);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(85, 32);
			this->label69->TabIndex = 49;
			this->label69->Text = L"Health";
			this->label69->Click += gcnew System::EventHandler(this, &dashboard::label69_Click);
			// 
			// panel18
			// 
			this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel18.BackgroundImage")));
			this->panel18->Controls->Add(this->housingstatus);
			this->panel18->Controls->Add(this->label43);
			this->panel18->Controls->Add(this->label45);
			this->panel18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->panel18->Location = System::Drawing::Point(27, 77);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(642, 54);
			this->panel18->TabIndex = 54;
			this->panel18->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel18_Paint);
			// 
			// housingstatus
			// 
			this->housingstatus->AutoSize = true;
			this->housingstatus->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->housingstatus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"housingstatus.Image")));
			this->housingstatus->Location = System::Drawing::Point(550, 12);
			this->housingstatus->Name = L"housingstatus";
			this->housingstatus->Size = System::Drawing::Size(60, 32);
			this->housingstatus->TabIndex = 51;
			this->housingstatus->Text = L"XXX";
			this->housingstatus->Click += gcnew System::EventHandler(this, &dashboard::housingstatus_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label43.Image")));
			this->label43->Location = System::Drawing::Point(277, 12);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(60, 32);
			this->label43->TabIndex = 50;
			this->label43->Text = L"XXX";
			this->label43->Click += gcnew System::EventHandler(this, &dashboard::label43_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label45.Image")));
			this->label45->Location = System::Drawing::Point(25, 12);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(104, 32);
			this->label45->TabIndex = 49;
			this->label45->Text = L"Housing";
			this->label45->Click += gcnew System::EventHandler(this, &dashboard::label45_Click);
			// 
			// panel17
			// 
			this->panel17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel17.BackgroundImage")));
			this->panel17->Controls->Add(this->textBox1);
			this->panel17->Controls->Add(this->button11);
			this->panel17->Controls->Add(this->comboBox1);
			this->panel17->Controls->Add(this->label13);
			this->panel17->Controls->Add(this->label14);
			this->panel17->Location = System::Drawing::Point(18, 150);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(379, 243);
			this->panel17->TabIndex = 64;
			this->panel17->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel17_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(173, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(174, 30);
			this->textBox1->TabIndex = 63;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &dashboard::textBox1_TextChanged_1);
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(106, 161);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(156, 61);
			this->button11->TabIndex = 12;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &dashboard::button11_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Housing", L"Food", L"Utilities", L"Health", L"Entertainment",
					L"Groceries"
			});
			this->comboBox1->Location = System::Drawing::Point(173, 26);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(174, 31);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &dashboard::comboBox1_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label13.Image")));
			this->label13->Location = System::Drawing::Point(12, 19);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(127, 38);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Criteria:";
			this->label13->Click += gcnew System::EventHandler(this, &dashboard::label13_Click);
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label14.Image")));
			this->label14->Location = System::Drawing::Point(12, 78);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(161, 29);
			this->label14->TabIndex = 10;
			this->label14->Text = L"Set Amount:";
			this->label14->Click += gcnew System::EventHandler(this, &dashboard::label14_Click);
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label30->Location = System::Drawing::Point(67, 90);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(286, 50);
			this->label30->TabIndex = 62;
			this->label30->Text = L"Set Your Goals";
			this->label30->Click += gcnew System::EventHandler(this, &dashboard::label30_Click);
			// 
			// label55
			// 
			this->label55->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label55->Location = System::Drawing::Point(600, 90);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(383, 50);
			this->label55->TabIndex = 35;
			this->label55->Text = L"Your Current Status";
			this->label55->Click += gcnew System::EventHandler(this, &dashboard::label55_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->button10);
			this->panel11->Controls->Add(this->panel13);
			this->panel11->Location = System::Drawing::Point(3, 0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(1145, 776);
			this->panel11->TabIndex = 21;
			this->panel11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel11_Paint);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->panel12->Controls->Add(this->label26);
			this->panel12->Controls->Add(this->label25);
			this->panel12->ForeColor = System::Drawing::Color::Black;
			this->panel12->Location = System::Drawing::Point(436, 685);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(310, 61);
			this->panel12->TabIndex = 27;
			this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel12_Paint);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(218, 9);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(59, 38);
			this->label26->TabIndex = 3;
			this->label26->Text = L"xxx";
			this->label26->Click += gcnew System::EventHandler(this, &dashboard::label26_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(26, 9);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(187, 38);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Total Income:";
			this->label25->Click += gcnew System::EventHandler(this, &dashboard::label25_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)));
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(483, 15);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(196, 61);
			this->button10->TabIndex = 26;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &dashboard::button10_Click_1);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel13->Controls->Add(this->label23);
			this->panel13->Location = System::Drawing::Point(244, 90);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(666, 578);
			this->panel13->TabIndex = 28;
			this->panel13->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel13_Paint);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label23->Location = System::Drawing::Point(200, 18);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(264, 45);
			this->label23->TabIndex = 10;
			this->label23->Text = L"Income Sources";
			this->label23->Click += gcnew System::EventHandler(this, &dashboard::label23_Click);
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->panel14->Controls->Add(this->panel16);
			this->panel14->Location = System::Drawing::Point(0, 0);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(1156, 773);
			this->panel14->TabIndex = 29;
			this->panel14->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel14_Paint);
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->panel16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel16.BackgroundImage")));
			this->panel16->Controls->Add(this->panel25);
			this->panel16->Controls->Add(this->label29);
			this->panel16->Location = System::Drawing::Point(231, 55);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(694, 670);
			this->panel16->TabIndex = 31;
			this->panel16->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel16_Paint);
			// 
			// panel25
			// 
			this->panel25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel25.BackgroundImage")));
			this->panel25->Location = System::Drawing::Point(55, 79);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(587, 557);
			this->panel25->TabIndex = 11;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label29.Image")));
			this->label29->Location = System::Drawing::Point(249, 19);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(193, 41);
			this->label29->TabIndex = 10;
			this->label29->Text = L"Transactions";
			this->label29->Click += gcnew System::EventHandler(this, &dashboard::label29_Click);
			// 
			// dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1482, 773);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->expParent);
			this->Name = L"dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &dashboard::dashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->expensePanel->ResumeLayout(false);
			this->expensePanel->PerformLayout();
			this->expcategory->ResumeLayout(false);
			this->expcategory->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->expParent->ResumeLayout(false);
			this->goalspanel->ResumeLayout(false);
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->ResumeLayout(false);

		}



#pragma endregion



	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//expenses^ exp = gcnew expenses(this);
		//exp->Show();
		panel2->Hide();
		panel11->Hide();
		goalspanel->Hide();

		expensePanel->Show();
		panel14->Hide();



		/*
		expcategory->Hide();
		expcategory->Visible = false;
		expensePanel->Visible = true;
		expensePanel->BringToFront();
		*/
	}



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		panel2->Show();
		panel11->Hide();
		goalspanel->Hide();
		panel14->Hide();
		expensePanel->Hide();
		expcategory->Hide();
		List<Transaction^>^ transactions = transmanager->GetRecentTransactions();

		ShowFiveTransactions(transactions);
	}

	private: System::Void housing_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {



	}

	private: System::Void utilities_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void health_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void entertainment_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void transportation_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void panel2_Load(System::Object^ sender, System::EventArgs^ e) {


	}


	private: System::Void expcategory_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel7_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: double CalculateTotalExpenses(List<Expense^>^ expenses) {
		double total = 0;

		for each (Expense ^ expense in expenses) {
			total += expense->Amount;
		}
		return total;
	}
	private: double CalculateTotalIncome(List<Income^>^ incomes) {
		double total = 0;

		for each (Income ^ income in incomes) {
			total += income->Amount;
		}
		return total;
	}
	private: void UpdateTotalExpensesLabel(List<Expense^>^ expenses) {
		double totalExpenses = CalculateTotalExpenses(expenses);
		label33->Text = totalExpenses.ToString("F2");
	}

	private: void UpdateTotalIncomeLabel(List<Income^>^ incomes) {
		double totalIncome = CalculateTotalIncome(incomes);
		label26->Text = totalIncome.ToString("F2");

	}


	private: System::Void expensePanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		List<Expense^>^ expenses = expensemanager->getExpenses();
		double totalExpenses = CalculateTotalExpenses(expenses);

		label33->Text = totalExpenses.ToString("F2"); // Format to 2 decimal places



	}
	private: System::Void panel11_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		List<Income^>^ incomes = incomemanager->getIncomes();
		UpdateTotalIncomeLabel(incomes);

	}
	private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private:
		KeyValuePair<String^, double> GetTopCategory()
		{
			// Retrieve all expenses for the user
			List<Expense^>^ expenses = expensemanager->getExpenses();

			// Dictionary to store total expenses per category
			Dictionary<String^, double>^ categoryTotals = gcnew Dictionary<String^, double>();

			// Aggregate expenses by category
			for each (Expense ^ expense in expenses)
			{
				if (!categoryTotals->ContainsKey(expense->category))
				{
					categoryTotals[expense->category] = 0;
				}
				categoryTotals[expense->category] += expense->Amount;
			}

			// Find the category with the maximum total expense
			KeyValuePair<String^, double> topCategory;
			double maxAmount = 0;
			for each (KeyValuePair<String^, double> kvp in categoryTotals)
			{
				if (kvp.Value > maxAmount)
				{
					maxAmount = kvp.Value;
					topCategory = kvp;
				}
			}

			return topCategory;
		}



	private: System::Void DisplayTopCategory()
	{
		try
		{
			KeyValuePair<String^, double> topCategory = GetTopCategory();
			label24->AutoSize = false; // Allow manual sizing
			label24->Size = Drawing::Size(346, 30); // Size of the label
			label24->Text = String::Format("{0,-60} {1:N2}", topCategory.Key, topCategory.Value);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while loading the top category: " + ex->Message);
		}
	}



	private:
		KeyValuePair<String^, double> GetBiggestExpense()
		{
			// Retrieve all expenses for the user
			List<Expense^>^ expenses = expensemanager->getExpenses();

			// Initialize the biggest expense
			String^ biggestExpenseTitle = "";
			double maxAmount = 0;

			// Find the expense with the maximum amount
			for each (Expense ^ expense in expenses)
			{
				if (expense->Amount > maxAmount)
				{
					maxAmount = expense->Amount;
					biggestExpenseTitle = expense->title;
				}
			}

			// Return the title and amount of the biggest expense
			return KeyValuePair<String^, double>(biggestExpenseTitle, maxAmount);
		}

	private: System::Void DisplayBiggestExpense()
	{
		try
		{
			KeyValuePair<String^, double> biggestExpense = GetBiggestExpense();
			label20->AutoSize = false; // Allow manual sizing
			label20->Size = Drawing::Size(346, 30); // Size of the label
			label20->Text = String::Format("{0,-60} {1:N2}", biggestExpense.Key, biggestExpense.Value);

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while loading the biggest expense: " + ex->Message);
		}
	}




	private: System::Void dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Expense^>^ expenses = expensemanager->getExpenses();
		double totalExpenses = CalculateTotalExpenses(expenses);
		label8->Text = totalExpenses.ToString("F2");
		DisplayTopCategory();
		DisplayBiggestExpense();
		List<Income^>^ incomes = incomemanager->getIncomes();
		double totalIncome = CalculateTotalIncome(incomes);
		label7->Text = totalIncome.ToString("F2");
		double balance = totalIncome - totalExpenses;
		label6->Text = balance.ToString("F2");
		double usedIncome = (totalExpenses / totalIncome) * 100;
		label17->Text = String::Format("{0,-5}{1}",
			usedIncome.ToString("F2"),
			"%");
		List<Transaction^>^ transactions = transmanager->GetRecentTransactions();

		ShowFiveTransactions(transactions);

	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {


	}


	private:
		List<Expense^>^ GetExpensesByCategory(List<Expense^>^ allexpenses, String^ category)
		{
			List<Expense^>^ filteredExpenses = gcnew List<Expense^>();
			for each (Expense ^ expense in allexpenses)
			{
				if (expense->category == category)
				{
					filteredExpenses->Add(expense);
				}
			}
			return filteredExpenses;
		}
	private:

		void ShowFiveTransactions(List<Transaction^>^ transactions) {
			int labelHeight = 30; // Height of each label
			int labelWidth = 260; // Width of each label
			int verticalSpacing = 15; // Space between labels

			// Calculate the starting Y position to center the labels vertically
			int totalHeight = (labelHeight + verticalSpacing) * 5 - verticalSpacing; // Only 5 transactions
			int startY = (panel15->ClientSize.Height - totalHeight) / 2;

			// Calculate the starting X position to center the labels horizontally
			int startX = (panel15->ClientSize.Width - labelWidth) / 2;

			int yPosition = 5; // Start position for the first label

			// Clear previous transaction labels
			for (int i = panel15->Controls->Count - 1; i >= 0; i--) {
				Control^ control = panel15->Controls[i];
				if (control->Tag != nullptr && control->Tag->ToString() == "TransLabel") {
					panel15->Controls->Remove(control);
				}
			}

			// Show only the first 5 transactions
			int count = Math::Min(5, transactions->Count);
			for (int i = 0; i < count; i++) {
				Transaction^ transaction = transactions[i];

				// Create a new label
				Label^ translabel = gcnew Label();
				translabel->AutoSize = false; // Allow manual sizing
				translabel->Location = Drawing::Point(startX, yPosition); // Position the label
				translabel->Size = Drawing::Size(labelWidth, labelHeight); // Size of the label
				translabel->BorderStyle = BorderStyle::Fixed3D; // Set border style
				translabel->Tag = "TransLabel";
				translabel->Font = gcnew Drawing::Font("Segoe UI", 12, Drawing::FontStyle::Regular); // Set font and size

				// Format the text with title and amount
				String^ nepaliRupeeSymbol = "Rs";
				translabel->Text = String::Format("{0,-43}{1}{2}",
					transaction->title,
					nepaliRupeeSymbol,
					transaction->Amount);

				// Add the label to the form's Controls collection
				panel15->Controls->Add(translabel);

				// Update the yPosition for the next label
				yPosition += labelHeight + verticalSpacing; // Add some space between labels
			}
		}


	private:
		void ShowTransactionsInLabels(List<Transaction^>^ transactions) {
			int labelHeight = 30; // Height of each label
			int labelWidth = 346; // Width of each label
			int verticalSpacing = 15; // Space between labels

			// Calculate the starting Y position to center the labels vertically
			int totalHeight = (labelHeight + verticalSpacing) * transactions->Count - verticalSpacing;
			int startY = (panel16->ClientSize.Height - totalHeight) / 2;

			// Calculate the starting X position to center the labels horizontally
			int startX = (panel16->ClientSize.Width - labelWidth) / 2;




			int yPosition = 120 - 50; // Start position for the first label

			for (int i = panel16->Controls->Count - 1; i >= 0; i--) {
				Control^ control = panel16->Controls[i];
				if (control->Tag != nullptr && control->Tag->ToString() == "TransLabel") {
					panel16->Controls->Remove(control);
				}
			}

			for each (Transaction ^ transaction in transactions)
			{
				// Create a new label
				Label^ translabel = gcnew Label();
				translabel->AutoSize = false; // Allow manual sizing
				translabel->Location = Drawing::Point(startX, yPosition); // Position the label
				translabel->Size = Drawing::Size(labelWidth, labelHeight); // Size of the label
				translabel->BorderStyle = BorderStyle::Fixed3D; // Set border style
				translabel->Tag = "TransLabel";
				translabel->Font = gcnew Drawing::Font("Segoe UI", 12, Drawing::FontStyle::Regular); // Set font and size


				// Format the text with title and amount
				String^ nepaliRupeeSymbol = "Rs";
				translabel->Text = String::Format("{0,-60}{1}{2}",
					transaction->title,
					nepaliRupeeSymbol,
					transaction->Amount);

				// Add the label to the form's Controls collection
				panel16->Controls->Add(translabel);

				// Update the yPosition for the next label
				yPosition += labelHeight + verticalSpacing; // Add some space between labels
			}

		}


	private:
		void ShowIncomesInLabels(List<Income^>^ incomes) {



			int labelHeight = 30; // Height of each label
			int labelWidth = 346; // Width of each label
			int verticalSpacing = 15; // Space between labels

			// Calculate the starting Y position to center the labels vertically
			int totalHeight = (labelHeight + verticalSpacing) * incomes->Count - verticalSpacing;
			int startY = (panel13->ClientSize.Height - totalHeight) / 2;

			// Calculate the starting X position to center the labels horizontally
			int startX = (panel13->ClientSize.Width - labelWidth) / 2;




			int yPosition = 120 - 50; // Start position for the first label

			  // Remove existing expense labels
			for (int i = panel13->Controls->Count - 1; i >= 0; i--) {
				Control^ control = panel13->Controls[i];
				if (control->Tag != nullptr && control->Tag->ToString() == "IncomeLabel") {
					panel13->Controls->Remove(control);
				}
			}

			for each (Income ^ income in incomes)
			{
				// Create a new label
				Label^ incomeLabel = gcnew Label();
				incomeLabel->AutoSize = false; // Allow manual sizing
				incomeLabel->Location = Drawing::Point(startX, yPosition); // Position the label
				incomeLabel->Size = Drawing::Size(labelWidth, labelHeight); // Size of the label
				incomeLabel->BorderStyle = BorderStyle::Fixed3D; // Set border style
				incomeLabel->Tag = "IncomeLabel";
				incomeLabel->Font = gcnew Drawing::Font("Segoe UI", 12, Drawing::FontStyle::Regular); // Set font and size


				// Format the text with title and amount
				String^ nepaliRupeeSymbol = "Rs";
				incomeLabel->Text = String::Format("{0,-60}{1}{2}",
					income->title,
					nepaliRupeeSymbol,
					income->Amount);

				// Add the label to the form's Controls collection
				panel13->Controls->Add(incomeLabel);

				// Update the yPosition for the next label
				yPosition += labelHeight + verticalSpacing; // Add some space between labels
			}
		}



	private: void ShowExpensesInLabels(List<Expense^>^ filteredExpenses) {



		int labelHeight = 30; // Height of each label
		int labelWidth = 346; // Width of each label
		int verticalSpacing = 15; // Space between labels

		// Calculate the starting Y position to center the labels vertically
		int totalHeight = (labelHeight + verticalSpacing) * filteredExpenses->Count - verticalSpacing;
		int startY = (expcategory->ClientSize.Height - totalHeight) / 2;

		// Calculate the starting X position to center the labels horizontally
		int startX = (expcategory->ClientSize.Width - labelWidth) / 2;




		int yPosition = 220 - 50; // Start position for the first label

		  // Remove existing expense labels
		for (int i = expcategory->Controls->Count - 1; i >= 0; i--) {
			Control^ control = expcategory->Controls[i];
			if (control->Tag != nullptr && control->Tag->ToString() == "ExpenseLabel") {
				expcategory->Controls->Remove(control);
			}
		}

		for each (Expense ^ expense in filteredExpenses)
		{
			// Create a new label
			Label^ expenseLabel = gcnew Label();
			expenseLabel->AutoSize = false; // Allow manual sizing
			expenseLabel->Location = Drawing::Point(startX, yPosition); // Position the label
			expenseLabel->Size = Drawing::Size(labelWidth, labelHeight); // Size of the label
			expenseLabel->BorderStyle = BorderStyle::Fixed3D; // Set border style
			expenseLabel->Tag = "ExpenseLabel";
			expenseLabel->Font = gcnew Drawing::Font("Segoe UI", 12, Drawing::FontStyle::Regular); // Set font and size

			// Format the text with title and amount
			String^ nepaliRupeeSymbol = "Rs";
			expenseLabel->Text = String::Format("{0,-60}{1}{2}",
				expense->title,
				nepaliRupeeSymbol,
				expense->Amount);

			// Add the label to the form's Controls collection
			expcategory->Controls->Add(expenseLabel);

			// Update the yPosition for the next label
			yPosition += labelHeight + verticalSpacing; // Add some space between labels
		}
	}



	private: System::Void housing(String^ text) {
		expcategory->Show();
		label52->Text = ">>" + text;
		try
		{
			List<Expense^>^ allexpenses = expensemanager->getExpenses();
			List<Expense^>^ filteredExpenses = GetExpensesByCategory(allexpenses, text);

			ShowExpensesInLabels(filteredExpenses);
			/*
			if (filteredExpenses->Count > 0)
			{

				Expense^ firstExpense = filteredExpenses[0];
				String^ nepaliRupeeSymbol = "Rs";
				String^ displayText = String::Format("{0,-42} {1} {2:N2}", firstExpense->title, nepaliRupeeSymbol, firstExpense->Amount);



				label49->Text = displayText;
			}
			else
			{
				label49->Text = "No expenses found for this category.";
			}
			*/


		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while loading expenses: " + ex->Message);
		}
	}

	private: System::Void housingbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		expensePanel->Hide();
		housing(housingbtn->Text);
	}

	private: System::Void food(String^ text) {
		expcategory->Show();
		label52->Text = ">>" + text;
		try
		{
			List<Expense^>^ allexpenses = expensemanager->getExpenses();
			List<Expense^>^ filteredExpenses = GetExpensesByCategory(allexpenses, text);

			ShowExpensesInLabels(filteredExpenses);
			/*
			if (filteredExpenses->Count > 0)
			{

				Expense^ firstExpense = filteredExpenses[0];
				String^ nepaliRupeeSymbol = "Rs";
				String^ displayText = String::Format("{0,-42} {1} {2:N2}", firstExpense->title, nepaliRupeeSymbol, firstExpense->Amount);



				label49->Text = displayText;
			}
			else
			{
				label49->Text = "No expenses found for this category.";
			}
			*/


		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while loading expenses: " + ex->Message);
		}

	}
	private: System::Void foodbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		expensePanel->Hide();
		food(foodbtn->Text);
	}
	private: System::Void groceries(String^ text) {
		expcategory->Show();
		label52->Text = ">>" + text;
		try
		{
			List<Expense^>^ allexpenses = expensemanager->getExpenses();
			List<Expense^>^ filteredExpenses = GetExpensesByCategory(allexpenses, text);

			ShowExpensesInLabels(filteredExpenses);
			/*
			if (filteredExpenses->Count > 0)
			{

				Expense^ firstExpense = filteredExpenses[0];
				String^ nepaliRupeeSymbol = "Rs";
				String^ displayText = String::Format("{0,-42} {1} {2:N2}", firstExpense->title, nepaliRupeeSymbol, firstExpense->Amount);



				label49->Text = displayText;
			}
			else
			{
				label49->Text = "No expenses found for this category.";
			}
			*/


		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while loading expenses: " + ex->Message);
		}
	}
	private: System::Void groceriesbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		expensePanel->Hide();
		groceries(groceriesbtn->Text);
	}
	private: System::Void entertain(String^ text) {
		expcategory->Show();
		label52->Text = ">>" + text;
		try
		{
			List<Expense^>^ allexpenses = expensemanager->getExpenses();
			List<Expense^>^ filteredExpenses = GetExpensesByCategory(allexpenses, text);

			ShowExpensesInLabels(filteredExpenses);
			/*
			if (filteredExpenses->Count > 0)
			{

				Expense^ firstExpense = filteredExpenses[0];
				String^ nepaliRupeeSymbol = "Rs";
				String^ displayText = String::Format("{0,-42} {1} {2:N2}", firstExpense->title, nepaliRupeeSymbol, firstExpense->Amount);



				label49->Text = displayText;
			}
			else
			{
				label49->Text = "No expenses found for this category.";
			}
			*/


		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while loading expenses: " + ex->Message);
		}
	}

	private: System::Void entertainbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		expensePanel->Hide();
		entertain(entertainbtn->Text);
	}

	private: System::Void health(String^ text) {
		expcategory->Show();
		label52->Text = ">>" + text;
		try
		{
			List<Expense^>^ allexpenses = expensemanager->getExpenses();
			List<Expense^>^ filteredExpenses = GetExpensesByCategory(allexpenses, text);

			ShowExpensesInLabels(filteredExpenses);
			/*
			if (filteredExpenses->Count > 0)
			{

				Expense^ firstExpense = filteredExpenses[0];
				String^ nepaliRupeeSymbol = "Rs";
				String^ displayText = String::Format("{0,-42} {1} {2:N2}", firstExpense->title, nepaliRupeeSymbol, firstExpense->Amount);



				label49->Text = displayText;
			}
			else
			{
				label49->Text = "No expenses found for this category.";
			}
			*/


		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while loading expenses: " + ex->Message);
		}
	}
	private: System::Void healthbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		expensePanel->Hide();
		health(healthbtn->Text);
	}
	private: System::Void utilities(String^ text) {
		expcategory->Show();
		label52->Text = ">>" + text;
		try
		{
			List<Expense^>^ allexpenses = expensemanager->getExpenses();
			List<Expense^>^ filteredExpenses = GetExpensesByCategory(allexpenses, text);

			ShowExpensesInLabels(filteredExpenses);
			/*
			if (filteredExpenses->Count > 0)
			{

				Expense^ firstExpense = filteredExpenses[0];
				String^ nepaliRupeeSymbol = "Rs";
				String^ displayText = String::Format("{0,-42} {1} {2:N2}", firstExpense->title, nepaliRupeeSymbol, firstExpense->Amount);



				label49->Text = displayText;
			}
			else
			{
				label49->Text = "No expenses found for this category.";
			}
			*/


		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while loading expenses: " + ex->Message);
		}
	}
	private: System::Void utilitiesbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		expensePanel->Hide();
		utilities(utilitiesbtn->Text);
	}

	private: System::Void backbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		expcategory->Hide();
		expensePanel->Show();
	}
	private: System::Void label52_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void addexpbtn_Click(System::Object^ sender, System::EventArgs^ e) {

		expenseentry^ expentry = gcnew expenseentry;
		expentry->StartPosition = FormStartPosition::Manual;
		expentry->Location = Point(680, 220);
		expentry->ShowDialog();

		array<System::Object^>^ expenseData = expentry->GetExpenseData();
		String^ title = safe_cast<System::String^>(expenseData[0]);
		String^ category = safe_cast<System::String^>(expenseData[1]);
		String^ AmountInStr = safe_cast<System::String^>(expenseData[2]);
		double AmountDouble = System::Convert::ToDouble(AmountInStr);
		// If you specifically need a float, you can cast the double to float
		float Amount = static_cast<float>(AmountDouble);
		System::DateTime selectedDateTime = static_cast<System::DateTime>(expenseData[3]);
		System::DateTime selectedDate = selectedDateTime.Date;



		ExpenseManager^ expmanager = gcnew ExpenseManager(currentUser);
		if (expmanager->addExpense(title, category, selectedDateTime, Amount, currentUser->userid))
		{
			UpdateExpensesDisplay(category);
			MessageBox::Show("Expense added successfully!");
		}



	}

	private: void UpdateExpensesDisplay(String^ category) {
		List<Expense^>^ allexpenses = expensemanager->getExpenses();
		List<Expense^>^ filteredExpenses = GetExpensesByCategory(allexpenses, category);
		ShowExpensesInLabels(filteredExpenses);
		double totalExpenses = CalculateTotalExpenses(allexpenses);
		label8->Text = totalExpenses.ToString("F2");
		DisplayTopCategory();
		DisplayBiggestExpense();
		List<Income^>^ incomes = incomemanager->getIncomes();
		double totalIncome = CalculateTotalIncome(incomes);
		double balance = totalIncome - totalExpenses;
		label6->Text = balance.ToString("F2");
		double usedIncome = (totalExpenses / totalIncome) * 100;
		label17->Text = usedIncome.ToString("F2");
	}

	private: System::Void label49_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		panel11->Show();
		expcategory->Hide();
		panel14->Hide();
		goalspanel->Hide();
		expensePanel->Hide();
		panel2->Hide();
		List<Income^>^ incomes = incomemanager->getIncomes();

		ShowIncomesInLabels(incomes);
	}


	private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
		incomeentry^ incentry = gcnew incomeentry;
		incentry->StartPosition = FormStartPosition::Manual;
		incentry->Location = Point(680, 220);
		incentry->ShowDialog();

		array<System::Object^>^ incomeData = incentry->GetIncomeData();
		String^ title = safe_cast<System::String^>(incomeData[0]);

		String^ AmountInStr = safe_cast<System::String^>(incomeData[1]);
		double AmountDouble = System::Convert::ToDouble(AmountInStr);
		// If you specifically need a float, you can cast the double to float
		float Amount = static_cast<float>(AmountDouble);
		System::DateTime selectedDateTime = static_cast<System::DateTime>(incomeData[2]);
		System::DateTime selectedDate = selectedDateTime.Date;



		ExpenseManager^ expmanager = gcnew ExpenseManager(currentUser);

		if (incomemanager->addIncome(title, selectedDateTime, Amount, currentUser->userid))
		{
			UpdateIncomesDisplay();
			MessageBox::Show("Income added successfully!");
		}
		/*
		UpdateExpensesDisplay(category);
		*/

	}
	private: void UpdateIncomesDisplay() {
		List<Income^>^ incomes = incomemanager->getIncomes();
		ShowIncomesInLabels(incomes);
		double totalIncome = CalculateTotalIncome(incomes);
		label7->Text = totalIncome.ToString("F2");

		List<Expense^>^ expenses = expensemanager->getExpenses();
		double totalExpenses = CalculateTotalExpenses(expenses);
		double balance = totalIncome - totalExpenses;
		label6->Text = balance.ToString("F2");
		double usedIncome = (totalExpenses / totalIncome) * 100;
		label17->Text = usedIncome.ToString("F2");
	}
	private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void panel14_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		panel14->Show();
		panel11->Hide();
		goalspanel->Hide();
		expcategory->Hide();
		expensePanel->Hide();
		panel2->Hide();
		List<Transaction^>^ transactions = transmanager->GetRecentTransactions();

		ShowTransactionsInLabels(transactions);




	}
	private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void goalspanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private:
		void UpdateExpectedStatus() {
			label43->Text = "Rs." + goalmanager->getExpectedValue("Housing").ToString("F2");
			label47->Text = "Rs." + goalmanager->getExpectedValue("Food").ToString("F2");
			label62->Text = "Rs." + goalmanager->getExpectedValue("Utilities").ToString("F2");
			label68->Text = "Rs." + goalmanager->getExpectedValue("Health").ToString("F2");
			label65->Text = "Rs." + goalmanager->getExpectedValue("Entertainment").ToString("F2");
			label71->Text = "Rs." + goalmanager->getExpectedValue("Groceries").ToString("F2");
		}

	private:
		void UpdateCurrentStatus() {
			auto expensesList = goalmanager->getTotalExpensesByCategory();
			for each (auto expense in expensesList)
			{
				String^ category = expense->Item1;
				double totalAmount = expense->Item2;

				if (category == "Housing") {
					housingstatus->Text = "Rs." + totalAmount.ToString("F2");
				}
				if (category == "Food") {
					label46->Text = "Rs." + totalAmount.ToString("F2");
				}
				if (category == "Utilities") {
					label61->Text = "Rs." + totalAmount.ToString("F2");
				}
				if (category == "Health") {
					label67->Text = "Rs." + totalAmount.ToString("F2");
				}
				if (category == "Entertainment") {
					label64->Text = "Rs." + totalAmount.ToString("F2");
				}
				if (category == "Groceries") {
					label70->Text = "Rs." + totalAmount.ToString("F2");
				}


				// Display category and totalAmount in the UI, e.g., in a ListBox or DataGridView
			}
		}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		goalspanel->Show();
		panel14->Hide();
		panel11->Hide();
		expcategory->Hide();
		expensePanel->Hide();
		panel2->Hide();
		UpdateExpectedStatus();
		UpdateCurrentStatus();



	}
	private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ category = comboBox1->SelectedItem->ToString();
		double Amount = Convert::ToDouble(textBox1->Text);
		goalmanager->addAmount(category, Amount);

		UpdateExpectedStatus();
		// Optionally, show a message box to confirm the addition
		UpdateCurrentStatus();

		MessageBox::Show("Amount added successfully!");
	}
	private: System::Void label11_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel10_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void panel15_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label33_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label44_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label50_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label51_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void bindingSource1_CurrentChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void expParent_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel21_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label64_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label65_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label66_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel23_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label70_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label71_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label72_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel19_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label46_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label47_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label48_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel20_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label61_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label62_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label63_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel22_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label67_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label68_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label69_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel18_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void housingstatus_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label43_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label45_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label55_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void panel13_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel16_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel24_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel17_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}


