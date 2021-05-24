//-------------------------------------------------------------------------Ч 

#include <vcl.h> 
#pragma hdrstop 
#include<iostream> 
#include "Unit1linesearch.h"
//-------------------------------------------------------------------------Ч 
#pragma package(smart_init) 
#pragma resource "*.dfm" 
TForm1*Form1;


//-------------------------------------------------------------------------Ч 
__fastcall TForm1::TForm1(TComponent* Owner)
: TForm(Owner) 
{ 
} 
//-------------------------------------------------------------------------Ч 

int ans[10];
int h = 0;
int arr[10];
int key;
void __fastcall TForm1::Button1Click(TObject *Sender)
{ 
setlocale(LC_ALL,"Russian");
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

Memo1-> Clear(); 
for ( int i=0;i<10; i++)
Memo1->Text = Memo1->Text+IntToStr(arr[i]) + ' '; 
if (i == 9)
{ break;
} 
} 

} 
//-------------------------------------------------------------------------Ч 
void __fastcall TForm1::Button2Click(TObject *Sender) 
{ 
key = StrToInt(Edit1->Text);
for (int i = 0; i < 10; i++) {
if (arr[i] == key) { 
ans[h++] = i; 
}
}
if (h != 0) {
for (int i = 0; i < h; i++) {
Label1->Caption =ans[i]+1;
} 
} 
else{
 Label1->Caption="Ёлемент не найден";
} 
}
