//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unitshella4.h"
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
   for (int i=0;i<10; i++)
   a[i]=1+rand()%99;
     Memo1->Clear();
     for (int i=0; i<10; i++)
     Memo1->Text=Memo1->Text+IntToStr(a[i]) + ' ';
   int i,j,step;
   int tmp;

   for(step=5/2;step>0;step/=2)
   for(i=step; i<10;i++)
   { tmp=a[i];
   for (j=i;j>=step;j-=step)
   { if(tmp<a[j-step])
   a[j]=a[j-step];
   else
   break;
   }
   a[j]=tmp;
   }
     Memo2->Clear();
       for (int i=0;i<10;i++)
       Memo2->Text=Memo2->Text+IntToStr(a[i]) + ' ';
}
//---------------------------------------------------------------------------

