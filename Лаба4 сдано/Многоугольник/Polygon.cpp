//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Polygon.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner){}
int n;
  float size;
  float S;
  float P;
  float R;
  double L, H;
  TPoint *A;

void Pol::Draw(int n, float R)
{
   A = new TPoint[n+1];

   float x = (Form1->Image1->Width)/2;

   float y = (Form1->Image1->Height)/2;
   float angle = 0;
   int i = 0;
   Form1->Image1->Canvas->MoveTo(x+R*cos(angle*M_PI/180),y+R*sin(angle*M_PI/180));

   for (i=0;i<=n;i++)
   { A[i].x=x+R*cos(angle*M_PI/180);
	A[i].y=y+R*sin(angle*M_PI/180);
	 angle=angle+360/n;
   }
   for (i=0;i<=n;i++)
   {
	 Form1->Image1->Canvas->LineTo(A[i].x,A[i].y);
   }
}


void Pol::Rec_Perimetr(int n, float R, float P)
{
	P = n * (2*R * sin(M_PI/n));
    Form1->Edit4->Text = P;
}


void Pol::Rec_Area(int n, float R, float S)
{
    S = (n/2) * pow(R,2) * sin ((2*M_PI)/n);
	Form1->Edit3->Text=S;
}


void Tria::Median()
{
	Form1->Edit5->Text = "";
	Form1->Edit5->Text=Form1->Edit5->Text + (Form1->Image1->Width)/2 + ";" + (Form1->Image1->Height)/2;
}


void Tria::Rad_Centre(int n, float R, float L)
{
	L = 3*((2*R * sin(M_PI/n)) * pow (3, 0.5))/2;
	Form1->Edit6->Text=L;
}


void Tria::Height(int n,float R, float size, float H)
{
	size = 2*R * sin(M_PI/n);
    H = (size * pow (3, 0.5))/2;
    Form1->Edit7->Text=H;
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
Form1->Image1->Picture->Bitmap=NULL;
n = StrToInt(Form1->Edit1->Text);
 R = StrToFloat(Form1->Edit2->Text);
   C1->Draw(n,R);
   C1->Rec_Perimetr(n,R,P);
   C1->Rec_Area(n,R,S);
   if (n==3)
   {
	   D1->Draw(n,R);
	   D1->Median();
	   D1->Rad_Centre(n,R,L);
	   D1->Height(n,R,size,H);
   }
   else
   {
	 Form1->Edit5->Text = "Это не треугольник!";
	  Form1->Edit6->Text = "Это не треугольник!";
	   Form1->Edit7->Text = "Это не треугольник!";
   }
}
//---------------------------------------------------------------------------
