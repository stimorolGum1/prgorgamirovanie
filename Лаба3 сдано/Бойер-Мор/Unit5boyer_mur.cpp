//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5boyer_mur.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
char first[1024]; 
char second[1024];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
int searchBM(const char* str, const char* word) 
{ 
int M = strlen(word); 
int d[256]; 
for (int i = 0; i<256; i++)
d[i] = M; 
M--; 
for (int i = 0; i<M; i++) 
d[(unsigned char)word[i]] = M - i; 
for (int i = M;; i += d[(unsigned char)str[i]]) 
{ 
for (int j = M, k = i;; k--, j--) 
if (j<0) return i - M; 
else if (str[k] != word[j])break; 
if (!str[i])break; 
} 
return -1; 
}

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
int index = searchBM(first,second); 
ListBox2->Items->Append(index+1);
}
//---------------------------------------------------------------------------
