//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream>

#include "Unitbubblesort1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
   int a[10];
int i;
srand(time(0));
for (int i = 0; i < 10; i++)
a[i]=1+rand()%38;
    Memo1->Clear();
    for (int i = 0; i < 10; i++)
      Memo1->Text = Memo1->Text + IntToStr(a[i]) + ' ';
      for (int i=0; i<10; i++){
      for (int j=0; j<9; j++){
      if (a[j]>a[j+1]){
      int b = a[j];
      a[j]=a[j+1];
      a[j+1]=b;
      }
      }
      }
       Memo2->Clear();
    for (int i = 0; i < 10; i++)
      Memo2->Text = Memo2->Text + IntToStr(a[i]) + ' ';


}
//---------------------------------------------------------------------------
