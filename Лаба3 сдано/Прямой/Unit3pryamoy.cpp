//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3pryamoy.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
char first[1024]; 
char second[1024];
//---------------------------------------------------------------------------
int DirectSearch(char *string, char *substring) { 
int sl, ssl;
int k = -1;
sl = strlen(string); 
ssl = strlen(substring); 
for (int i = 0; i < sl - ssl + 1; i++) 
for (int j = 0; j < ssl; j++)
if (substring[j] != string[i + j]) 
break;
else if (j == ssl -1) {
k = i;
break; 
} 
return k;
}
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
   ListBox1->Clear();
   AnsiString ss(Edit1->Text);
   strncpy(second,ss.c_str(),1024);
   int index = DirectSearch(first,second);
   ListBox1->Items->Append(index);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
ListBox2->Clear();
AnsiString s(Edit2->Text);
strncpy(first,s.c_str(),1024);
ListBox2->Items->Append(first);
}
//---------------------------------------------------------------------------
