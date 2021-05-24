
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TStringGrid *StringGrid2;
        TStringGrid *StringGrid3;
        TStringGrid *StringGrid1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#ifndef MatrixH
#define MatrixH
class   Matrix
{
   public:
   Matrix();
Matrix(const Matrix &b) ;
   int mat1[100][100], mat2[100][100];
   int ar[10][10];
   void Add(int i, int j);
   void Minus(int i, int j);
   void Multiply(int i, int j);
   void Square(int i, int j);
   void Constructor(int i, int j);
   void Norma(int i, int j);
   int size;

   const Matrix operator +(const Matrix&);
   const Matrix operator -(const Matrix&);
   const Matrix operator *(const Matrix&);
};

Matrix *D1, *D2, *D3, *D4, *D5, *D6;
#endif



