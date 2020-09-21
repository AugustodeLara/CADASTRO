using namespace System::Data::SqlClient;
using namespace System::Data;

#pragma once

namespace CADASTRO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			InitializeDataGridView();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::ComponentModel::IContainer^ components;


	

	private: int idTipo;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = gcnew System::Windows::Forms::BindingSource;
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(22, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(494, 144);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 204);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nome";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 246);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Sobrenome";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(122, 201);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(351, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(122, 243);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(351, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 28);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Cadastro";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(148, 283);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 25);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Pesquisa";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(279, 281);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 27);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(429, 281);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 27);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 321);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private:void InitializeDataGridView()
		{
			try
			{
				dataGridView1->AutoGenerateColumns = true;

				bindingSource1->DataSource = GetData("SELECT * FROM escola.alunos;");
				dataGridView1->DataSource = bindingSource1;
				dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;

				dataGridView1->BorderStyle = BorderStyle::Fixed3D;
			}
			catch (SqlException^)
			{
				//MessageBox::Show("Problema detectado", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				// System::Threading::Thread::CurrentThread->Abort();
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->ToString());
			}
		}

		DataTable^ GetData(String^ sqlCommand)
		{
			String^ connectionString = "Data Source=LAPTOP-I2KC8UPI\SQLEXPRESS;Integrated Security=True";
			SqlConnection^ Connection = gcnew SqlConnection(connectionString);
			SqlCommand^ command = gcnew SqlCommand(sqlCommand, Connection);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter;
			adapter->SelectCommand = command;
			DataTable^ table = gcnew DataTable;
			adapter->Fill(table);
			return table;
		}
#pragma endregion
	
		

	


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

		String^ val1 = this->textBox1->Text;
		String^ val2 = this->textBox1->Text;

		bindingSource1->DataSource = GetData("INSERT INTO escola.alunos(nome,sobrenome) Values ('" + val1 + "','" + val2 + "')");
		InitializeDataGridView();
		/*
		String^ constring="datasource=localhost;port=3306; username=root; database=escola;pooling=false;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM escola.alunos;", conDataBase);
		MySqlDataAdapter^ myReader;

		try {
			MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		*/

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

};
}
