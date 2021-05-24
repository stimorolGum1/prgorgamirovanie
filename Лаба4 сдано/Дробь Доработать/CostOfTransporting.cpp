//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "CostOfTransporting.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner){}
float timer;
int speed;
int countofpass, weightofload, cost1;
float distance;


void Car::timer(float distance)
{
  speed = 90;
  float t1 = distance/speed;
  Form1->Edit4->Text= t1;
}


void Bicycle::timer(float distance)
{
  speed = 20;
  float t2 = distance/speed;
  Form1->Edit6->Text= t2;
}


void Wagon::timer(float distance)
{
	speed = 5;
	float t3 = distance/speed;
	Form1->Edit8->Text= t3;
}


void Car::cost(int cost1, int countofpass, int weightofload, float distance)
{
	int cost = 15;
	if (countofpass<5)
	{
	  cost1 = 0.025 * cost*(distance * (0.5 * weightofload));

	}
	else
	{
		cost1 = 0.04 * cost * (distance * (0.75 * weightofload));
	}
	Form1->Edit5->Text= cost1;
}


void Bicycle::cost(int cost1, int countofpass, int weightofload, float distance)
{
	int cost = 7;
	if (countofpass==1)
	{
	  cost1 = 0.01 * cost*(distance  * weightofload);

	}
	else
	{
		cost1 = 0.02 * cost * (distance *  weightofload);
	}
	Form1->Edit7->Text= cost1;
}


void Wagon::cost(int cost1, int countofpass, int weightofload, float distance)
{
	int cost = 5;
	if (countofpass<8)
	{
	  cost1 = 0.025 * cost*(distance * (0.1 * weightofload));

	}
	else
	{
		cost1 = 0.05 * cost * (distance * (0.75 * weightofload));
	}
	
       Form1->Edit9->Text= cost1;
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
  countofpass=StrToInt(Form1->Edit1->Text);
  weightofload=StrToInt(Form1->Edit2->Text);
  distance=StrToFloat(Form1->Edit3->Text);

  machine-> timer(distance);
  cycle->timer(distance);
  horse->timer(distance);

  machine->cost(cost1, countofpass, weightofload, distance);
  cycle->cost(cost1, countofpass, weightofload, distance);
  horse->cost(cost1, countofpass, weightofload, distance);
}
//---------------------------------------------------------------------------
