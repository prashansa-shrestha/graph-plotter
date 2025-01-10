#pragma once
#include"expenses.h"
#include"expenseentry.h"
#include"expenseobject.h"
#include"expensemanager.h"
#include"User.h"
#include"usermanager.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


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
	private: System::Windows::Forms::PictureBox^ pictureBox1;

		   ExpenseManager^ expensemanager;

	public:
		dashboard(User^ user)
		{

			InitializeComponent();
			currentUser = user;
			expensemanager = gcnew ExpenseManager(currentUser);
			expensePanel->Hide();
			expcategory->Hide();
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



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label23;
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
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->expensePanel = (gcnew System::Windows::Forms::Panel());
			this->expcategory = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->addexpbtn = (gcnew System::Windows::Forms::Button());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->backbtn = (gcnew System::Windows::Forms::Button());
			this->entertainbtn = (gcnew System::Windows::Forms::Button());
			this->groceriesbtn = (gcnew System::Windows::Forms::Button());
			this->healthbtn = (gcnew System::Windows::Forms::Button());
			this->utilitiesbtn = (gcnew System::Windows::Forms::Button());
			this->foodbtn = (gcnew System::Windows::Forms::Button());
			this->housingbtn = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->expParent = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->expensePanel->SuspendLayout();
			this->expcategory->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->expParent->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel11);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(331, 773);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel1_Paint);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(93, 680);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(156, 61);
			this->button7->TabIndex = 9;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &dashboard::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->button6->Location = System::Drawing::Point(0, 569);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(328, 61);
			this->button6->TabIndex = 8;
			this->button6->Text = L"See Stats";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->button5->Location = System::Drawing::Point(0, 502);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(328, 61);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Set Goals";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &dashboard::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->button4->Location = System::Drawing::Point(0, 435);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(328, 61);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Expenses";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &dashboard::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->button3->Location = System::Drawing::Point(0, 368);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(328, 61);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Income";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &dashboard::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->button2->Location = System::Drawing::Point(0, 301);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(328, 61);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Transactions";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &dashboard::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->button1->Location = System::Drawing::Point(0, 234);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(328, 61);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Dashboard";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &dashboard::button1_Click);
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->label2);
			this->panel11->Location = System::Drawing::Point(62, 12);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(212, 200);
			this->panel11->TabIndex = 10;
			// 
			// panel12
			// 
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->Location = System::Drawing::Point(66, 73);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(74, 72);
			this->panel12->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label2->Location = System::Drawing::Point(38, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 32);
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
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1148, 773);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel2_Paint);
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->Controls->Add(this->label17);
			this->panel10->Controls->Add(this->label16);
			this->panel10->Location = System::Drawing::Point(958, 214);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(155, 138);
			this->panel10->TabIndex = 0;
			this->panel10->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel10_Paint);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label17->Location = System::Drawing::Point(64, 75);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 25);
			this->label17->TabIndex = 1;
			this->label17->Text = L"XX";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(7, 30);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(141, 28);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Used Income%";
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label15);
			this->panel9->Controls->Add(this->label14);
			this->panel9->Controls->Add(this->label13);
			this->panel9->Controls->Add(this->label12);
			this->panel9->Controls->Add(this->label11);
			this->panel9->Controls->Add(this->label10);
			this->panel9->Location = System::Drawing::Point(743, 432);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(407, 341);
			this->panel9->TabIndex = 6;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(39, 247);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(306, 27);
			this->label15->TabIndex = 5;
			this->label15->Text = L"Content Creation                       XXX";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(39, 209);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(306, 27);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Content Creation                       XXX";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(39, 162);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(306, 27);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Content Creation                       XXX";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(39, 118);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(306, 27);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Content Creation                       XXX";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(39, 73);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(306, 27);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Content Creation                       XXX";
			this->label11->Click += gcnew System::EventHandler(this, &dashboard::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(68, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(142, 28);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Recent History:";
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label25);
			this->panel8->Controls->Add(this->label23);
			this->panel8->Controls->Add(this->label24);
			this->panel8->Controls->Add(this->label22);
			this->panel8->Controls->Add(this->label21);
			this->panel8->Controls->Add(this->label20);
			this->panel8->Controls->Add(this->label19);
			this->panel8->Location = System::Drawing::Point(-1, 532);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(728, 238);
			this->panel8->TabIndex = 5;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel8_Paint);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(92, 181);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(562, 31);
			this->label25->TabIndex = 8;
			this->label25->Text = L"Fun fact  is that we are trying to do everything from scratch, YAYY !!!";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(3, 181);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(93, 28);
			this->label23->TabIndex = 7;
			this->label23->Text = L"Fun Fact: ";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(5, 139);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(305, 27);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Shopping                                          ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(5, 98);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(243, 28);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Highest Expense Category:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(35, 110);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 17);
			this->label21->TabIndex = 3;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(5, 54);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(306, 27);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Content Creation                       XXX";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(5, 10);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(222, 28);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Biggest Expense Record:";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Location = System::Drawing::Point(0, 424);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(179, 91);
			this->panel5->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(62, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 28);
			this->label7->TabIndex = 1;
			this->label7->Text = L"XXXX";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 32);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Total Income";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label18);
			this->panel4->Location = System::Drawing::Point(67, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(831, 408);
			this->panel4->TabIndex = 2;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel4_Paint);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->label18->Location = System::Drawing::Point(284, 9);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(245, 32);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Income V/S Expenses";
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(953, 93);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(160, 64);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Delete Record";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(953, 12);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(160, 64);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Set Entry";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &dashboard::button8_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label6);
			this->panel7->Controls->Add(this->label9);
			this->panel7->Location = System::Drawing::Point(532, 424);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(195, 91);
			this->panel7->TabIndex = 5;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel7_Paint_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(75, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 28);
			this->label6->TabIndex = 2;
			this->label6->Text = L"XXXX";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(50, 7);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 32);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Balance";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->label5);
			this->panel6->Location = System::Drawing::Point(260, 424);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(195, 91);
			this->panel6->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(75, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 28);
			this->label8->TabIndex = 2;
			this->label8->Text = L"XXXX";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 7);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 32);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Total Expenses";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// expensePanel
			// 
			this->expensePanel->BackColor = System::Drawing::SystemColors::Control;
			this->expensePanel->Controls->Add(this->expcategory);
			this->expensePanel->Controls->Add(this->entertainbtn);
			this->expensePanel->Controls->Add(this->groceriesbtn);
			this->expensePanel->Controls->Add(this->healthbtn);
			this->expensePanel->Controls->Add(this->utilitiesbtn);
			this->expensePanel->Controls->Add(this->foodbtn);
			this->expensePanel->Controls->Add(this->housingbtn);
			this->expensePanel->Controls->Add(this->label33);
			this->expensePanel->Controls->Add(this->label34);
			this->expensePanel->Controls->Add(this->label44);
			this->expensePanel->Location = System::Drawing::Point(1138, 0);
			this->expensePanel->Name = L"expensePanel";
			this->expensePanel->Size = System::Drawing::Size(10, 773);
			this->expensePanel->TabIndex = 1;
			this->expensePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::expensePanel_Paint);
			// 
			// expcategory
			// 
			this->expcategory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->expcategory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->expcategory->Controls->Add(this->pictureBox1);
			this->expcategory->Controls->Add(this->addexpbtn);
			this->expcategory->Controls->Add(this->label50);
			this->expcategory->Controls->Add(this->label51);
			this->expcategory->Controls->Add(this->label52);
			this->expcategory->Controls->Add(this->backbtn);
			this->expcategory->Location = System::Drawing::Point(774, 3);
			this->expcategory->Name = L"expcategory";
			this->expcategory->Size = System::Drawing::Size(0, 773);
			this->expcategory->TabIndex = 34;
			this->expcategory->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::expcategory_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(170, 210);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(746, 400);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// addexpbtn
			// 
			this->addexpbtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->addexpbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->addexpbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addexpbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->addexpbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addexpbtn.Image")));
			this->addexpbtn->Location = System::Drawing::Point(284, 62);
			this->addexpbtn->Name = L"addexpbtn";
			this->addexpbtn->Size = System::Drawing::Size(197, 61);
			this->addexpbtn->TabIndex = 14;
			this->addexpbtn->UseVisualStyleBackColor = false;
			this->addexpbtn->Click += gcnew System::EventHandler(this, &dashboard::addexpbtn_Click);
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label50->Location = System::Drawing::Point(693, 153);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(85, 51);
			this->label50->TabIndex = 13;
			this->label50->Text = L"xxx";
			this->label50->Click += gcnew System::EventHandler(this, &dashboard::label50_Click);
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label51->Location = System::Drawing::Point(287, 153);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(429, 51);
			this->label51->TabIndex = 12;
			this->label51->Text = L"Expense Contribution: ";
			this->label51->Click += gcnew System::EventHandler(this, &dashboard::label51_Click);
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label52->Location = System::Drawing::Point(35, 41);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(156, 32);
			this->label52->TabIndex = 11;
			this->label52->Text = L"Category >>";
			this->label52->Click += gcnew System::EventHandler(this, &dashboard::label52_Click);
			// 
			// backbtn
			// 
			this->backbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->backbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backbtn.BackgroundImage")));
			this->backbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backbtn->Location = System::Drawing::Point(917, 660);
			this->backbtn->Name = L"backbtn";
			this->backbtn->Size = System::Drawing::Size(145, 61);
			this->backbtn->TabIndex = 20;
			this->backbtn->UseVisualStyleBackColor = false;
			this->backbtn->Click += gcnew System::EventHandler(this, &dashboard::backbtn_Click);
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
			// 
			// expParent
			// 
			this->expParent->Controls->Add(this->expensePanel);
			this->expParent->Controls->Add(this->panel2);
			this->expParent->Dock = System::Windows::Forms::DockStyle::Right;
			this->expParent->Location = System::Drawing::Point(334, 0);
			this->expParent->Name = L"expParent";
			this->expParent->Size = System::Drawing::Size(1148, 773);
			this->expParent->TabIndex = 1;
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
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->expensePanel->ResumeLayout(false);
			this->expensePanel->PerformLayout();
			this->expcategory->ResumeLayout(false);
			this->expcategory->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->expParent->ResumeLayout(false);
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

		expensePanel->Show();




		/*
		expcategory->Hide();
		expcategory->Visible = false;
		expensePanel->Visible = true;
		expensePanel->BringToFront();
		*/
	}



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

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

	private: void UpdateTotalExpensesLabel(List<Expense^>^ expenses) {
		double totalExpenses = CalculateTotalExpenses(expenses);
		label33->Text = totalExpenses.ToString("F2");
	}



	private: System::Void expensePanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		List<Expense^>^ expenses = expensemanager->getExpenses();
		double totalExpenses = CalculateTotalExpenses(expenses);

		label33->Text = totalExpenses.ToString("F2"); // Format to 2 decimal places



	}
	private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
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
		Label^ clickedLabel = dynamic_cast<Label^>(sender);
		if (clickedLabel != nullptr) {
			// Set the label's background color to transparent
			clickedLabel->BackColor = System::Drawing::Color::Transparent;
		}
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
		if (expmanager->addExpense(title, category, selectedDate, Amount, currentUser->userid))
		{
			MessageBox::Show("Expense added successfully!");
		}

		UpdateExpensesDisplay(category);
	}

	private: void UpdateExpensesDisplay(String^ category) {
		List<Expense^>^ allexpenses = expensemanager->getExpenses();
		List<Expense^>^ filteredExpenses = GetExpensesByCategory(allexpenses, category);
		ShowExpensesInLabels(filteredExpenses);
	}

	private: System::Void label49_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label50_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label51_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel10_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}



