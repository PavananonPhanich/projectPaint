#pragma 
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include "CameraForm.h"
#include "opencv2/opencv.hpp"

using namespace cv;

namespace projectPaint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::FlowLayoutPanel^ sizeFlow;
	private: System::Windows::Forms::FlowLayoutPanel^ typeFlow;
	private: System::Windows::Forms::Button^ type_btn;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ size_1;
	private: System::Windows::Forms::Button^ size_3;
	private: System::Windows::Forms::Button^ size_5;
	private: System::Windows::Forms::Button^ size_8;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Panel^ panels3;

	private: System::Windows::Forms::Panel^ panels8;

	private: System::Windows::Forms::Panel^ panels1;
	private: System::Windows::Forms::Panel^ panels5;




	private: System::Windows::Forms::Panel^ sizeBtn;
	private: System::Windows::Forms::Button^ size_btn;

	private: System::Windows::Forms::Timer^ timer1;





	enum class DrawState {
		NotDrawing,
		DrawLine, DrawingLine,
		DrawFreehand,DrawingFreehand,
		DrawEllipse, DrawingEllipse,
		DrawCircle, DrawingCircle,
		DrawTriangle, DrawingTriangle,
		DrawSquare,DrawingSquare,
		DrawFill,DrawingFill
	} drawState;

	int rgbColor(int r,int g,int b) {
		int RedColor = r;
		int GreenColor = g ;
		int BlueColor = b ;

		return 0;
	}
	


	bool size_expand = false;
	bool type_expand = false;
	
	
	enum class SizeState {
		sizeOne,sizingOne,
		sizeThree,sizingThree,
		sizeFive,sizingFive,
		sizeEight,sizingEight
	} sizeState;
	

	System::Drawing::Point^ startPoint;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ whiteCanvasBtn;






		

	public:
		Bitmap^ tmpImage;

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
	private: System::Windows::Forms::ToolStripContainer^ toolStripContainer1;
	private: System::Windows::Forms::MenuStrip^ menuStrip;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openBtn;
	private: System::Windows::Forms::ToolStripMenuItem^ saveBtn;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsBtn;



	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitBtn;

	private: System::Windows::Forms::ToolStripMenuItem^ convertToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hsvBtn;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::ToolStripMenuItem^ rgbBtn;
	private: System::Windows::Forms::ToolStripMenuItem^ grayBtn;



	private: System::Windows::Forms::Panel^ pictureBoxPanel;
	private: System::Windows::Forms::Panel^ panel1;



	private: System::Windows::Forms::Button^ fill_btn;


	private: System::Windows::Forms::Button^ color_btn;
	private: System::Windows::Forms::Button^ showColor;



	private: System::Windows::Forms::Button^ square_btn;

	private: System::Windows::Forms::Button^ ellipse_btn;

	private: System::Windows::Forms::ColorDialog^ colorDialog;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::Button^ CameraBtn;

	private: System::Windows::Forms::Button^ triangle_btn;


	private: System::Windows::Forms::Button^ circle_btn;

	private: System::Windows::Forms::Button^ freehand_btn;

	private: System::Windows::Forms::Button^ line_btn;
