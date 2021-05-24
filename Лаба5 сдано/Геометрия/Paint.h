//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TEdit *Edit8;
        TEdit *Edit9;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#ifndef PaintH
#define PaintH

class Dr
{ public:
int a, b;
float R;
Dr();   int V;
Dr(const Dr &A) ;
virtual void Enter();
virtual void Area();
float P,S;
 virtual void Perimetr()
 {P=4*a;}
 };
Dr *A;



class Circ: public Dr
 {  public:
 void Draw();
  void Perimetr();
  void Area();
};
 Circ *C;

class Tria: public Dr
 {   public:
 void Draw2();
   void Perimetr() ;
   void Area();
  };

  Tria *F;

 class Rec: public Dr
  { public:
	void Draw3();
        void Area();
        void Perimetr();

  };

Rec *G;
#endif
