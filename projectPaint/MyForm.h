#pragma once
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include "CameraForm.h"

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
	
	enum class DrawState {
		NotDrawing,
		DrawLine, DrawingLine,
		DrawFreehand,DrawingFreehand,
		DrawEllipse, DrawingEllipse,
		DrawCircle, DrawingCircle,
		DrawTriangle, DrawingTriangle,
		DrawSquare,DrawingSquare
	} drawState;

	enum class SizeState {
		Size1, Sizing1,
		Size3, Sizing3,
		Size5, Sizing5,
		Size8, Sizing8
	}sizeState;

	System::Drawing::Point^ startPoint;
	private: System::Windows::Forms::Button^ type_btn;
	private: System::Windows::Forms::Button^ eraser_btn;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ whiteCanvasBtn;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;


	private: System::Windows::Forms::ComboBox^ comboBox1;



	public:

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
	private: System::Windows::Forms::Button^ size_btn;


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







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxPanel = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->eraser_btn = (gcnew System::Windows::Forms::Button());
			this->type_btn = (gcnew System::Windows::Forms::Button());
			this->triangle_btn = (gcnew System::Windows::Forms::Button());
			this->circle_btn = (gcnew System::Windows::Forms::Button());
			this->freehand_btn = (gcnew System::Windows::Forms::Button());
			this->line_btn = (gcnew System::Windows::Forms::Button());
			this->CameraBtn = (gcnew System::Windows::Forms::Button());
			this->square_btn = (gcnew System::Windows::Forms::Button());
			this->ellipse_btn = (gcnew System::Windows::Forms::Button());
			this->size_btn = (gcnew System::Windows::Forms::Button());
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
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->panel1->SuspendLayout();
			this->pictureBoxPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
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
			// pictureBox
			// 
			this->pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
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
			this->pictureBoxPanel->Controls->Add(this->comboBox1);
			this->pictureBoxPanel->Controls->Add(this->numericUpDown1);
			this->pictureBoxPanel->Controls->Add(this->eraser_btn);
			this->pictureBoxPanel->Controls->Add(this->type_btn);
			this->pictureBoxPanel->Controls->Add(this->triangle_btn);
			this->pictureBoxPanel->Controls->Add(this->circle_btn);
			this->pictureBoxPanel->Controls->Add(this->freehand_btn);
			this->pictureBoxPanel->Controls->Add(this->line_btn);
			this->pictureBoxPanel->Controls->Add(this->CameraBtn);
			this->pictureBoxPanel->Controls->Add(this->square_btn);
			this->pictureBoxPanel->Controls->Add(this->ellipse_btn);
			this->pictureBoxPanel->Controls->Add(this->size_btn);
			this->pictureBoxPanel->Controls->Add(this->fill_btn);
			this->pictureBoxPanel->Controls->Add(this->color_btn);
			this->pictureBoxPanel->Controls->Add(this->showColor);
			this->pictureBoxPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBoxPanel->Location = System::Drawing::Point(0, 0);
			this->pictureBoxPanel->Name = L"pictureBoxPanel";
			this->pictureBoxPanel->Size = System::Drawing::Size(934, 100);
			this->pictureBoxPanel->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(344, 78);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(60, 21);
			this->comboBox1->TabIndex = 10;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(265, 78);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(60, 20);
			this->numericUpDown1->TabIndex = 10;
			// 
			// eraser_btn
			// 
			this->eraser_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->eraser_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eraser_btn->Location = System::Drawing::Point(189, 19);
			this->eraser_btn->Name = L"eraser_btn";
			this->eraser_btn->Size = System::Drawing::Size(60, 60);
			this->eraser_btn->TabIndex = 16;
			this->eraser_btn->Text = L"Eraser";
			this->eraser_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->eraser_btn->UseVisualStyleBackColor = false;
			// 
			// type_btn
			// 
			this->type_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->type_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->type_btn->Location = System::Drawing::Point(344, 19);
			this->type_btn->Name = L"type_btn";
			this->type_btn->Size = System::Drawing::Size(60, 60);
			this->type_btn->TabIndex = 15;
			this->type_btn->Text = L"Type";
			this->type_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->type_btn->UseVisualStyleBackColor = false;
			// 
			// triangle_btn
			// 
			this->triangle_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->triangle_btn->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->ellipse_btn->Location = System::Drawing::Point(620, 19);
			this->ellipse_btn->Name = L"ellipse_btn";
			this->ellipse_btn->Size = System::Drawing::Size(60, 60);
			this->ellipse_btn->TabIndex = 7;
			this->ellipse_btn->Text = L"Ellipse";
			this->ellipse_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ellipse_btn->UseVisualStyleBackColor = false;
			this->ellipse_btn->Click += gcnew System::EventHandler(this, &MyForm::ellipse_btn_Click);
			// 
			// size_btn
			// 
			this->size_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->size_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->size_btn->Location = System::Drawing::Point(265, 19);
			this->size_btn->Name = L"size_btn";
			this->size_btn->Size = System::Drawing::Size(60, 60);
			this->size_btn->TabIndex = 6;
			this->size_btn->Text = L"Size";
			this->size_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->size_btn->UseVisualStyleBackColor = false;
			this->size_btn->Visible = false;
			// 
			// fill_btn
			// 
			this->fill_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->fill_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fill_btn->Location = System::Drawing::Point(123, 19);
			this->fill_btn->Name = L"fill_btn";
			this->fill_btn->Size = System::Drawing::Size(60, 60);
			this->fill_btn->TabIndex = 4;
			this->fill_btn->Text = L"Fill";
			this->fill_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->fill_btn->UseVisualStyleBackColor = false;
			// 
			// color_btn
			// 
			this->color_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->color_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->color_btn->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->color_btn->FlatAppearance->BorderSize = 2;
			this->color_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->color_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
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
			this->showColor->Location = System::Drawing::Point(3, 24);
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
			this->openBtn->Size = System::Drawing::Size(180, 22);
			this->openBtn->Text = L"&Open";
			this->openBtn->Click += gcnew System::EventHandler(this, &MyForm::openBtn_Click);
			// 
			// saveBtn
			// 
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(180, 22);
			this->saveBtn->Text = L"&Save";
			this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::saveBtn_Click);
			// 
			// saveAsBtn
			// 
			this->saveAsBtn->Name = L"saveAsBtn";
			this->saveAsBtn->Size = System::Drawing::Size(180, 22);
			this->saveAsBtn->Text = L"&Save As";
			this->saveAsBtn->Click += gcnew System::EventHandler(this, &MyForm::saveAsBtn_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(177, 6);
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
			this->toolStripSeparator1->Size = System::Drawing::Size(177, 6);
			// 
			// exitBtn
			// 
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(180, 22);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->panel1->ResumeLayout(false);
			this->pictureBoxPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
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

	private: System::Void color_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colorDialog->ShowDialog() == Windows::Forms::DialogResult::OK) { 
			Color^ new_color = colorDialog->Color;
			showColor->BackColor = colorDialog->Color;
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
		}
	}

}
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
			

			switch (drawState) {
			case DrawState::DrawingLine:
				line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, e->Y), CV_RGB(255, 0, 0));
				break;

			
			case DrawState::DrawingFreehand:
				Pen p = new Pen(colorDialog->Color);
				break;
			
			case DrawState::DrawingTriangle:

				line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, startPoint->Y), CV_RGB(255, 0, 0));
				line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(mid, e->Y), CV_RGB(0, 255, 0));
				line(image, cv::Point(e->X, startPoint->Y), cv::Point(mid, e->Y), CV_RGB(0, 0, 255));
				break;

			case DrawState::DrawingSquare:
				line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(startPoint->X, e->Y), CV_RGB(0, 255, 0));
				line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, startPoint->Y), CV_RGB(0, 255, 0));
				line(image, cv::Point(startPoint->X, e->Y), cv::Point(e->X, e->Y), CV_RGB(0, 255, 0));
				line(image, cv::Point(e->X, startPoint->Y), cv::Point(e->X, e->Y), CV_RGB(0, 255, 0));
				break;


			
			case DrawState::DrawingCircle:
				ellipse(image, cv::Point(startPoint->X, startPoint->Y),
					cv::Size(dx, dx),
					Math::Atan2(dx, dx), 0, 360,
					CV_RGB(0, 255, 0));

				break;
			

			case DrawState::DrawingEllipse:
				ellipse(image, cv::Point(startPoint->X, startPoint->Y),
					cv::Size(dx, dy),
					Math::Atan2(dy, dx), 0, 360,
					CV_RGB(0, 255, 0));
				
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
	
	private: System::Void whiteCanvasBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Width ^ 930;
		Height ^ 650;
		Bitmap^ bpm = gcnew Bitmap(pictureBox->Width, pictureBox->Height);
		Graphics^ g = Graphics->FromImage(bmp);*/
	}
};
}
