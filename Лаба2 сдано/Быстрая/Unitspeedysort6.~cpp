//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unitspeedysort6.h"
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

srand(time(0));
for (int i = 0; i < 10; i++)
a[i]=1+rand()%45;
    Memo1->Clear();
    for (int i = 0; i < 10; i++)
      Memo1->Text = Memo1->Text + IntToStr(a[i]) + ' ';
      int step = 10 / 2;
while (step > 0)
{
for (int i = 0; i < (10 - step); i++)
{
int j = i;
while (j >= 0 && a[j] > a[j + step])
{
int temp = a[j];
a[j] = a[j + step];
a[j + step] = temp;
j--;
}
}
step = step / 2;
 }
        Memo2->Clear();
    for (int i = 0; i < 10; i++)
      Memo2->Text = Memo2->Text + IntToStr(a[i]) + ' ';

}
//---------------------------------------------------------------------------
 