//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TEdit *Edit8;
        TEdit *Edit9;
        TButton *Button1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//-------------------------------------------------------------------------
#ifndef CostOfTransportingH
#define CostOfTransportingH
class Transport
{
	public:
	int countofpass, weightofload, cost1;
	float time;
	float distance;
	void timer(float distance);
	void enter(int countofpass, int weightofload, float distance);

};
Transport *A;
class Car: public Transport
{
	public:
	float time;
	void timer(float distance);
	void cost(int cost1, int countofpass, int weightofload, float distance);
};

Car *machine;

class Bicycle: public Transport
{
  public:
	void timer(float distance);
	void cost(int cost1, int countofpass, int weightofload, float distance);
};

Bicycle *cycle;

class Wagon: public Transport
{
	public:
	void timer(float distance);
	void cost(int cost1, int countofpass, int weightofload, float distance);
};
Wagon *horse;
#endif
 