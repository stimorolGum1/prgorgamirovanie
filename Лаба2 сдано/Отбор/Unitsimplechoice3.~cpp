//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unitsimplechoice3.h"
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
   int minpo,temp;

   srand(time(0));
   for (int i=0;i<10; i++)
   a[i]=1+rand()%50;
       Memo1->Clear();
       for (int i=0;i<10;i++)
       Memo1->Text=Memo1->Text+IntToStr(a[i]) + ' ';
       for (int i=0; i<10; i++){
       minpo=i;
       for(int j=i+1; j<10;j++)
       if (a[minpo]>a[j])
       minpo=j;
       temp=a[minpo];
       a[minpo]=a[i];
       a[i]=temp;
       }
            Memo2->Clear();
            for (int i=0;i<10;i++)
            Memo2->Text=Memo2->Text+IntToStr(a[i]) + ' ';

}
//---------------------------------------------------------------------------
 