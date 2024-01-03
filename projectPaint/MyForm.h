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
	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::ToolStripMenuItem^ rgbBtn;
	private: System::Windows::Forms::ToolStripMenuItem^ grayBtn;



	private: System::Windows::Forms::Panel^ pictureBoxPanel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ size_btn;

	private: System::Windows::Forms::Button^ pencil_btn;
	private: System::Windows::Forms::Button^ fill_btn;


	private: System::Windows::Forms::Button^ color_btn;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ColorDialog^ colorDialog;





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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxPanel = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->size_btn = (gcnew System::Windows::Forms::Button());
			this->pencil_btn = (gcnew System::Windows::Forms::Button());
			this->fill_btn = (gcnew System::Windows::Forms::Button());
			this->color_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->panel1->SuspendLayout();
			this->pictureBoxPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Controls->Add(this->panel1);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(959, 472);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(959, 496);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->menuStrip);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBoxPanel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(959, 100);
			this->panel1->TabIndex = 3;
			// 
			// pictureBoxPanel
			// 
			this->pictureBoxPanel->AutoScroll = true;
			this->pictureBoxPanel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBoxPanel->Controls->Add(this->button4);
			this->pictureBoxPanel->Controls->Add(this->button3);
			this->pictureBoxPanel->Controls->Add(this->button2);
			this->pictureBoxPanel->Controls->Add(this->size_btn);
			this->pictureBoxPanel->Controls->Add(this->pencil_btn);
			this->pictureBoxPanel->Controls->Add(this->fill_btn);
			this->pictureBoxPanel->Controls->Add(this->color_btn);
			this->pictureBoxPanel->Controls->Add(this->button1);
			this->pictureBoxPanel->Controls->Add(this->pictureBox);
			this->pictureBoxPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBoxPanel->Location = System::Drawing::Point(0, 0);
			this->pictureBoxPanel->Name = L"pictureBoxPanel";
			this->pictureBoxPanel->Size = System::Drawing::Size(959, 100);
			this->pictureBoxPanel->TabIndex = 2;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(698, 19);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Line";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(632, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Square";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(566, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Ellipse";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// size_btn
			// 
			this->size_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->size_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->size_btn->Location = System::Drawing::Point(500, 19);
			this->size_btn->Name = L"size_btn";
			this->size_btn->Size = System::Drawing::Size(60, 60);
			this->size_btn->TabIndex = 6;
			this->size_btn->Text = L"Size";
			this->size_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->size_btn->UseVisualStyleBackColor = false;
			// 
			// pencil_btn
			// 
			this->pencil_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->pencil_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pencil_btn->Location = System::Drawing::Point(368, 19);
			this->pencil_btn->Name = L"pencil_btn";
			this->pencil_btn->Size = System::Drawing::Size(60, 60);
			this->pencil_btn->TabIndex = 5;
			this->pencil_btn->Text = L"Pencil";
			this->pencil_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->pencil_btn->UseVisualStyleBackColor = false;
			// 
			// fill_btn
			// 
			this->fill_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->fill_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fill_btn->Location = System::Drawing::Point(434, 19);
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
			this->color_btn->Location = System::Drawing::Point(302, 19);
			this->color_btn->Name = L"color_btn";
			this->color_btn->Size = System::Drawing::Size(60, 60);
			this->color_btn->TabIndex = 3;
			this->color_btn->Text = L"Color";
			this->color_btn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->color_btn->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(221, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(0, 0);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(0, 0);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox->TabIndex = 1;
			this->pictureBox->TabStop = false;
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
			this->menuStrip->Size = System::Drawing::Size(959, 24);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->openBtn,
					this->saveBtn, this->saveAsBtn, this->toolStripSeparator1, this->exitBtn
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// openBtn
			// 
			this->openBtn->Name = L"openBtn";
			this->openBtn->Size = System::Drawing::Size(114, 22);
			this->openBtn->Text = L"&Open";
			this->openBtn->Click += gcnew System::EventHandler(this, &MyForm::openBtn_Click);
			// 
			// saveBtn
			// 
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(114, 22);
			this->saveBtn->Text = L"&Save";
			this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::saveBtn_Click);
			// 
			// saveAsBtn
			// 
			this->saveAsBtn->Name = L"saveAsBtn";
			this->saveAsBtn->Size = System::Drawing::Size(114, 22);
			this->saveAsBtn->Text = L"&Save As";
			this->saveAsBtn->Click += gcnew System::EventHandler(this, &MyForm::saveAsBtn_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(111, 6);
			// 
			// exitBtn
			// 
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(114, 22);
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
			this->openFileDialog->FileName = L"openFileDialog1";
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
			this->ClientSize = System::Drawing::Size(959, 496);
			this->Controls->Add(this->toolStripContainer1);
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->pictureBoxPanel->ResumeLayout(false);
			this->pictureBoxPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->colorDialog->ShowDialog();
		this->colorDialog->Color = Color::Green;
	}
};
}
