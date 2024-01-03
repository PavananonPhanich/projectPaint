#pragma once
#include <opencv2/videoio.hpp>

namespace projectPaint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;


	/// <summary>
	/// Summary for CameraForm
	/// </summary>
	public ref class CameraForm : public System::Windows::Forms::Form
	{
	public:
		CameraForm(void)
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
		~CameraForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::PictureBox^ pictureBox;

	private: System::Windows::Forms::Label^ captureFPSLabel;

	private: System::Windows::Forms::Label^ captureWHLabel;

	private: System::Windows::Forms::Label^ labelFPS;
	private: System::Windows::Forms::Label^ labelSize;
	private: System::Windows::Forms::Button^ startBtn;


	protected:

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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->captureFPSLabel = (gcnew System::Windows::Forms::Label());
			this->captureWHLabel = (gcnew System::Windows::Forms::Label());
			this->labelFPS = (gcnew System::Windows::Forms::Label());
			this->labelSize = (gcnew System::Windows::Forms::Label());
			this->startBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->captureFPSLabel);
			this->splitContainer1->Panel2->Controls->Add(this->captureWHLabel);
			this->splitContainer1->Panel2->Controls->Add(this->labelFPS);
			this->splitContainer1->Panel2->Controls->Add(this->labelSize);
			this->splitContainer1->Panel2->Controls->Add(this->startBtn);
			this->splitContainer1->Size = System::Drawing::Size(625, 489);
			this->splitContainer1->SplitterDistance = 207;
			this->splitContainer1->TabIndex = 0;
			// 
			// pictureBox
			// 
			this->pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox->Location = System::Drawing::Point(0, 0);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(207, 489);
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			// 
			// captureFPSLabel
			// 
			this->captureFPSLabel->AutoSize = true;
			this->captureFPSLabel->Location = System::Drawing::Point(117, 79);
			this->captureFPSLabel->Name = L"captureFPSLabel";
			this->captureFPSLabel->Size = System::Drawing::Size(35, 13);
			this->captureFPSLabel->TabIndex = 4;
			this->captureFPSLabel->Text = L"label2";
			// 
			// captureWHLabel
			// 
			this->captureWHLabel->AutoSize = true;
			this->captureWHLabel->Location = System::Drawing::Point(158, 52);
			this->captureWHLabel->Name = L"captureWHLabel";
			this->captureWHLabel->Size = System::Drawing::Size(35, 13);
			this->captureWHLabel->TabIndex = 3;
			this->captureWHLabel->Text = L"label1";
			// 
			// labelFPS
			// 
			this->labelFPS->AutoSize = true;
			this->labelFPS->Location = System::Drawing::Point(86, 79);
			this->labelFPS->Name = L"labelFPS";
			this->labelFPS->Size = System::Drawing::Size(33, 13);
			this->labelFPS->TabIndex = 2;
			this->labelFPS->Text = L"FPS :";
			// 
			// labelSize
			// 
			this->labelSize->AutoSize = true;
			this->labelSize->Location = System::Drawing::Point(86, 52);
			this->labelSize->Name = L"labelSize";
			this->labelSize->Size = System::Drawing::Size(66, 13);
			this->labelSize->TabIndex = 1;
			this->labelSize->Text = L"Size W x H :";
			// 
			// startBtn
			// 
			this->startBtn->Location = System::Drawing::Point(132, 367);
			this->startBtn->Name = L"startBtn";
			this->startBtn->Size = System::Drawing::Size(136, 85);
			this->startBtn->TabIndex = 0;
			this->startBtn->Text = L"Start Button";
			this->startBtn->UseVisualStyleBackColor = true;
			this->startBtn->Click += gcnew System::EventHandler(this, &CameraForm::startBtn_Click);
			// 
			// CameraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(625, 489);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"CameraForm";
			this->Text = L"CameraForm";
			this->Load += gcnew System::EventHandler(this, &CameraForm::CameraForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	Bitmap^ bmp;
	bool isStart = false;

	private: System::Void CameraForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void startBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isStart) {
			isStart = false;
			startBtn->Text = "Start";
			return;
		}
		VideoCapture capture(0);// 0, cv::CAP_MSMF);
		while (!capture.isOpened());
		int capWidth = (int)capture.get(CAP_PROP_FRAME_WIDTH);
		int capHeight = (int)capture.get(CAP_PROP_FRAME_HEIGHT);
		int capFPS = (int)capture.get(CAP_PROP_FPS);
		captureWHLabel->Text = System::String::Format("{0:D}x{1:D}", capWidth, capHeight);
		captureFPSLabel->Text = System::String::Format("{0:D}", capFPS);
		isStart = true;
		bmp = gcnew Bitmap(capWidth, capHeight, Imaging::PixelFormat::Format24bppRgb);
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		startBtn->Text = "Stop";
		while (isStart) {
			Imaging::BitmapData^ bmpData = bmp->LockBits(rect, Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
			// Using OpenCV: Create Image with data pointer
			Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
			capture.read(image);
			// Unlock Bitmap Bits
			bmp->UnlockBits(bmpData);
			pictureBox->Image = bmp;
			Application::DoEvents();
		}

	}
};
}
