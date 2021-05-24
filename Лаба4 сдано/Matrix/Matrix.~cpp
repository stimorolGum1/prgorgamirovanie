//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Matrix.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner){}
int size1,size2;
int i,j;
int mat1[100][100], mat2[100][100];

void Matrix::Constructor(int i, int j)
{
  Matrix A;
  Matrix B;
  B=A;
   for (i = 0;i<A.size;i++)
    {for ( j = 0;j<A.size;j++)
     {Form1->StringGrid1->Cells[i][j]= rand()%10;}}
      for (i = 0;i<A.size;i++)
       {for ( j = 0;j<A.size;j++)
        {Form1->StringGrid2->Cells[i][j]= rand()%10;}}
}
 Matrix::Matrix(const Matrix &b)
 { {for (i = 0;i<b.size;i++)
    {for ( j = 0;j<b.size;j++)
     {mat1[i][j]=StrToInt(Form1->StringGrid1->Cells[i][j]);
      mat2[i][j]=StrToInt(Form1->StringGrid2->Cells[i][j]); } }} }

void Matrix:: Add(int i,int j)
 { Matrix A; Matrix B(A);
   int nas[10][10];
   for (i = 0;i<A.size;i++)
   for ( j = 0;j<A.size;j++)
    {nas[i][j]= B.mat1[i][j]+B.mat2[i][j];}
   for (i = 0;i<A.size;i++)
   for ( j = 0;j<A.size;j++)
    {Form1->StringGrid3->Cells[i][j]=nas[i][j];}
}

void Matrix::Minus(int i, int j)
{
   Matrix A; Matrix B(A);
   int nas[10][10];
   for (i = 0;i<A.size;i++)
   for ( j = 0;j<A.size;j++)
    {nas[i][j]= B.mat1[i][j]-B.mat2[i][j];}
   for (i = 0;i<A.size;i++)
   for ( j = 0;j<A.size;j++)
    {Form1->StringGrid3->Cells[i][j]=nas[i][j];}
}

void Matrix::Multiply(int i,int j)
{
   Matrix A; Matrix B(A);
   int nas[10][10];
   for (i = 0;i<A.size;i++)
   for ( j = 0;j<A.size;j++)
     {nas[i][j]= B.mat1[i][j]*B.mat2[i][j];}
   for (i = 0;i<A.size;i++)
   for ( j = 0;j<A.size;j++)
    {Form1->StringGrid3->Cells[i][j]=nas[i][j];}
}

void Matrix::Square(int i, int j)
{
   Matrix A; Matrix B(A);
   int nas[10][10];
   for (i = 0;i<A.size;i++)
   for ( j = 0;j<A.size;j++)
    {nas[i][j]= B.mat1[i][j]*B.mat1[i][j];}
   for (i = 0;i<A.size;i++)
   for ( j = 0;j<A.size;j++)
    {Form1->StringGrid3->Cells[i][j]=nas[i][j];}
}
void Matrix::Norma(int i, int j)
{
   Matrix A; Matrix B(A);
   int norm1 = 0, norm2 =0 ;
   for (i = 0; i < A.size; i++)
     {int sum1 = 0;
      for (j = 0; j < A.size; j++)
         {sum1 += abs(B.mat1[j][i]);}
      if (sum1 > norm1)
      norm1 = sum1;}
   Form1->Edit2->Text=norm1;
   for (i = 0; i < A.size; i++)
     {int sum2 = 0;
      for (j = 0; j < A.size; j++)
        	{sum2 += abs(B.mat2[j][i]);}
      if (sum2 > norm2)
      norm2 = sum2;}
    Form1->Edit3->Text=norm2;
   }
Matrix::Matrix()
{
size=StrToInt(Form1->Edit1->Text);
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
D1 -> Constructor(i,j);
}

void __fastcall TForm1::Button2Click(TObject *Sender)
{
  D2 ->Add(i,j);
}

void __fastcall TForm1::Button3Click(TObject *Sender)
{
D3->Minus(i,j);
}

void __fastcall TForm1::Button4Click(TObject *Sender)
{
D4->Multiply(i,j);
}

void __fastcall TForm1::Button5Click(TObject *Sender)
{
D5 ->Square(i,j) ;
}

void __fastcall TForm1::Button6Click(TObject *Sender)
{
D6 ->Norma(i,j);
}
//---------------------------------------------------------------------------


