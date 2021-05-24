//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <math.h>
#include "Paint.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner){}

TPoint *A7;

 Dr::Dr()
  { R=StrToInt(Form1->Edit1->Text);
     a=StrToInt(Form1->Edit3->Text);
     b=StrToInt(Form1->Edit2->Text);
  }
  void Circ :: Draw()
  { Dr A;
	Form1->Image1->Canvas->Ellipse(70,100,70+A.R,100+A.R);  }

   void Tria::Draw2()
 {A7= new TPoint[4];
   float angle=0;
   int i, j; float x=300, y=180  ;
	 Dr A;
   Form1->Image1->Canvas->MoveTo(x+A.R*cos(angle*M_PI/180),y+A.R*sin(angle*M_PI/180));
 for(  i=0;i<=3; i++)
    {A7[i].x=x+A.R*cos(angle*M_PI/180);
    A7[i].y=y+A.R*sin(angle*M_PI/180);
    angle=angle+360/3; }
    for(  i=0;i<=3; i++)
	{ Form1->Image1->Canvas->LineTo(A7[i].x,A7[i].y);}
 }
 void Rec::Draw3()

 {
	Dr A;
    Form1->Image1->Canvas->Rectangle(400,200, 400+A.a, 200+A.b);
 }

  void Dr:: Area()
 {  Dr A; S=6*A.a;}

  void Dr:: Enter()
 {  Dr A;  V=5*A.b;}

   void Rec :: Perimetr()
 {  Dr A;
  void Perimetr();
  Form1->Edit8->Text=P;}

 void Rec :: Area()
{  Dr A;
	S=A.a*A.b;
	Form1->Edit9->Text=S;}

 void Circ:: Perimetr()
  { Dr A;
  P=2*3.14*A.R;
  Form1->Edit4->Text=P;}

 void Circ:: Area()
{  Dr A;
    S=3.14*A.R*A.R;
    Form1->Edit5->Text=S;}

 void Tria:: Perimetr()
 {  Dr A;
 P=5*sqrt(A.R/2*3*A.R/2*3+A.R/4*3*A.R/4*3) ;
  Form1->Edit6->Text=P;}

  void Tria:: Area()
{  Dr A;
    S=pow(3,0.5)/4*(A.R/2*3*A.R/2*3+A.R/4*3*A.R/4*3);
    Form1->Edit7->Text=S;}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
   C->Draw();
   F->Draw2();
   G->Draw3();
}

void __fastcall TForm1::Button2Click(TObject *Sender)
{
Dr *p; Dr pa_obj;
p=&pa_obj;
 Circ pa1_obj;
 p=&pa1_obj;
p->Perimetr();
p->Area();
   Tria pa2_obj;
   p=&pa2_obj;
 p-> Perimetr();
 p->Area();
	  Rec pa3_obj;
	   p=&pa3_obj;
	p-> Perimetr();
	p->Area();
}

void __fastcall TForm1::Button3Click(TObject *Sender)
{
Form1->Image1->Picture->Bitmap=NULL;
}
//---------------------------------------------------------------------------
