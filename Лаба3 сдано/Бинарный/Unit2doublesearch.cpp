//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2doublesearch.h"
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
int arr[10];
int key;

void __fastcall TForm1::Button1Click(TObject *Sender)
{
 srand ( time(NULL) ); 

for (int i = 0; i < 10; i++) {
arr[i] = 1 + rand() % 50;
for (int i=0; i<10; i++){
for (int j=0; j<9; j++){
if (arr[j]>arr[j+1]){ 
int b = arr[j]; 
arr[j]=arr[j+1]; 
arr[j+1]=b; 
} 
} 
} 
} 

Memo1-> Clear(); 
for ( int i=0;i<10; i++)
Memo1->Text = Memo1->Text+IntToStr(arr[i]) + ' ';
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
key = StrToInt(Edit1->Text); 
bool flag = false; 
int l = 0;
int r = 9;
int mid; 

while ((l <= r) && (flag != true)) { 
mid = (l + r) / 2; 

if (arr[mid] == key) flag = true; 
if (arr[mid] > key) r = mid - 1; 
else l = mid + 1; 
} 

if (flag){ 
Label1->Caption = mid+1;
} 
else {
Label1->Caption="Ёлемент не найден";
}
}
//---------------------------------------------------------------------------