private: System::ComponentModel::IContainer^ components;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->typeFlow = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->type_btn = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->sizeFlow = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->sizeBtn = (gcnew System::Windows::Forms::Panel());
			this->size_btn = (gcnew System::Windows::Forms::Button());
			this->panels1 = (gcnew System::Windows::Forms::Panel());
			this->size_1 = (gcnew System::Windows::Forms::Button());
			this->panels3 = (gcnew System::Windows::Forms::Panel());
			this->size_3 = (gcnew System::Windows::Forms::Button());
			this->panels5 = (gcnew System::Windows::Forms::Panel());
			this->size_5 = (gcnew System::Windows::Forms::Button());
			this->panels8 = (gcnew System::Windows::Forms::Panel());
			this->size_8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxPanel = (gcnew System::Windows::Forms::Panel());
			this->triangle_btn = (gcnew System::Windows::Forms::Button());
			this->circle_btn = (gcnew System::Windows::Forms::Button());
			this->freehand_btn = (gcnew System::Windows::Forms::Button());
			this->line_btn = (gcnew System::Windows::Forms::Button());
			this->CameraBtn = (gcnew System::Windows::Forms::Button());
			this->square_btn = (gcnew System::Windows::Forms::Button());
			this->ellipse_btn = (gcnew System::Windows::Forms::Button());
			this->fill_btn = (gcnew System::Windows::Forms::Button());
			this->color_btn = (gcnew System::Windows::Forms::Button());
			this->showColor = (gcnew System::Windows::Forms::Button());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->whiteCanvasBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convertToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hsvBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rgbBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grayBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->typeFlow->SuspendLayout();
			this->sizeFlow->SuspendLayout();
			this->sizeBtn->SuspendLayout();
			this->panels1->SuspendLayout();
			this->panels3->SuspendLayout();
			this->panels5->SuspendLayout();
			this->panels8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->panel1->SuspendLayout();
			this->pictureBoxPanel->SuspendLayout();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Controls->Add(this->typeFlow);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->sizeFlow);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->pictureBox);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->panel1);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(934, 467);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(934, 491);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->menuStrip);
			// 
			// typeFlow
			// 
			this->typeFlow->Controls->Add(this->type_btn);
			this->typeFlow->Controls->Add(this->button6);
			this->typeFlow->Controls->Add(this->button5);
			this->typeFlow->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->typeFlow->Location = System::Drawing::Point(344, 19);
			this->typeFlow->Name = L"typeFlow";
			this->typeFlow->Size = System::Drawing::Size(60, 60);
			this->typeFlow->TabIndex = 18;
			// 
			// type_btn
			// 
			this->type_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->type_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->type_btn->Location = System::Drawing::Point(0, 0);
			this->type_btn->Margin = System::Windows::Forms::Padding(0);
			this->type_btn->Name = L"type_btn";
			this->type_btn->Size = System::Drawing::Size(60, 60);
			this->type_btn->TabIndex = 15;
			this->type_btn->Text = L"Type";
			this->type_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->type_btn->UseVisualStyleBackColor = false;
			this->type_btn->Click += gcnew System::EventHandler(this, &MyForm::type_btn_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(60, 0);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 45);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Solid";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(120, 0);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 45);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Dashed";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// sizeFlow
			// 
			this->sizeFlow->BackColor = System::Drawing::SystemColors::Control;
			this->sizeFlow->Controls->Add(this->sizeBtn);
			this->sizeFlow->Controls->Add(this->panels1);
			this->sizeFlow->Controls->Add(this->panels3);
			this->sizeFlow->Controls->Add(this->panels5);
			this->sizeFlow->Controls->Add(this->panels8);
			this->sizeFlow->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->sizeFlow->Location = System::Drawing::Point(265, 19);
			this->sizeFlow->Margin = System::Windows::Forms::Padding(0);
			this->sizeFlow->Name = L"sizeFlow";
			this->sizeFlow->Size = System::Drawing::Size(60, 60);
			this->sizeFlow->TabIndex = 17;
			// 
			// sizeBtn
			// 
			this->sizeBtn->Controls->Add(this->size_btn);
			this->sizeBtn->Location = System::Drawing::Point(0, 0);
			this->sizeBtn->Margin = System::Windows::Forms::Padding(0);
			this->sizeBtn->Name = L"sizeBtn";
			this->sizeBtn->Size = System::Drawing::Size(60, 60);
			this->sizeBtn->TabIndex = 13;
			// 
			// size_btn
			// 
			this->size_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->size_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->size_btn->FlatAppearance->BorderSize = 0;
			this->size_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"size_btn.Image")));
			this->size_btn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->size_btn->Location = System::Drawing::Point(0, 0);
			this->size_btn->Margin = System::Windows::Forms::Padding(0);
			this->size_btn->Name = L"size_btn";
			this->size_btn->Size = System::Drawing::Size(60, 60);
			this->size_btn->TabIndex = 11;
			this->size_btn->Text = L"Size";
			this->size_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->size_btn->UseVisualStyleBackColor = false;
			this->size_btn->Click += gcnew System::EventHandler(this, &MyForm::size_btn_Click);
			// 
			// panels1
			// 
			this->panels1->Controls->Add(this->size_1);
			this->panels1->Location = System::Drawing::Point(60, 0);
			this->panels1->Margin = System::Windows::Forms::Padding(0);
			this->panels1->Name = L"panels1";
			this->panels1->Size = System::Drawing::Size(60, 60);
			this->panels1->TabIndex = 12;
			// 
			// size_1
			// 
			this->size_1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->size_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->size_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->size_1->Location = System::Drawing::Point(0, 0);
			this->size_1->Margin = System::Windows::Forms::Padding(0);
			this->size_1->Name = L"size_1";
			this->size_1->Size = System::Drawing::Size(60, 60);
			this->size_1->TabIndex = 7;
			this->size_1->Text = L"1px";
			this->size_1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->size_1->UseVisualStyleBackColor = false;
			this->size_1->Click += gcnew System::EventHandler(this, &MyForm::size_1_Click);
			// 
			// panels3
			// 
			this->panels3->Controls->Add(this->size_3);
			this->panels3->Location = System::Drawing::Point(120, 0);
			this->panels3->Margin = System::Windows::Forms::Padding(0);
			this->panels3->Name = L"panels3";
			this->panels3->Size = System::Drawing::Size(60, 60);
			this->panels3->TabIndex = 11;
			// 
			// size_3
			// 
			this->size_3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->size_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->size_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->size_3->Location = System::Drawing::Point(0, 0);
			this->size_3->Margin = System::Windows::Forms::Padding(0);
			this->size_3->Name = L"size_3";
			this->size_3->Size = System::Drawing::Size(60, 60);
			this->size_3->TabIndex = 8;
			this->size_3->Text = L"3px";
			this->size_3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->size_3->UseVisualStyleBackColor = false;
			this->size_3->Click += gcnew System::EventHandler(this, &MyForm::size_3_Click);
			// 
			// panels5
			// 
			this->panels5->Controls->Add(this->size_5);
			this->panels5->Location = System::Drawing::Point(180, 0);
			this->panels5->Margin = System::Windows::Forms::Padding(0);
			this->panels5->Name = L"panels5";
			this->panels5->Size = System::Drawing::Size(60, 60);
			this->panels5->TabIndex = 12;
			// 
			// size_5
			// 
			this->size_5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->size_5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->size_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->size_5->Location = System::Drawing::Point(0, 0);
			this->size_5->Margin = System::Windows::Forms::Padding(0);
			this->size_5->Name = L"size_5";
			this->size_5->Size = System::Drawing::Size(60, 60);
			this->size_5->TabIndex = 9;
			this->size_5->Text = L"5px";
			this->size_5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->size_5->UseVisualStyleBackColor = false;
			this->size_5->Click += gcnew System::EventHandler(this, &MyForm::size_5_Click);
			// 
			// panels8
			// 
			this->panels8->Controls->Add(this->size_8);
			this->panels8->Location = System::Drawing::Point(240, 0);
			this->panels8->Margin = System::Windows::Forms::Padding(0);
			this->panels8->Name = L"panels8";
			this->panels8->Size = System::Drawing::Size(60, 60);
			this->panels8->TabIndex = 12;
			// 
			// size_8
			// 
			this->size_8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->size_8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->size_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->size_8->Location = System::Drawing::Point(0, 0);
			this->size_8->Margin = System::Windows::Forms::Padding(0);
			this->size_8->Name = L"size_8";
			this->size_8->Size = System::Drawing::Size(60, 60);
			this->size_8->TabIndex = 10;
			this->size_8->Text = L"8px";
			this->size_8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->size_8->UseVisualStyleBackColor = false;
			this->size_8->Click += gcnew System::EventHandler(this, &MyForm::size_8_Click);
			// 
			// pictureBox
			// 
			this->pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox.Image")));
			this->pictureBox->Location = System::Drawing::Point(0, 100);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(934, 367);
			this->pictureBox->TabIndex = 4;
			this->pictureBox->TabStop = false;
			this->pictureBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_MouseDown);
			this->pictureBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_MouseMove);
			this->pictureBox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_MouseUp);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBoxPanel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(934, 100);
			this->panel1->TabIndex = 3;
			// 
			// pictureBoxPanel
			// 
			this->pictureBoxPanel->AutoScroll = true;
			this->pictureBoxPanel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBoxPanel->Controls->Add(this->triangle_btn);
			this->pictureBoxPanel->Controls->Add(this->circle_btn);
			this->pictureBoxPanel->Controls->Add(this->freehand_btn);
			this->pictureBoxPanel->Controls->Add(this->line_btn);
			this->pictureBoxPanel->Controls->Add(this->CameraBtn);
			this->pictureBoxPanel->Controls->Add(this->square_btn);
			this->pictureBoxPanel->Controls->Add(this->ellipse_btn);
			this->pictureBoxPanel->Controls->Add(this->fill_btn);
			this->pictureBoxPanel->Controls->Add(this->color_btn);
			this->pictureBoxPanel->Controls->Add(this->showColor);
			this->pictureBoxPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBoxPanel->Location = System::Drawing::Point(0, 0);
			this->pictureBoxPanel->Name = L"pictureBoxPanel";
			this->pictureBoxPanel->Size = System::Drawing::Size(934, 100);
			this->pictureBoxPanel->TabIndex = 2;
			// 
			// triangle_btn
			// 
			this->triangle_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->triangle_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->triangle_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"triangle_btn.Image")));
			this->triangle_btn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->triangle_btn->Location = System::Drawing::Point(686, 19);
			this->triangle_btn->Name = L"triangle_btn";
			this->triangle_btn->Size = System::Drawing::Size(60, 60);
			this->triangle_btn->TabIndex = 14;
			this->triangle_btn->Text = L"Triangle";
			this->triangle_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->triangle_btn->UseVisualStyleBackColor = false;
			this->triangle_btn->Click += gcnew System::EventHandler(this, &MyForm::triangle_btn_Click);
			// 
			// circle_btn
			// 
			this->circle_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->circle_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->circle_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"circle_btn.Image")));
			this->circle_btn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->circle_btn->Location = System::Drawing::Point(554, 19);
			this->circle_btn->Name = L"circle_btn";
			this->circle_btn->Size = System::Drawing::Size(60, 60);
			this->circle_btn->TabIndex = 13;
			this->circle_btn->Text = L"Circle";
			this->circle_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->circle_btn->UseVisualStyleBackColor = false;
			this->circle_btn->Click += gcnew System::EventHandler(this, &MyForm::circle_btn_Click);
			// 
			// freehand_btn
			// 
			this->freehand_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->freehand_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->freehand_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"freehand_btn.Image")));
			this->freehand_btn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->freehand_btn->Location = System::Drawing::Point(488, 19);
			this->freehand_btn->Name = L"freehand_btn";
			this->freehand_btn->Size = System::Drawing::Size(60, 60);
			this->freehand_btn->TabIndex = 12;
			this->freehand_btn->Text = L"Freehand";
			this->freehand_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->freehand_btn->UseVisualStyleBackColor = false;
			this->freehand_btn->Click += gcnew System::EventHandler(this, &MyForm::freehand_btn_Click);
			// 
			// line_btn
			// 
			this->line_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->line_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->line_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"line_btn.Image")));
			this->line_btn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->line_btn->Location = System::Drawing::Point(422, 19);
			this->line_btn->Name = L"line_btn";
			this->line_btn->Size = System::Drawing::Size(60, 60);
			this->line_btn->TabIndex = 11;
			this->line_btn->Text = L"Line";
			this->line_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->line_btn->UseVisualStyleBackColor = false;
			this->line_btn->Click += gcnew System::EventHandler(this, &MyForm::line_btn_Click);
			// 
			// CameraBtn
			// 
			this->CameraBtn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->CameraBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CameraBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CameraBtn.Image")));
			this->CameraBtn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->CameraBtn->Location = System::Drawing::Point(849, 19);
			this->CameraBtn->Name = L"CameraBtn";
			this->CameraBtn->Size = System::Drawing::Size(60, 60);
			this->CameraBtn->TabIndex = 10;
			this->CameraBtn->Text = L"Camera";
			this->CameraBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->CameraBtn->UseVisualStyleBackColor = false;
			this->CameraBtn->Click += gcnew System::EventHandler(this, &MyForm::cameraBtn_Click);
			// 
			// square_btn
			// 
			this->square_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->square_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->square_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"square_btn.Image")));
			this->square_btn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->square_btn->Location = System::Drawing::Point(752, 19);
			this->square_btn->Name = L"square_btn";
			this->square_btn->Size = System::Drawing::Size(60, 60);
			this->square_btn->TabIndex = 8;
			this->square_btn->Text = L"Square";
			this->square_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->square_btn->UseVisualStyleBackColor = false;
			this->square_btn->Click += gcnew System::EventHandler(this, &MyForm::square_btn_Click);
			// 
			// ellipse_btn
			// 
			this->ellipse_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ellipse_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ellipse_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ellipse_btn.Image")));
			this->ellipse_btn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ellipse_btn->Location = System::Drawing::Point(620, 19);
			this->ellipse_btn->Name = L"ellipse_btn";
			this->ellipse_btn->Size = System::Drawing::Size(60, 60);
			this->ellipse_btn->TabIndex = 7;
			this->ellipse_btn->Text = L"Ellipse";
			this->ellipse_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ellipse_btn->UseVisualStyleBackColor = false;
			this->ellipse_btn->Click += gcnew System::EventHandler(this, &MyForm::ellipse_btn_Click);
			// 
			// fill_btn
			// 
			this->fill_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->fill_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fill_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fill_btn.Image")));
			this->fill_btn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->fill_btn->Location = System::Drawing::Point(123, 19);
			this->fill_btn->Name = L"fill_btn";
			this->fill_btn->Size = System::Drawing::Size(60, 60);
			this->fill_btn->TabIndex = 4;
			this->fill_btn->Text = L"Fill";
			this->fill_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->fill_btn->UseVisualStyleBackColor = false;
			this->fill_btn->Click += gcnew System::EventHandler(this, &MyForm::fill_btn_Click);
			// 
			// color_btn
			// 
			this->color_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->color_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->color_btn->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->color_btn->FlatAppearance->BorderSize = 2;
			this->color_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->color_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->color_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"color_btn.Image")));
			this->color_btn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->color_btn->Location = System::Drawing::Point(57, 19);
			this->color_btn->Name = L"color_btn";
			this->color_btn->Size = System::Drawing::Size(60, 60);
			this->color_btn->TabIndex = 3;
			this->color_btn->Text = L"Color";
			this->color_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->color_btn->UseVisualStyleBackColor = false;
			this->color_btn->Click += gcnew System::EventHandler(this, &MyForm::color_btn_Click);
			// 
			// showColor
			// 
			this->showColor->Location = System::Drawing::Point(4, 25);
			this->showColor->Name = L"showColor";
			this->showColor->Size = System::Drawing::Size(50, 50);
			this->showColor->TabIndex = 2;
			this->showColor->UseVisualStyleBackColor = true;
			// 
			// menuStrip
			// 
			this->menuStrip->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->convertToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(934, 24);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->openBtn,
					this->saveBtn, this->saveAsBtn, this->toolStripSeparator2, this->whiteCanvasBtn, this->toolStripSeparator1, this->exitBtn
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// openBtn
			// 
			this->openBtn->Name = L"openBtn";
			this->openBtn->Size = System::Drawing::Size(146, 22);
			this->openBtn->Text = L"&Open";
			this->openBtn->Click += gcnew System::EventHandler(this, &MyForm::openBtn_Click);
			// 
			// saveBtn
			// 
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(146, 22);
			this->saveBtn->Text = L"&Save";
			this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::saveBtn_Click);
			// 
			// saveAsBtn
			// 
			this->saveAsBtn->Name = L"saveAsBtn";
			this->saveAsBtn->Size = System::Drawing::Size(146, 22);
			this->saveAsBtn->Text = L"&Save As";
			this->saveAsBtn->Click += gcnew System::EventHandler(this, &MyForm::saveAsBtn_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(143, 6);
			// 
			// whiteCanvasBtn
			// 
			this->whiteCanvasBtn->Name = L"whiteCanvasBtn";
			this->whiteCanvasBtn->Size = System::Drawing::Size(180, 22);
			this->whiteCanvasBtn->Text = L"White Canvas";
			this->whiteCanvasBtn->Click += gcnew System::EventHandler(this, &MyForm::whiteCanvasBtn_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(143, 6);
			// 
			// exitBtn
			// 
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(146, 22);
			this->exitBtn->Text = L"&Exit";
			this->exitBtn->Click += gcnew System::EventHandler(this, &MyForm::exitBtn_Click);
			// 
			// convertToolStripMenuItem
			// 
			this->convertToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->hsvBtn,
					this->rgbBtn, this->grayBtn
			});
			this->convertToolStripMenuItem->Name = L"convertToolStripMenuItem";
			this->convertToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->convertToolStripMenuItem->Text = L"Convert";
			// 
			// hsvBtn
			// 
			this->hsvBtn->Name = L"hsvBtn";
			this->hsvBtn->Size = System::Drawing::Size(98, 22);
			this->hsvBtn->Text = L"HSV";
			this->hsvBtn->Click += gcnew System::EventHandler(this, &MyForm::hsvBtn_Click);
			// 
			// rgbBtn
			// 
			this->rgbBtn->Name = L"rgbBtn";
			this->rgbBtn->Size = System::Drawing::Size(98, 22);
			this->rgbBtn->Text = L"RGB";
			this->rgbBtn->Click += gcnew System::EventHandler(this, &MyForm::rgbBtn_Click);
			// 
			// grayBtn
			// 
			this->grayBtn->Name = L"grayBtn";
			this->grayBtn->Size = System::Drawing::Size(98, 22);
			this->grayBtn->Text = L"Gray";
			this->grayBtn->Click += gcnew System::EventHandler(this, &MyForm::grayBtn_Click);
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog";
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->DefaultExt = L"png";
			this->saveFileDialog->Filter = L"Image files|*.jpg;*.png";
			// 
			// timer
			// 
			this->timer->Interval = 1;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 491);
			this->Controls->Add(this->toolStripContainer1);
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->typeFlow->ResumeLayout(false);
			this->sizeFlow->ResumeLayout(false);
			this->sizeBtn->ResumeLayout(false);
			this->panels1->ResumeLayout(false);
			this->panels3->ResumeLayout(false);
			this->panels5->ResumeLayout(false);
			this->panels8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->panel1->ResumeLayout(false);
			this->pictureBoxPanel->ResumeLayout(false);
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Bitmap^ bmp; // Declare application bitmap image


	private: System::Void openBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Bitmap^ image = gcnew Bitmap(openFileDialog->FileName);
			// Convert image to 24 bits RGB
			bmp = gcnew Bitmap(image->Size.Width, image->Size.Height, Imaging::PixelFormat::Format24bppRgb);
			bmp->SetResolution(image->HorizontalResolution, image->VerticalResolution);
			Graphics^ g = Graphics::FromImage(bmp);
			g->DrawImage(image, 0, 0);
			delete image;
			pictureBox->Image = bmp;
		}
	}


	private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	private: System::Void hsvBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		System::Drawing::Imaging::BitmapData^ bmpData =
			bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		// Using OpenCV: Create Image with data pointer
		Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
		// Do OpenCV function
		cvtColor(image, image, COLOR_BGR2HSV);
		// Unlock Bitmap Bits
		bmp->UnlockBits(bmpData);
		pictureBox->Image = bmp; // Show result

	}

	

	private: System::Void rgbBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		System::Drawing::Imaging::BitmapData^ bmpData =
			bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		// Using OpenCV: Create Image with data pointer
		Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
		// Do OpenCV function
		cvtColor(image, image, COLOR_BGR2RGB);
		// Unlock Bitmap Bits
		bmp->UnlockBits(bmpData);
		pictureBox->Image = bmp; // Show result
	}

	private: System::Void grayBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		System::Drawing::Imaging::BitmapData^ bmpData =
			bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		// Using OpenCV: Create Image with data pointer
		Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
		// Do OpenCV function
		cvtColor(image, image, COLOR_BGR2GRAY);
		cv::Mat grayImage(image.rows, image.cols, CV_8U);
		for (int y = 0; y < image.rows; y++) {
			for (int x = 0; x < image.cols; x++) {
				// Compute weighted sum for grayscale intensity
				uchar grayIntensity = static_cast<uchar>(
					0.299 * image.at<cv::Vec3b>(y, x)[2] +
					0.587 * image.at<cv::Vec3b>(y, x)[1] +
					0.114 * image.at<cv::Vec3b>(y, x)[0]);
				// Set the grayscale intensity in the output image
				grayImage.at<uchar>(y, x) = grayIntensity;
			}
		}
		// Unlock Bitmap Bits
		bmp->UnlockBits(bmpData);
		pictureBox->Image = bmp; // Show result
	}
	
	private: System::Void cameraBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		CameraForm^ cameraform = gcnew CameraForm();
		cameraform->ShowDialog();
	}
	private: System::Void saveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			bmp->Save(openFileDialog->FileName);
		}
	}
	private: System::Void saveAsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((bmp != nullptr) && (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)) {
			bmp->Save(saveFileDialog->FileName);
		}
	}

	//ColorDialog^ colorDialog = gcnew ColorDialog();
	Color selectedColor;
	//// Access the RGB values
	int redValue = 0;
	int greenValue = 0;
	int blueValue = 0;

	private: System::Void color_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		if (colorDialog->ShowDialog() == Windows::Forms::DialogResult::OK) { 
			Color^ new_color = colorDialog->Color;
			showColor->BackColor = colorDialog->Color;
			selectedColor = colorDialog->Color;
			redValue = colorDialog->Color.R;
			greenValue = colorDialog->Color.G;
			blueValue = colorDialog->Color.B;
			
		}
	}
	private: System::Void line_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			drawState = DrawState::DrawLine;
			Cursor = Cursors::Cross;
		}

	}
	private: System::Void freehand_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			drawState = DrawState::DrawFreehand;
			Cursor = Cursors::Cross;
		}
	}
	private: System::Void circle_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			drawState = DrawState::DrawCircle;
			Cursor = Cursors::Cross;
		}
	}
	private: System::Void ellipse_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			drawState = DrawState::DrawEllipse;
			Cursor = Cursors::Cross;
		}
	}
	private: System::Void triangle_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			drawState = DrawState::DrawTriangle;
			Cursor = Cursors::Cross;
		}

	}
	private: System::Void square_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			drawState = DrawState::DrawSquare;
			Cursor = Cursors::Cross;
		}
	}
	
	private: System::Void fill_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			drawState = DrawState::DrawFill;
			Cursor = Cursors::Cross;
		}
	}
	
	private: System::Void pictureBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (bmp != nullptr) {
			switch (drawState) {
			case DrawState::DrawLine:
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);
				if (drawState == DrawState::DrawLine)
					drawState = DrawState::DrawingLine;
			case DrawState::DrawFreehand:
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);
				if (drawState == DrawState::DrawFreehand)
					drawState = DrawState::DrawingFreehand;
			case DrawState::DrawCircle:
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);
				if (drawState == DrawState::DrawCircle)
					drawState = DrawState::DrawingCircle;
			case DrawState::DrawEllipse:
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);
				if (drawState == DrawState::DrawEllipse)
					drawState = DrawState::DrawingEllipse;

			case DrawState::DrawTriangle:
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);
				if (drawState == DrawState::DrawTriangle)
					drawState = DrawState::DrawingTriangle;
			case DrawState::DrawSquare:
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);
				if (drawState == DrawState::DrawSquare)
					drawState = DrawState::DrawingSquare;
			case DrawState::DrawFill:
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);
				if (drawState == DrawState::DrawFill)
					drawState = DrawState::DrawingFill;

			}
		}

	}

	

	
	int size_num = 1;
	   
	private: System::Void pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if ((drawState == DrawState::DrawingLine) || 
			(drawState == DrawState::DrawingFreehand) || 
			(drawState == DrawState::DrawingCircle) || 
			(drawState == DrawState::DrawingEllipse) || 
			(drawState == DrawState::DrawingTriangle) || 
			(drawState == DrawState::DrawingSquare) ) {
			if (tmpImage != nullptr) delete tmpImage;
			tmpImage = (Bitmap^)bmp->Clone();
			Rectangle rect = Rectangle(0, 0, tmpImage->Width, tmpImage->Height);
			System::Drawing::Imaging::BitmapData^ bmpData =
				tmpImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, tmpImage->PixelFormat);
			Mat image(tmpImage->Height, tmpImage->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);

			int dx = Math::Abs(startPoint->X - e->X);
			int dy = Math::Abs(startPoint->Y - e->Y);
			int mid = (startPoint->X+ Math::Abs(startPoint->X - e->X)/2);
			int r = redValue ;
			int g = greenValue;
			int b = blueValue;

			switch (drawState) {
			case DrawState::DrawingLine:
				line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, e->Y), CV_RGB(r,g,b),size_num );

				break;

			
			case DrawState::DrawingFreehand:
				
				break;
			
			case DrawState::DrawingTriangle:

				line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, startPoint->Y), CV_RGB(r, g, b), size_num);
				line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(mid, e->Y), CV_RGB(r, g, b), size_num);
				line(image, cv::Point(e->X, startPoint->Y), cv::Point(mid, e->Y), CV_RGB(r, g, b), size_num);
				break;

			case DrawState::DrawingSquare:
				line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(startPoint->X, e->Y), CV_RGB(r, g, b), size_num);
				line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, startPoint->Y), CV_RGB(r, g, b), size_num);
				line(image, cv::Point(startPoint->X, e->Y), cv::Point(e->X, e->Y), CV_RGB(r, g, b), size_num);
				line(image, cv::Point(e->X, startPoint->Y), cv::Point(e->X, e->Y), CV_RGB(r, g, b), size_num);
				break;


			
			case DrawState::DrawingCircle:
				ellipse(image, cv::Point(startPoint->X, startPoint->Y),
					cv::Size(dx, dx),
					Math::Atan2(dx, dx), 0, 360,
					CV_RGB(r, g, b), size_num);

				break;
			

			case DrawState::DrawingEllipse:
				ellipse(image, cv::Point(startPoint->X, startPoint->Y),
					cv::Size(dx, dy),
					Math::Atan2(dy, dx), 0, 360,
					CV_RGB(r, g, b), size_num);
				
				break;
			case DrawState::DrawFill:
				floodFill(image, image, cv::Point(startPoint->X, startPoint->Y), CV_RGB(r, g, b));
				break;

			}
			// Unlock Bitmap Bits
			tmpImage->UnlockBits(bmpData);
			pictureBox->Image = tmpImage; // Show result
		}

	}
	private: System::Void pictureBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if ((drawState == DrawState::DrawingLine) ||
			(drawState == DrawState::DrawingFreehand) ||
			(drawState == DrawState::DrawingCircle) ||
			(drawState == DrawState::DrawingEllipse) ||
			(drawState == DrawState::DrawingTriangle) ||
			(drawState == DrawState::DrawingSquare)) {
			delete startPoint;
			startPoint = nullptr;
			delete bmp;
			bmp = tmpImage;
			tmpImage = nullptr;
			drawState = DrawState::NotDrawing;
			Cursor = Cursors::Default;
		}
	}
	
	
	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (size_expand == false) {
			sizeFlow->Height += 15;
			if (sizeFlow->Height >= 300) {
				timer->Stop() ;
				size_expand = true;
			}
		}
		else {
			sizeFlow->Height -= 15;
			if (sizeFlow->Height <= 60) {
				timer->Stop();
				size_expand  = false;
			}
		}
	}
	private: System::Void size_1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (size_expand == true) {
			size_num = 1;
		}
	}
	private: System::Void size_3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (size_expand == true) {
			size_num = 3;
		}
	}
	private: System::Void size_5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (size_expand == true) {
			size_num = 5;
		}
	}
	private: System::Void size_8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (size_expand == true) {
			size_num = 8;
		}
	}

	private: System::Void timer_Tick1(System::Object^ sender, System::EventArgs^ e) {
		if (type_expand == false) {
			typeFlow->Height += 15;
			if (typeFlow->Height >= 150) {
				timer1->Stop();
				type_expand = true;
			}
		}
		else {
			typeFlow->Height -= 15;
			if (typeFlow->Height <= 60) {
				timer1->Stop();
				type_expand = false;
			}
		}
	}
	private: System::Void size_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		timer->Start();
	
	}	
	private: System::Void type_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
	}

		
	

	private: System::Void whiteCanvasBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		//Bitmap^ image = " " ;
		//// Convert image to 24 bits RGB
		//bmp = gcnew Bitmap(image->Size.Width, image->Size.Height, Imaging::PixelFormat::Format24bppRgb);
		//bmp->SetResolution(image->HorizontalResolution, image->VerticalResolution);
		//Graphics^ g = Graphics::FromImage(bmp);
		//g->DrawImage(image, 0, 0);
		//delete image;
		//pictureBox->Image = bmp;
	}
};
}
