//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Fraction.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner){}
int a,b; int nod1;
int chis2; int chis1;
int znam1,znam2, znam3;
long nod = 1L;
int nok;
int *array;
int c, d1, d2;

Fraction::Fraction()
 {
  Fraction ob2(znam3);
  Fraction ob3(nod1, znam1, znam2);
  nok=ob2.znam1*ob2.znam2/ob3.nod;
 }

Fraction::Fraction(int znam3)
 {
  chis1=StrToInt(Form1->Edit1->Text);
  znam1=StrToInt(Form1->Edit2->Text);
  chis2=StrToInt(Form1->Edit3->Text);
  znam2=StrToInt(Form1->Edit4->Text);
 }

Fraction::Fraction(int nod1, int znam1,int znam2)
 {
   Fraction ob2(znam3);
    for (long i = ob2.znam1; i > 0; i--)
     {
        if (ob2.znam1 % i == 0 && ob2.znam2 % i == 0)
     {
     nod = i;
     break;
 }} }

int a1()
 {
  Fraction ob2(znam3);
  d1=ob2.znam2;
  return d1;
 }

int b1()
{
  Fraction ob4;
  d2=ob4.nok;
  return d2;
}

void Fraction::Add( int chis1, int chis2, int znam1,int znam2)
  { Fraction ob2(znam3);
    a=ob2.chis1*ob2.znam2+ob2.chis2*ob2.znam1;
    b=ob2.znam1*ob2.znam2;
  }

void __fastcall TForm1::Button1Click(TObject *Sender)
{
   Edit5->Text="";
   F1->Add(chis1,chis2,znam1,znam2);
   Edit5->Text=Edit5->Text+a;
   Edit5->Text=Edit5->Text+"/";
   Edit5->Text=Edit5->Text+b;
}

void Fraction::Minus( int chis1, int chis2, int znam1,int znam2)
{
   Fraction ob4; Fraction ob2(znam3);
   a1(); b1();
   int s=b1()/a1();
   a=ob2.chis1*s-(ob2.chis2*ob4.nok/ob2.znam1);
   b=ob4.nok;
 }

void __fastcall TForm1::Button2Click(TObject *Sender)
{
   Edit5->Text="";
   F2->Minus(chis1,chis2,znam1,znam2);
   Edit5->Text=Edit5->Text+a;
   Edit5->Text=Edit5->Text+"/";
   Edit5->Text=Edit5->Text+b;

}

void Fraction::Multiply( int chis1, int chis2, int znam1,int znam2)
{
Fraction ob2(znam3);
a=ob2.chis1*ob2.chis2;
b=ob2.znam2*ob2.znam1;
}

void __fastcall TForm1::Button3Click(TObject *Sender)
{
   Edit5->Text="";
   F3->Multiply(chis1,chis2,znam1,znam2);
   Edit5->Text=Edit5->Text+a;
   Edit5->Text=Edit5->Text+"/";
   Edit5->Text=Edit5->Text+b;

}

void Fraction::Divide( int chis1, int chis2, int znam1,int znam2)
{
  Fraction ob2(znam3);
  a=ob2.chis1*ob2.znam2;
  b=ob2.chis2*ob2.znam1;
}
void __fastcall TForm1::Button4Click(TObject *Sender)
{
   Edit5->Text="";
   F4->Divide(chis1,chis2,znam1,znam2);
   Edit5->Text=Edit5->Text+a;
   Edit5->Text=Edit5->Text+"/";
   Edit5->Text=Edit5->Text+b;
}

void Fraction::Func1()
{
	int *array;
	int size = 6;
	array = new int [size];
	for (int i = 0; i < size; i++)
	{
	  array[i] = rand()%20;
	  Form1->Edit6->Text=Form1->Edit6->Text+array[i];
	  Form1->Edit6->Text=Form1->Edit6->Text+" ";
	}
	for (int i=0;i<size;i=i+2)

		{
                  array[i]=array[i]+array[i+1];
		}
        for (int i = 0; i < size; i++)
	{

	  Form1->Edit7->Text=Form1->Edit7->Text+array[i];
	  Form1->Edit7->Text=Form1->Edit7->Text+" ";
	}

}

void __fastcall TForm1::Button5Click(TObject *Sender)
{
 F5->Func1();
}
//---------------------------------------------------------------------------
