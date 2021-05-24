//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4kmp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
char first[1024]; 
char second[1024];
//---------------------------------------------------------------------------
 int searchKMP(char *string, char *substring) 
{ 
int sl, ssl; 
sl = strlen(string); 
ssl = strlen(substring);
int i, j = 0, k = -1; 
int *d; 
d = new int[1000]; 
d[0] = -1; 
while (j < ssl - 1) {
while (k >= 0 && substring[j] != substring[k]) 
k = d[k]; 
j++; 
k++; 
if (substring[j] == substring[k]) 
d[j] = d[k]; 
else 
d[j] = k; 
} 
i = 0; 
j = 0; 
while (j < ssl && i < sl) { 
while (j >= 0 && string[i] != substring[j]) 
j = d[j]; 
i++; 
j++; 
} 
delete[] d; 
int res = j == ssl ? i - ssl : -1 ; 

return res; 
}
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
 AnsiString s(Edit1->Text); 
strncpy(first,s.c_str(),1024); 
ListBox1->Items->Append(first);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
ListBox2->Clear();
AnsiString ss(Edit2->Text);
strncpy(second,ss.c_str(),1024);
int index = searchKMP(first,second);
ListBox2->Items->Append(index+1);
}
//---------------------------------------------------------------------------
