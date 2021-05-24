//---------------------------------------------------------------------------
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
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TButton *Button1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;

#ifndef PolygonH
#define PolygonH

#include <math.h>
class Pol
{
  public:
  int n,x,y;
  float S;
  float P;
  float R;
  double xM,yM;
  double L, H;

  void Rec_Perimetr(int n, float R,float P);
  void Rec_Area(int n, float R, float S);
  void Draw(int n, float R);
  	void Median(int x, int y);
	void Rad_Centre(int n, float R, float L);
	void Height(int n, float R, float H);
  
};
Pol *C1;

class Tria: public Pol
{
public:
	void Median();
	void Rad_Centre(int n, float R, float L);
    void Height(int n, float R, float size,float H);
};
Tria *D1;

#endif
 