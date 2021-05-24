//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unitvstavkami2.h"
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
   int i,j;
   int buff=0;
   srand(time(0));
   for (int i=0; i<10; i++)
   a[i]=1+rand()%45;
     Memo1->Clear();
     for (int i=0; i<10; i++)
     Memo1->Text=Memo1->Text+IntToStr(a[i]) + ' ';
   for (i=1;i<10;i++){
   buff=a[i];
   for (j=i-1;j>=0&&a[j]>buff;j--)
   a[j+1]=a[j];
   a[j+1]=buff;
   }
       Memo2->Clear();
      for(int i=0;i<10;i++)
       Memo2->Text=Memo2->Text+IntToStr(a[i])+ ' ';
}
//---------------------------------------------------------------------------

