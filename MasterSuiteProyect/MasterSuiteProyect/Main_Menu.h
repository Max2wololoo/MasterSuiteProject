#pragma once

namespace MasterSuiteProyect {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Main_Menu
	/// </summary>
	public ref class Main_Menu : public System::Windows::Forms::Form
	{
	public:
		Main_Menu(void)
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
		~Main_Menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  systemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uploadNewSystemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  readSystemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  modBusTransmisionPreviewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewCommunicationBuffersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  promotionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutProgramToolStripMenuItem;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Button^  SendConfigBtn;

	private: System::Windows::Forms::Button^  DownloadConfigBtn;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::GroupBox^  groupBoxComm2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::GroupBox^  groupBoxComm1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ComboBox^  cmbPL_BS2;
	private: System::Windows::Forms::ComboBox^  cmbPL_DS2;
	private: System::Windows::Forms::ComboBox^  cmbPL_Par2;
	private: System::Windows::Forms::ComboBox^  cmbPL_Boutrate2;
	private: System::Windows::Forms::TextBox^  txtPL_Timeout2;
	private: System::Windows::Forms::TextBox^  txtPL_Address2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ComboBox^  cmbPL_BS1;
	private: System::Windows::Forms::ComboBox^  cmbPL_DS1;
	private: System::Windows::Forms::ComboBox^  cmbPL_Par1;
	private: System::Windows::Forms::ComboBox^  cmbPL_Boutrate1;
	private: System::Windows::Forms::TextBox^  txtPL_Timeout1;
	private: System::Windows::Forms::TextBox^  txtPL_Address1;
	private: System::Windows::Forms::GroupBox^  ETHBox2;

	private: System::Windows::Forms::GroupBox^  ETHBox1;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::CheckBox^  chkBox_Masternet;

	private: System::Windows::Forms::TextBox^  txtETH2_MAC6;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  txtETH2_MAC5;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  txtETH2_MAC4;

	private: System::Windows::Forms::TextBox^  txtETH2_MASK2;



	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::TextBox^  txtETH2_IP1;
private: System::Windows::Forms::TextBox^  txtETH2_MAC3;


	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::TextBox^  txtETH2_IP2;
private: System::Windows::Forms::TextBox^  txtETH2_MAC2;


	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::TextBox^  txtETH2_IP3;
private: System::Windows::Forms::TextBox^  txtETH2_MAC1;


	private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::TextBox^  txtETH2_MASK4;

private: System::Windows::Forms::TextBox^  txtETH2_IP4;

	private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::TextBox^  txtETH2_GATE1;
private: System::Windows::Forms::TextBox^  txtETH2_MASK3;





	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::TextBox^  txtETH2_GATE2;

	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::TextBox^  txtETH2_GATE3;
private: System::Windows::Forms::TextBox^  txtETH2_MASK1;


	private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::TextBox^  txtETH2_GATE4;
private: System::Windows::Forms::TextBox^  txtETH1_MAC6;


	private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::TextBox^  txtETH1_MAC5;

	private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TextBox^  txtETH1_MAC4;

	private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::TextBox^  txtETH1_MAC3;

	private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  txtETH1_MAC2;

	private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::TextBox^  txtETH1_MAC1;

private: System::Windows::Forms::TextBox^  txtETH1_MASK4;

	private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  txtETH1_MASK3;

	private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::TextBox^  txtETH1_MASK2;

	private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::TextBox^  txtETH1_MASK1;

private: System::Windows::Forms::TextBox^  txtETH1_GATE4;

	private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  txtETH1_GATE3;

	private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::TextBox^  txtETH1_GATE2;

	private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  txtETH1_GATE1;

private: System::Windows::Forms::TextBox^  txtETH1_IP4;


	private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  txtETH1_IP3;

	private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  txtETH1_IP2;

	private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TextBox^  txtETH1_IP1;
private: System::Windows::Forms::GroupBox^  groupBox;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::TextBox^  txt_HRAO;
private: System::Windows::Forms::TextBox^  txt_HRAI;
private: System::Windows::Forms::Label^  lbl_HRAO;
private: System::Windows::Forms::Label^  lbl_HRAI;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::TextBox^  txt_Aa;
private: System::Windows::Forms::TextBox^  txt_Srt;
private: System::Windows::Forms::TextBox^  txt_Frt;
private: System::Windows::Forms::TextBox^  txt_Ntwt;
private: System::Windows::Forms::Label^  lbl_Aa;
private: System::Windows::Forms::Label^  lbl_Srt;
private: System::Windows::Forms::Label^  lbl_Frt;
private: System::Windows::Forms::Label^  lbl_Ntwt;
private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::RichTextBox^  richTxt_TSummary;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label55;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main_Menu::typeid));
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->systemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uploadNewSystemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readSystemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modBusTransmisionPreviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewCommunicationBuffersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promotionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SendConfigBtn = (gcnew System::Windows::Forms::Button());
			this->DownloadConfigBtn = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxComm2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBoxComm1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->txtPL_Address1 = (gcnew System::Windows::Forms::TextBox());
			this->txtPL_Timeout1 = (gcnew System::Windows::Forms::TextBox());
			this->txtPL_Address2 = (gcnew System::Windows::Forms::TextBox());
			this->txtPL_Timeout2 = (gcnew System::Windows::Forms::TextBox());
			this->cmbPL_Boutrate1 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbPL_Par1 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbPL_DS1 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbPL_BS1 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbPL_Boutrate2 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbPL_Par2 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbPL_DS2 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbPL_BS2 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->chkBox_Masternet = (gcnew System::Windows::Forms::CheckBox());
			this->ETHBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->ETHBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_IP1 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_IP2 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_IP3 = (gcnew System::Windows::Forms::TextBox());
			this->txtETH1_IP4 = (gcnew System::Windows::Forms::TextBox());
			this->txtETH1_GATE4 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_GATE3 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_GATE2 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_GATE1 = (gcnew System::Windows::Forms::TextBox());
			this->txtETH1_MASK4 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_MASK3 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_MASK2 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_MASK1 = (gcnew System::Windows::Forms::TextBox());
			this->txtETH1_MAC1 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_MAC2 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_MAC4 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_MAC3 = (gcnew System::Windows::Forms::TextBox());
			this->txtETH1_MAC6 = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->txtETH1_MAC5 = (gcnew System::Windows::Forms::TextBox());
			this->txtETH2_MAC6 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_MAC5 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_MAC4 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_MAC3 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_MAC2 = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_MAC1 = (gcnew System::Windows::Forms::TextBox());
			this->txtETH2_MASK4 = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_MASK3 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_MASK2 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_MASK1 = (gcnew System::Windows::Forms::TextBox());
			this->txtETH2_GATE4 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_GATE3 = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_GATE2 = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_GATE1 = (gcnew System::Windows::Forms::TextBox());
			this->txtETH2_IP4 = (gcnew System::Windows::Forms::TextBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_IP3 = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_IP2 = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->txtETH2_IP1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_HRAI = (gcnew System::Windows::Forms::Label());
			this->lbl_HRAO = (gcnew System::Windows::Forms::Label());
			this->txt_HRAI = (gcnew System::Windows::Forms::TextBox());
			this->txt_HRAO = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_Ntwt = (gcnew System::Windows::Forms::Label());
			this->lbl_Frt = (gcnew System::Windows::Forms::Label());
			this->lbl_Srt = (gcnew System::Windows::Forms::Label());
			this->lbl_Aa = (gcnew System::Windows::Forms::Label());
			this->txt_Ntwt = (gcnew System::Windows::Forms::TextBox());
			this->txt_Frt = (gcnew System::Windows::Forms::TextBox());
			this->txt_Srt = (gcnew System::Windows::Forms::TextBox());
			this->txt_Aa = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->richTxt_TSummary = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBoxComm2->SuspendLayout();
			this->groupBoxComm1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->ETHBox1->SuspendLayout();
			this->ETHBox2->SuspendLayout();
			this->groupBox->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->systemToolStripMenuItem,
					this->toolsToolStripMenuItem, this->promotionToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(1036, 33);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"MainMenuStrip";
			// 
			// systemToolStripMenuItem
			// 
			this->systemToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->uploadNewSystemToolStripMenuItem,
					this->readSystemToolStripMenuItem
			});
			this->systemToolStripMenuItem->Name = L"systemToolStripMenuItem";
			this->systemToolStripMenuItem->Size = System::Drawing::Size(81, 29);
			this->systemToolStripMenuItem->Text = L"System";
			// 
			// uploadNewSystemToolStripMenuItem
			// 
			this->uploadNewSystemToolStripMenuItem->Name = L"uploadNewSystemToolStripMenuItem";
			this->uploadNewSystemToolStripMenuItem->Size = System::Drawing::Size(257, 30);
			this->uploadNewSystemToolStripMenuItem->Text = L"Upload New System";
			this->uploadNewSystemToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Menu::uploadNewSystemToolStripMenuItem_Click);
			// 
			// readSystemToolStripMenuItem
			// 
			this->readSystemToolStripMenuItem->Name = L"readSystemToolStripMenuItem";
			this->readSystemToolStripMenuItem->Size = System::Drawing::Size(257, 30);
			this->readSystemToolStripMenuItem->Text = L"Read System";
			this->readSystemToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Menu::readSystemToolStripMenuItem_Click);
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->modBusTransmisionPreviewToolStripMenuItem,
					this->viewCommunicationBuffersToolStripMenuItem
			});
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(65, 29);
			this->toolsToolStripMenuItem->Text = L"Tools";
			// 
			// modBusTransmisionPreviewToolStripMenuItem
			// 
			this->modBusTransmisionPreviewToolStripMenuItem->Name = L"modBusTransmisionPreviewToolStripMenuItem";
			this->modBusTransmisionPreviewToolStripMenuItem->Size = System::Drawing::Size(326, 30);
			this->modBusTransmisionPreviewToolStripMenuItem->Text = L"ModBus Transmision Preview";
			// 
			// viewCommunicationBuffersToolStripMenuItem
			// 
			this->viewCommunicationBuffersToolStripMenuItem->Name = L"viewCommunicationBuffersToolStripMenuItem";
			this->viewCommunicationBuffersToolStripMenuItem->Size = System::Drawing::Size(326, 30);
			this->viewCommunicationBuffersToolStripMenuItem->Text = L"View Communication Buffers";
			// 
			// promotionToolStripMenuItem
			// 
			this->promotionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutProgramToolStripMenuItem });
			this->promotionToolStripMenuItem->Name = L"promotionToolStripMenuItem";
			this->promotionToolStripMenuItem->Size = System::Drawing::Size(109, 29);
			this->promotionToolStripMenuItem->Text = L"Promotion";
			// 
			// aboutProgramToolStripMenuItem
			// 
			this->aboutProgramToolStripMenuItem->Name = L"aboutProgramToolStripMenuItem";
			this->aboutProgramToolStripMenuItem->Size = System::Drawing::Size(221, 30);
			this->aboutProgramToolStripMenuItem->Text = L"About Program";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 33);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitContainer1->Panel1->Controls->Add(this->panel2);
			this->splitContainer1->Panel1->Controls->Add(this->panel1);
			this->splitContainer1->Panel1->Controls->Add(this->SendConfigBtn);
			this->splitContainer1->Panel1->Controls->Add(this->DownloadConfigBtn);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Panel2->Controls->Add(this->statusStrip1);
			this->splitContainer1->Size = System::Drawing::Size(1036, 785);
			this->splitContainer1->SplitterDistance = 278;
			this->splitContainer1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(25, 554);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(215, 204);
			this->panel2->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(25, 275);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(215, 273);
			this->panel1->TabIndex = 2;
			// 
			// SendConfigBtn
			// 
			this->SendConfigBtn->Location = System::Drawing::Point(25, 108);
			this->SendConfigBtn->Name = L"SendConfigBtn";
			this->SendConfigBtn->Size = System::Drawing::Size(215, 51);
			this->SendConfigBtn->TabIndex = 1;
			this->SendConfigBtn->Text = L"Send Configurations";
			this->SendConfigBtn->UseVisualStyleBackColor = true;
			// 
			// DownloadConfigBtn
			// 
			this->DownloadConfigBtn->Location = System::Drawing::Point(25, 51);
			this->DownloadConfigBtn->Name = L"DownloadConfigBtn";
			this->DownloadConfigBtn->Size = System::Drawing::Size(215, 51);
			this->DownloadConfigBtn->TabIndex = 0;
			this->DownloadConfigBtn->Text = L"Download Configurations";
			this->DownloadConfigBtn->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(751, 757);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBoxComm2);
			this->tabPage1->Controls->Add(this->groupBoxComm1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(743, 724);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Communication";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBoxComm2
			// 
			this->groupBoxComm2->Controls->Add(this->label16);
			this->groupBoxComm2->Controls->Add(this->label14);
			this->groupBoxComm2->Controls->Add(this->cmbPL_BS2);
			this->groupBoxComm2->Controls->Add(this->cmbPL_DS2);
			this->groupBoxComm2->Controls->Add(this->cmbPL_Par2);
			this->groupBoxComm2->Controls->Add(this->cmbPL_Boutrate2);
			this->groupBoxComm2->Controls->Add(this->txtPL_Timeout2);
			this->groupBoxComm2->Controls->Add(this->txtPL_Address2);
			this->groupBoxComm2->Controls->Add(this->label7);
			this->groupBoxComm2->Controls->Add(this->label8);
			this->groupBoxComm2->Controls->Add(this->label9);
			this->groupBoxComm2->Controls->Add(this->label10);
			this->groupBoxComm2->Controls->Add(this->label11);
			this->groupBoxComm2->Controls->Add(this->label12);
			this->groupBoxComm2->Location = System::Drawing::Point(41, 339);
			this->groupBoxComm2->Name = L"groupBoxComm2";
			this->groupBoxComm2->Size = System::Drawing::Size(670, 314);
			this->groupBoxComm2->TabIndex = 1;
			this->groupBoxComm2->TabStop = false;
			this->groupBoxComm2->Text = L"Communication RS485 MODBUS US1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(78, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(207, 20);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Transmission Speed RS485";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(219, 250);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 20);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Timeout";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(219, 210);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(66, 20);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Stop Bit";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(184, 170);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 20);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Word Lenght";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(216, 130);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 20);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Intensity";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(157, 50);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(128, 20);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Direction Module";
			// 
			// groupBoxComm1
			// 
			this->groupBoxComm1->Controls->Add(this->label15);
			this->groupBoxComm1->Controls->Add(this->label13);
			this->groupBoxComm1->Controls->Add(this->cmbPL_BS1);
			this->groupBoxComm1->Controls->Add(this->cmbPL_DS1);
			this->groupBoxComm1->Controls->Add(this->cmbPL_Par1);
			this->groupBoxComm1->Controls->Add(this->cmbPL_Boutrate1);
			this->groupBoxComm1->Controls->Add(this->txtPL_Timeout1);
			this->groupBoxComm1->Controls->Add(this->txtPL_Address1);
			this->groupBoxComm1->Controls->Add(this->label2);
			this->groupBoxComm1->Controls->Add(this->label6);
			this->groupBoxComm1->Controls->Add(this->label5);
			this->groupBoxComm1->Controls->Add(this->label4);
			this->groupBoxComm1->Controls->Add(this->label3);
			this->groupBoxComm1->Controls->Add(this->label1);
			this->groupBoxComm1->Location = System::Drawing::Point(41, 19);
			this->groupBoxComm1->Name = L"groupBoxComm1";
			this->groupBoxComm1->Size = System::Drawing::Size(670, 314);
			this->groupBoxComm1->TabIndex = 0;
			this->groupBoxComm1->TabStop = false;
			this->groupBoxComm1->Text = L"Communication RS485 MODBUS US0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(78, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(207, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Transmission Speed RS485";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(219, 250);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 20);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Timeout";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(219, 210);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 20);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Stop Bit";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(184, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Word Lenght";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(216, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Intensity";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(157, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Direction Module";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->ETHBox2);
			this->tabPage2->Controls->Add(this->ETHBox1);
			this->tabPage2->Controls->Add(this->chkBox_Masternet);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(743, 724);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ethernet";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(743, 724);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Inputs/Outputs";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->groupBox1);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(743, 724);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Rotation";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->panel6);
			this->tabPage5->Controls->Add(this->panel5);
			this->tabPage5->Controls->Add(this->panel3);
			this->tabPage5->Location = System::Drawing::Point(4, 29);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(743, 724);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Tuning";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->statusStrip1->Location = System::Drawing::Point(0, 763);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(754, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// txtPL_Address1
			// 
			this->txtPL_Address1->Location = System::Drawing::Point(292, 50);
			this->txtPL_Address1->Name = L"txtPL_Address1";
			this->txtPL_Address1->Size = System::Drawing::Size(100, 26);
			this->txtPL_Address1->TabIndex = 5;
			// 
			// txtPL_Timeout1
			// 
			this->txtPL_Timeout1->Location = System::Drawing::Point(292, 248);
			this->txtPL_Timeout1->Name = L"txtPL_Timeout1";
			this->txtPL_Timeout1->Size = System::Drawing::Size(100, 26);
			this->txtPL_Timeout1->TabIndex = 6;
			// 
			// txtPL_Address2
			// 
			this->txtPL_Address2->Location = System::Drawing::Point(291, 50);
			this->txtPL_Address2->Name = L"txtPL_Address2";
			this->txtPL_Address2->Size = System::Drawing::Size(100, 26);
			this->txtPL_Address2->TabIndex = 11;
			// 
			// txtPL_Timeout2
			// 
			this->txtPL_Timeout2->Location = System::Drawing::Point(291, 243);
			this->txtPL_Timeout2->Name = L"txtPL_Timeout2";
			this->txtPL_Timeout2->Size = System::Drawing::Size(100, 26);
			this->txtPL_Timeout2->TabIndex = 12;
			// 
			// cmbPL_Boutrate1
			// 
			this->cmbPL_Boutrate1->FormattingEnabled = true;
			this->cmbPL_Boutrate1->Location = System::Drawing::Point(291, 88);
			this->cmbPL_Boutrate1->Name = L"cmbPL_Boutrate1";
			this->cmbPL_Boutrate1->Size = System::Drawing::Size(157, 28);
			this->cmbPL_Boutrate1->TabIndex = 7;
			// 
			// cmbPL_Par1
			// 
			this->cmbPL_Par1->FormattingEnabled = true;
			this->cmbPL_Par1->Location = System::Drawing::Point(291, 128);
			this->cmbPL_Par1->Name = L"cmbPL_Par1";
			this->cmbPL_Par1->Size = System::Drawing::Size(157, 28);
			this->cmbPL_Par1->TabIndex = 8;
			// 
			// cmbPL_DS1
			// 
			this->cmbPL_DS1->FormattingEnabled = true;
			this->cmbPL_DS1->Location = System::Drawing::Point(291, 168);
			this->cmbPL_DS1->Name = L"cmbPL_DS1";
			this->cmbPL_DS1->Size = System::Drawing::Size(157, 28);
			this->cmbPL_DS1->TabIndex = 9;
			// 
			// cmbPL_BS1
			// 
			this->cmbPL_BS1->FormattingEnabled = true;
			this->cmbPL_BS1->Location = System::Drawing::Point(291, 208);
			this->cmbPL_BS1->Name = L"cmbPL_BS1";
			this->cmbPL_BS1->Size = System::Drawing::Size(157, 28);
			this->cmbPL_BS1->TabIndex = 10;
			// 
			// cmbPL_Boutrate2
			// 
			this->cmbPL_Boutrate2->FormattingEnabled = true;
			this->cmbPL_Boutrate2->Location = System::Drawing::Point(291, 87);
			this->cmbPL_Boutrate2->Name = L"cmbPL_Boutrate2";
			this->cmbPL_Boutrate2->Size = System::Drawing::Size(157, 28);
			this->cmbPL_Boutrate2->TabIndex = 13;
			// 
			// cmbPL_Par2
			// 
			this->cmbPL_Par2->FormattingEnabled = true;
			this->cmbPL_Par2->Location = System::Drawing::Point(291, 126);
			this->cmbPL_Par2->Name = L"cmbPL_Par2";
			this->cmbPL_Par2->Size = System::Drawing::Size(157, 28);
			this->cmbPL_Par2->TabIndex = 14;
			// 
			// cmbPL_DS2
			// 
			this->cmbPL_DS2->FormattingEnabled = true;
			this->cmbPL_DS2->Location = System::Drawing::Point(291, 165);
			this->cmbPL_DS2->Name = L"cmbPL_DS2";
			this->cmbPL_DS2->Size = System::Drawing::Size(157, 28);
			this->cmbPL_DS2->TabIndex = 15;
			// 
			// cmbPL_BS2
			// 
			this->cmbPL_BS2->FormattingEnabled = true;
			this->cmbPL_BS2->Location = System::Drawing::Point(291, 204);
			this->cmbPL_BS2->Name = L"cmbPL_BS2";
			this->cmbPL_BS2->Size = System::Drawing::Size(157, 28);
			this->cmbPL_BS2->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(454, 90);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 20);
			this->label13->TabIndex = 11;
			this->label13->Text = L"[bps]";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(454, 90);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(43, 20);
			this->label14->TabIndex = 17;
			this->label14->Text = L"[bps]";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(399, 255);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(38, 20);
			this->label15->TabIndex = 12;
			this->label15->Text = L"[ms]";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(398, 249);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(38, 20);
			this->label16->TabIndex = 18;
			this->label16->Text = L"[ms]";
			// 
			// chkBox_Masternet
			// 
			this->chkBox_Masternet->AutoSize = true;
			this->chkBox_Masternet->Location = System::Drawing::Point(60, 45);
			this->chkBox_Masternet->Name = L"chkBox_Masternet";
			this->chkBox_Masternet->Size = System::Drawing::Size(133, 24);
			this->chkBox_Masternet->TabIndex = 0;
			this->chkBox_Masternet->Text = L"MASTERNET";
			this->chkBox_Masternet->UseVisualStyleBackColor = true;
			// 
			// ETHBox1
			// 
			this->ETHBox1->Controls->Add(this->txtETH1_MAC6);
			this->ETHBox1->Controls->Add(this->label39);
			this->ETHBox1->Controls->Add(this->txtETH1_MAC5);
			this->ETHBox1->Controls->Add(this->label36);
			this->ETHBox1->Controls->Add(this->txtETH1_MAC4);
			this->ETHBox1->Controls->Add(this->label37);
			this->ETHBox1->Controls->Add(this->txtETH1_MAC3);
			this->ETHBox1->Controls->Add(this->label35);
			this->ETHBox1->Controls->Add(this->txtETH1_MAC2);
			this->ETHBox1->Controls->Add(this->label34);
			this->ETHBox1->Controls->Add(this->txtETH1_MAC1);
			this->ETHBox1->Controls->Add(this->txtETH1_MASK4);
			this->ETHBox1->Controls->Add(this->label31);
			this->ETHBox1->Controls->Add(this->txtETH1_MASK3);
			this->ETHBox1->Controls->Add(this->label32);
			this->ETHBox1->Controls->Add(this->txtETH1_MASK2);
			this->ETHBox1->Controls->Add(this->label33);
			this->ETHBox1->Controls->Add(this->txtETH1_MASK1);
			this->ETHBox1->Controls->Add(this->txtETH1_GATE4);
			this->ETHBox1->Controls->Add(this->label28);
			this->ETHBox1->Controls->Add(this->txtETH1_GATE3);
			this->ETHBox1->Controls->Add(this->label29);
			this->ETHBox1->Controls->Add(this->txtETH1_GATE2);
			this->ETHBox1->Controls->Add(this->label30);
			this->ETHBox1->Controls->Add(this->txtETH1_GATE1);
			this->ETHBox1->Controls->Add(this->txtETH1_IP4);
			this->ETHBox1->Controls->Add(this->label27);
			this->ETHBox1->Controls->Add(this->txtETH1_IP3);
			this->ETHBox1->Controls->Add(this->label26);
			this->ETHBox1->Controls->Add(this->txtETH1_IP2);
			this->ETHBox1->Controls->Add(this->label25);
			this->ETHBox1->Controls->Add(this->txtETH1_IP1);
			this->ETHBox1->Controls->Add(this->label20);
			this->ETHBox1->Controls->Add(this->label19);
			this->ETHBox1->Controls->Add(this->label18);
			this->ETHBox1->Controls->Add(this->label17);
			this->ETHBox1->Location = System::Drawing::Point(60, 108);
			this->ETHBox1->Name = L"ETHBox1";
			this->ETHBox1->Size = System::Drawing::Size(657, 259);
			this->ETHBox1->TabIndex = 1;
			this->ETHBox1->TabStop = false;
			this->ETHBox1->Text = L"Network Settings ETHERNET 1";
			// 
			// ETHBox2
			// 
			this->ETHBox2->Controls->Add(this->txtETH2_MAC6);
			this->ETHBox2->Controls->Add(this->label21);
			this->ETHBox2->Controls->Add(this->label38);
			this->ETHBox2->Controls->Add(this->label23);
			this->ETHBox2->Controls->Add(this->txtETH2_MAC5);
			this->ETHBox2->Controls->Add(this->label22);
			this->ETHBox2->Controls->Add(this->label40);
			this->ETHBox2->Controls->Add(this->label24);
			this->ETHBox2->Controls->Add(this->txtETH2_MAC4);
			this->ETHBox2->Controls->Add(this->txtETH2_MASK2);
			this->ETHBox2->Controls->Add(this->label41);
			this->ETHBox2->Controls->Add(this->txtETH2_IP1);
			this->ETHBox2->Controls->Add(this->txtETH2_MAC3);
			this->ETHBox2->Controls->Add(this->label52);
			this->ETHBox2->Controls->Add(this->label42);
			this->ETHBox2->Controls->Add(this->txtETH2_IP2);
			this->ETHBox2->Controls->Add(this->txtETH2_MAC2);
			this->ETHBox2->Controls->Add(this->label51);
			this->ETHBox2->Controls->Add(this->label43);
			this->ETHBox2->Controls->Add(this->txtETH2_IP3);
			this->ETHBox2->Controls->Add(this->txtETH2_MAC1);
			this->ETHBox2->Controls->Add(this->label50);
			this->ETHBox2->Controls->Add(this->txtETH2_MASK4);
			this->ETHBox2->Controls->Add(this->txtETH2_IP4);
			this->ETHBox2->Controls->Add(this->label44);
			this->ETHBox2->Controls->Add(this->txtETH2_GATE1);
			this->ETHBox2->Controls->Add(this->txtETH2_MASK3);
			this->ETHBox2->Controls->Add(this->label49);
			this->ETHBox2->Controls->Add(this->label45);
			this->ETHBox2->Controls->Add(this->txtETH2_GATE2);
			this->ETHBox2->Controls->Add(this->label48);
			this->ETHBox2->Controls->Add(this->label46);
			this->ETHBox2->Controls->Add(this->txtETH2_GATE3);
			this->ETHBox2->Controls->Add(this->txtETH2_MASK1);
			this->ETHBox2->Controls->Add(this->label47);
			this->ETHBox2->Controls->Add(this->txtETH2_GATE4);
			this->ETHBox2->Location = System::Drawing::Point(60, 408);
			this->ETHBox2->Name = L"ETHBox2";
			this->ETHBox2->Size = System::Drawing::Size(657, 259);
			this->ETHBox2->TabIndex = 2;
			this->ETHBox2->TabStop = false;
			this->ETHBox2->Text = L"Network Settings ETHERNET 2";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(120, 60);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(78, 20);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Adress IP";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(70, 102);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(128, 20);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Default Gateway";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(95, 144);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(103, 20);
			this->label19->TabIndex = 2;
			this->label19->Text = L"Subnet Mask";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(91, 186);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(107, 20);
			this->label20->TabIndex = 3;
			this->label20->Text = L"MAC Address";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(91, 198);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(107, 20);
			this->label21->TabIndex = 7;
			this->label21->Text = L"MAC Address";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(95, 156);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(103, 20);
			this->label22->TabIndex = 6;
			this->label22->Text = L"Subnet Mask";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(70, 114);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(128, 20);
			this->label23->TabIndex = 5;
			this->label23->Text = L"Default Gateway";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(120, 72);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(78, 20);
			this->label24->TabIndex = 4;
			this->label24->Text = L"Adress IP";
			// 
			// txtETH1_IP1
			// 
			this->txtETH1_IP1->Location = System::Drawing::Point(203, 57);
			this->txtETH1_IP1->Name = L"txtETH1_IP1";
			this->txtETH1_IP1->Size = System::Drawing::Size(40, 26);
			this->txtETH1_IP1->TabIndex = 4;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(249, 56);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(18, 25);
			this->label25->TabIndex = 5;
			this->label25->Text = L".";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(319, 56);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(18, 25);
			this->label26->TabIndex = 7;
			this->label26->Text = L".";
			// 
			// txtETH1_IP2
			// 
			this->txtETH1_IP2->Location = System::Drawing::Point(273, 57);
			this->txtETH1_IP2->Name = L"txtETH1_IP2";
			this->txtETH1_IP2->Size = System::Drawing::Size(40, 26);
			this->txtETH1_IP2->TabIndex = 6;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(389, 56);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(18, 25);
			this->label27->TabIndex = 9;
			this->label27->Text = L".";
			// 
			// txtETH1_IP3
			// 
			this->txtETH1_IP3->Location = System::Drawing::Point(343, 57);
			this->txtETH1_IP3->Name = L"txtETH1_IP3";
			this->txtETH1_IP3->Size = System::Drawing::Size(40, 26);
			this->txtETH1_IP3->TabIndex = 8;
			// 
			// txtETH1_IP4
			// 
			this->txtETH1_IP4->Location = System::Drawing::Point(413, 57);
			this->txtETH1_IP4->Name = L"txtETH1_IP4";
			this->txtETH1_IP4->Size = System::Drawing::Size(40, 26);
			this->txtETH1_IP4->TabIndex = 10;
			// 
			// txtETH1_GATE4
			// 
			this->txtETH1_GATE4->Location = System::Drawing::Point(413, 99);
			this->txtETH1_GATE4->Name = L"txtETH1_GATE4";
			this->txtETH1_GATE4->Size = System::Drawing::Size(40, 26);
			this->txtETH1_GATE4->TabIndex = 17;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(389, 98);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(18, 25);
			this->label28->TabIndex = 16;
			this->label28->Text = L".";
			// 
			// txtETH1_GATE3
			// 
			this->txtETH1_GATE3->Location = System::Drawing::Point(343, 99);
			this->txtETH1_GATE3->Name = L"txtETH1_GATE3";
			this->txtETH1_GATE3->Size = System::Drawing::Size(40, 26);
			this->txtETH1_GATE3->TabIndex = 15;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(319, 98);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(18, 25);
			this->label29->TabIndex = 14;
			this->label29->Text = L".";
			// 
			// txtETH1_GATE2
			// 
			this->txtETH1_GATE2->Location = System::Drawing::Point(273, 99);
			this->txtETH1_GATE2->Name = L"txtETH1_GATE2";
			this->txtETH1_GATE2->Size = System::Drawing::Size(40, 26);
			this->txtETH1_GATE2->TabIndex = 13;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(249, 98);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(18, 25);
			this->label30->TabIndex = 12;
			this->label30->Text = L".";
			// 
			// txtETH1_GATE1
			// 
			this->txtETH1_GATE1->Location = System::Drawing::Point(203, 99);
			this->txtETH1_GATE1->Name = L"txtETH1_GATE1";
			this->txtETH1_GATE1->Size = System::Drawing::Size(40, 26);
			this->txtETH1_GATE1->TabIndex = 11;
			// 
			// txtETH1_MASK4
			// 
			this->txtETH1_MASK4->Location = System::Drawing::Point(413, 141);
			this->txtETH1_MASK4->Name = L"txtETH1_MASK4";
			this->txtETH1_MASK4->Size = System::Drawing::Size(40, 26);
			this->txtETH1_MASK4->TabIndex = 24;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(389, 140);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(18, 25);
			this->label31->TabIndex = 23;
			this->label31->Text = L".";
			// 
			// txtETH1_MASK3
			// 
			this->txtETH1_MASK3->Location = System::Drawing::Point(343, 141);
			this->txtETH1_MASK3->Name = L"txtETH1_MASK3";
			this->txtETH1_MASK3->Size = System::Drawing::Size(40, 26);
			this->txtETH1_MASK3->TabIndex = 22;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(319, 140);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(18, 25);
			this->label32->TabIndex = 21;
			this->label32->Text = L".";
			// 
			// txtETH1_MASK2
			// 
			this->txtETH1_MASK2->Location = System::Drawing::Point(273, 141);
			this->txtETH1_MASK2->Name = L"txtETH1_MASK2";
			this->txtETH1_MASK2->Size = System::Drawing::Size(40, 26);
			this->txtETH1_MASK2->TabIndex = 20;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(249, 140);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(18, 25);
			this->label33->TabIndex = 19;
			this->label33->Text = L".";
			// 
			// txtETH1_MASK1
			// 
			this->txtETH1_MASK1->Location = System::Drawing::Point(203, 141);
			this->txtETH1_MASK1->Name = L"txtETH1_MASK1";
			this->txtETH1_MASK1->Size = System::Drawing::Size(40, 26);
			this->txtETH1_MASK1->TabIndex = 18;
			// 
			// txtETH1_MAC1
			// 
			this->txtETH1_MAC1->Location = System::Drawing::Point(204, 181);
			this->txtETH1_MAC1->Name = L"txtETH1_MAC1";
			this->txtETH1_MAC1->Size = System::Drawing::Size(40, 26);
			this->txtETH1_MAC1->TabIndex = 25;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(250, 179);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(19, 25);
			this->label34->TabIndex = 26;
			this->label34->Text = L":";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(320, 179);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(19, 25);
			this->label35->TabIndex = 28;
			this->label35->Text = L":";
			// 
			// txtETH1_MAC2
			// 
			this->txtETH1_MAC2->Location = System::Drawing::Point(274, 181);
			this->txtETH1_MAC2->Name = L"txtETH1_MAC2";
			this->txtETH1_MAC2->Size = System::Drawing::Size(40, 26);
			this->txtETH1_MAC2->TabIndex = 27;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(460, 179);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(19, 25);
			this->label36->TabIndex = 32;
			this->label36->Text = L":";
			// 
			// txtETH1_MAC4
			// 
			this->txtETH1_MAC4->Location = System::Drawing::Point(414, 181);
			this->txtETH1_MAC4->Name = L"txtETH1_MAC4";
			this->txtETH1_MAC4->Size = System::Drawing::Size(40, 26);
			this->txtETH1_MAC4->TabIndex = 31;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(390, 179);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(19, 25);
			this->label37->TabIndex = 30;
			this->label37->Text = L":";
			// 
			// txtETH1_MAC3
			// 
			this->txtETH1_MAC3->Location = System::Drawing::Point(344, 181);
			this->txtETH1_MAC3->Name = L"txtETH1_MAC3";
			this->txtETH1_MAC3->Size = System::Drawing::Size(40, 26);
			this->txtETH1_MAC3->TabIndex = 29;
			// 
			// txtETH1_MAC6
			// 
			this->txtETH1_MAC6->Location = System::Drawing::Point(554, 181);
			this->txtETH1_MAC6->Name = L"txtETH1_MAC6";
			this->txtETH1_MAC6->Size = System::Drawing::Size(40, 26);
			this->txtETH1_MAC6->TabIndex = 35;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(530, 179);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(19, 25);
			this->label39->TabIndex = 34;
			this->label39->Text = L":";
			// 
			// txtETH1_MAC5
			// 
			this->txtETH1_MAC5->Location = System::Drawing::Point(484, 181);
			this->txtETH1_MAC5->Name = L"txtETH1_MAC5";
			this->txtETH1_MAC5->Size = System::Drawing::Size(40, 26);
			this->txtETH1_MAC5->TabIndex = 33;
			// 
			// txtETH2_MAC6
			// 
			this->txtETH2_MAC6->Location = System::Drawing::Point(555, 196);
			this->txtETH2_MAC6->Name = L"txtETH2_MAC6";
			this->txtETH2_MAC6->Size = System::Drawing::Size(40, 26);
			this->txtETH2_MAC6->TabIndex = 67;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(531, 194);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(19, 25);
			this->label38->TabIndex = 66;
			this->label38->Text = L":";
			// 
			// txtETH2_MAC5
			// 
			this->txtETH2_MAC5->Location = System::Drawing::Point(485, 196);
			this->txtETH2_MAC5->Name = L"txtETH2_MAC5";
			this->txtETH2_MAC5->Size = System::Drawing::Size(40, 26);
			this->txtETH2_MAC5->TabIndex = 65;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(461, 194);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(19, 25);
			this->label40->TabIndex = 64;
			this->label40->Text = L":";
			// 
			// txtETH2_MAC4
			// 
			this->txtETH2_MAC4->Location = System::Drawing::Point(415, 196);
			this->txtETH2_MAC4->Name = L"txtETH2_MAC4";
			this->txtETH2_MAC4->Size = System::Drawing::Size(40, 26);
			this->txtETH2_MAC4->TabIndex = 63;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(391, 194);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(19, 25);
			this->label41->TabIndex = 62;
			this->label41->Text = L":";
			// 
			// txtETH2_MAC3
			// 
			this->txtETH2_MAC3->Location = System::Drawing::Point(345, 196);
			this->txtETH2_MAC3->Name = L"txtETH2_MAC3";
			this->txtETH2_MAC3->Size = System::Drawing::Size(40, 26);
			this->txtETH2_MAC3->TabIndex = 61;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(321, 194);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(19, 25);
			this->label42->TabIndex = 60;
			this->label42->Text = L":";
			// 
			// txtETH2_MAC2
			// 
			this->txtETH2_MAC2->Location = System::Drawing::Point(275, 196);
			this->txtETH2_MAC2->Name = L"txtETH2_MAC2";
			this->txtETH2_MAC2->Size = System::Drawing::Size(40, 26);
			this->txtETH2_MAC2->TabIndex = 59;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(251, 194);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(19, 25);
			this->label43->TabIndex = 58;
			this->label43->Text = L":";
			// 
			// txtETH2_MAC1
			// 
			this->txtETH2_MAC1->Location = System::Drawing::Point(205, 196);
			this->txtETH2_MAC1->Name = L"txtETH2_MAC1";
			this->txtETH2_MAC1->Size = System::Drawing::Size(40, 26);
			this->txtETH2_MAC1->TabIndex = 57;
			// 
			// txtETH2_MASK4
			// 
			this->txtETH2_MASK4->Location = System::Drawing::Point(414, 156);
			this->txtETH2_MASK4->Name = L"txtETH2_MASK4";
			this->txtETH2_MASK4->Size = System::Drawing::Size(40, 26);
			this->txtETH2_MASK4->TabIndex = 56;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(390, 155);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(18, 25);
			this->label44->TabIndex = 55;
			this->label44->Text = L".";
			// 
			// txtETH2_MASK3
			// 
			this->txtETH2_MASK3->Location = System::Drawing::Point(344, 156);
			this->txtETH2_MASK3->Name = L"txtETH2_MASK3";
			this->txtETH2_MASK3->Size = System::Drawing::Size(40, 26);
			this->txtETH2_MASK3->TabIndex = 54;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(320, 155);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(18, 25);
			this->label45->TabIndex = 53;
			this->label45->Text = L".";
			// 
			// txtETH2_MASK2
			// 
			this->txtETH2_MASK2->Location = System::Drawing::Point(274, 156);
			this->txtETH2_MASK2->Name = L"txtETH2_MASK2";
			this->txtETH2_MASK2->Size = System::Drawing::Size(40, 26);
			this->txtETH2_MASK2->TabIndex = 52;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(250, 155);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(18, 25);
			this->label46->TabIndex = 51;
			this->label46->Text = L".";
			// 
			// txtETH2_MASK1
			// 
			this->txtETH2_MASK1->Location = System::Drawing::Point(204, 156);
			this->txtETH2_MASK1->Name = L"txtETH2_MASK1";
			this->txtETH2_MASK1->Size = System::Drawing::Size(40, 26);
			this->txtETH2_MASK1->TabIndex = 50;
			// 
			// txtETH2_GATE4
			// 
			this->txtETH2_GATE4->Location = System::Drawing::Point(414, 114);
			this->txtETH2_GATE4->Name = L"txtETH2_GATE4";
			this->txtETH2_GATE4->Size = System::Drawing::Size(40, 26);
			this->txtETH2_GATE4->TabIndex = 49;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(390, 113);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(18, 25);
			this->label47->TabIndex = 48;
			this->label47->Text = L".";
			// 
			// txtETH2_GATE3
			// 
			this->txtETH2_GATE3->Location = System::Drawing::Point(344, 114);
			this->txtETH2_GATE3->Name = L"txtETH2_GATE3";
			this->txtETH2_GATE3->Size = System::Drawing::Size(40, 26);
			this->txtETH2_GATE3->TabIndex = 47;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(320, 113);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(18, 25);
			this->label48->TabIndex = 46;
			this->label48->Text = L".";
			// 
			// txtETH2_GATE2
			// 
			this->txtETH2_GATE2->Location = System::Drawing::Point(274, 114);
			this->txtETH2_GATE2->Name = L"txtETH2_GATE2";
			this->txtETH2_GATE2->Size = System::Drawing::Size(40, 26);
			this->txtETH2_GATE2->TabIndex = 45;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(250, 113);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(18, 25);
			this->label49->TabIndex = 44;
			this->label49->Text = L".";
			// 
			// txtETH2_GATE1
			// 
			this->txtETH2_GATE1->Location = System::Drawing::Point(204, 114);
			this->txtETH2_GATE1->Name = L"txtETH2_GATE1";
			this->txtETH2_GATE1->Size = System::Drawing::Size(40, 26);
			this->txtETH2_GATE1->TabIndex = 43;
			// 
			// txtETH2_IP4
			// 
			this->txtETH2_IP4->Location = System::Drawing::Point(414, 72);
			this->txtETH2_IP4->Name = L"txtETH2_IP4";
			this->txtETH2_IP4->Size = System::Drawing::Size(40, 26);
			this->txtETH2_IP4->TabIndex = 42;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(390, 71);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(18, 25);
			this->label50->TabIndex = 41;
			this->label50->Text = L".";
			// 
			// txtETH2_IP3
			// 
			this->txtETH2_IP3->Location = System::Drawing::Point(344, 72);
			this->txtETH2_IP3->Name = L"txtETH2_IP3";
			this->txtETH2_IP3->Size = System::Drawing::Size(40, 26);
			this->txtETH2_IP3->TabIndex = 40;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(320, 71);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(18, 25);
			this->label51->TabIndex = 39;
			this->label51->Text = L".";
			// 
			// txtETH2_IP2
			// 
			this->txtETH2_IP2->Location = System::Drawing::Point(274, 72);
			this->txtETH2_IP2->Name = L"txtETH2_IP2";
			this->txtETH2_IP2->Size = System::Drawing::Size(40, 26);
			this->txtETH2_IP2->TabIndex = 38;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(250, 71);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(18, 25);
			this->label52->TabIndex = 37;
			this->label52->Text = L".";
			// 
			// txtETH2_IP1
			// 
			this->txtETH2_IP1->Location = System::Drawing::Point(204, 72);
			this->txtETH2_IP1->Name = L"txtETH2_IP1";
			this->txtETH2_IP1->Size = System::Drawing::Size(40, 26);
			this->txtETH2_IP1->TabIndex = 36;
			// 
			// groupBox
			// 
			this->groupBox->Controls->Add(this->label54);
			this->groupBox->Controls->Add(this->label53);
			this->groupBox->Controls->Add(this->txt_HRAO);
			this->groupBox->Controls->Add(this->txt_HRAI);
			this->groupBox->Controls->Add(this->lbl_HRAO);
			this->groupBox->Controls->Add(this->lbl_HRAI);
			this->groupBox->Location = System::Drawing::Point(26, 59);
			this->groupBox->Name = L"groupBox";
			this->groupBox->Size = System::Drawing::Size(697, 184);
			this->groupBox->TabIndex = 0;
			this->groupBox->TabStop = false;
			this->groupBox->Text = L"Analog Imputs/Outputs";
			// 
			// lbl_HRAI
			// 
			this->lbl_HRAI->AutoSize = true;
			this->lbl_HRAI->Location = System::Drawing::Point(252, 48);
			this->lbl_HRAI->Name = L"lbl_HRAI";
			this->lbl_HRAI->Size = System::Drawing::Size(189, 20);
			this->lbl_HRAI->TabIndex = 0;
			this->lbl_HRAI->Text = L"High Range Analog Input";
			// 
			// lbl_HRAO
			// 
			this->lbl_HRAO->AutoSize = true;
			this->lbl_HRAO->Location = System::Drawing::Point(240, 116);
			this->lbl_HRAO->Name = L"lbl_HRAO";
			this->lbl_HRAO->Size = System::Drawing::Size(201, 20);
			this->lbl_HRAO->TabIndex = 1;
			this->lbl_HRAO->Text = L"High Range Analog Output";
			// 
			// txt_HRAI
			// 
			this->txt_HRAI->Location = System::Drawing::Point(447, 43);
			this->txt_HRAI->Name = L"txt_HRAI";
			this->txt_HRAI->Size = System::Drawing::Size(100, 26);
			this->txt_HRAI->TabIndex = 2;
			// 
			// txt_HRAO
			// 
			this->txt_HRAO->Location = System::Drawing::Point(447, 114);
			this->txt_HRAO->Name = L"txt_HRAO";
			this->txt_HRAO->Size = System::Drawing::Size(100, 26);
			this->txt_HRAO->TabIndex = 3;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(553, 46);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(41, 20);
			this->label53->TabIndex = 4;
			this->label53->Text = L"[mA]";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(553, 116);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(41, 20);
			this->label54->TabIndex = 5;
			this->label54->Text = L"[mA]";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label61);
			this->groupBox1->Controls->Add(this->label60);
			this->groupBox1->Controls->Add(this->label59);
			this->groupBox1->Controls->Add(this->txt_Aa);
			this->groupBox1->Controls->Add(this->txt_Srt);
			this->groupBox1->Controls->Add(this->txt_Frt);
			this->groupBox1->Controls->Add(this->txt_Ntwt);
			this->groupBox1->Controls->Add(this->lbl_Aa);
			this->groupBox1->Controls->Add(this->lbl_Srt);
			this->groupBox1->Controls->Add(this->lbl_Frt);
			this->groupBox1->Controls->Add(this->lbl_Ntwt);
			this->groupBox1->Location = System::Drawing::Point(25, 58);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(683, 255);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Rotational measurement";
			// 
			// lbl_Ntwt
			// 
			this->lbl_Ntwt->AutoSize = true;
			this->lbl_Ntwt->Location = System::Drawing::Point(23, 48);
			this->lbl_Ntwt->Name = L"lbl_Ntwt";
			this->lbl_Ntwt->Size = System::Drawing::Size(262, 20);
			this->lbl_Ntwt->TabIndex = 0;
			this->lbl_Ntwt->Text = L"Number of Transmission Wheel Tips";
			// 
			// lbl_Frt
			// 
			this->lbl_Frt->AutoSize = true;
			this->lbl_Frt->Location = System::Drawing::Point(106, 100);
			this->lbl_Frt->Name = L"lbl_Frt";
			this->lbl_Frt->Size = System::Drawing::Size(179, 20);
			this->lbl_Frt->TabIndex = 1;
			this->lbl_Frt->Text = L"First Rotation Threshold";
			// 
			// lbl_Srt
			// 
			this->lbl_Srt->AutoSize = true;
			this->lbl_Srt->Location = System::Drawing::Point(82, 152);
			this->lbl_Srt->Name = L"lbl_Srt";
			this->lbl_Srt->Size = System::Drawing::Size(203, 20);
			this->lbl_Srt->TabIndex = 2;
			this->lbl_Srt->Text = L"Second Rotation Threshold";
			// 
			// lbl_Aa
			// 
			this->lbl_Aa->AutoSize = true;
			this->lbl_Aa->Location = System::Drawing::Point(111, 204);
			this->lbl_Aa->Name = L"lbl_Aa";
			this->lbl_Aa->Size = System::Drawing::Size(174, 20);
			this->lbl_Aa->TabIndex = 3;
			this->lbl_Aa->Text = L"Acepptable Aceleration";
			// 
			// txt_Ntwt
			// 
			this->txt_Ntwt->Location = System::Drawing::Point(301, 48);
			this->txt_Ntwt->Name = L"txt_Ntwt";
			this->txt_Ntwt->Size = System::Drawing::Size(100, 26);
			this->txt_Ntwt->TabIndex = 4;
			// 
			// txt_Frt
			// 
			this->txt_Frt->Location = System::Drawing::Point(301, 98);
			this->txt_Frt->Name = L"txt_Frt";
			this->txt_Frt->Size = System::Drawing::Size(100, 26);
			this->txt_Frt->TabIndex = 5;
			// 
			// txt_Srt
			// 
			this->txt_Srt->Location = System::Drawing::Point(301, 148);
			this->txt_Srt->Name = L"txt_Srt";
			this->txt_Srt->Size = System::Drawing::Size(100, 26);
			this->txt_Srt->TabIndex = 6;
			// 
			// txt_Aa
			// 
			this->txt_Aa->Location = System::Drawing::Point(301, 198);
			this->txt_Aa->Name = L"txt_Aa";
			this->txt_Aa->Size = System::Drawing::Size(100, 26);
			this->txt_Aa->TabIndex = 7;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(417, 104);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(72, 20);
			this->label59->TabIndex = 8;
			this->label59->Text = L"[Rot/min]";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(417, 154);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(72, 20);
			this->label60->TabIndex = 9;
			this->label60->Text = L"[Rot/min]";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(417, 201);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(72, 20);
			this->label61->TabIndex = 10;
			this->label61->Text = L"[Rot/min]";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(24, 40);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(692, 148);
			this->panel3->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel4->Controls->Add(this->label55);
			this->panel4->Location = System::Drawing::Point(22, 23);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(647, 100);
			this->panel4->TabIndex = 0;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(18, 13);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(297, 20);
			this->label55->TabIndex = 0;
			this->label55->Text = L"Press START to begin tuning the module";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label56);
			this->panel5->Location = System::Drawing::Point(46, 210);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(218, 378);
			this->panel5->TabIndex = 1;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(75, 172);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(69, 20);
			this->label56->TabIndex = 0;
			this->label56->Text = L"TABLE\?";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->richTxt_TSummary);
			this->panel6->Location = System::Drawing::Point(320, 195);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(396, 502);
			this->panel6->TabIndex = 2;
			// 
			// richTxt_TSummary
			// 
			this->richTxt_TSummary->Location = System::Drawing::Point(24, 15);
			this->richTxt_TSummary->Name = L"richTxt_TSummary";
			this->richTxt_TSummary->Size = System::Drawing::Size(349, 465);
			this->richTxt_TSummary->TabIndex = 0;
			this->richTxt_TSummary->Text = L"Tuning Summary:\n\nTuning analogic input for 0mA -- OK\nTuning analogic input for 20"
				L"mA -- OK\nTuning analogic output for 0.5mA -- OK\nTuning analogic output for 20mA "
				L"-- OK";
			// 
			// Main_Menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1036, 818);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip);
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"Main_Menu";
			this->Text = L"Master Suite";
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBoxComm2->ResumeLayout(false);
			this->groupBoxComm2->PerformLayout();
			this->groupBoxComm1->ResumeLayout(false);
			this->groupBoxComm1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->ETHBox1->ResumeLayout(false);
			this->ETHBox1->PerformLayout();
			this->ETHBox2->ResumeLayout(false);
			this->ETHBox2->PerformLayout();
			this->groupBox->ResumeLayout(false);
			this->groupBox->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void uploadNewSystemToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {		
	}
	private: System::Void readSystemToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}

};
}
