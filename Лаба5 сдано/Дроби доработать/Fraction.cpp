Edit5->Text=Edit5->Text+a;
   Edit5->Text=Edit5->Text+"/";
   Edit5->Text=Edit5->Text+b;}
//---------------------------------------------------------------------------
 void Reverse()

 {a=a+b; int a,b; int nod1;
int chis2; int chis1;
int znam1,znam2, znam3;
long nod = 1L;
int nok;
int *array;
int c, d1, d2;
Fraction::Fraction()
    {Fraction ob2(znam3);
     Fraction ob3(nod1, znam1, znam2);
     nok=ob2.znam1*ob2.znam2/ob3.nod;}
Fraction::Fraction(int znam3)
     {chis1=StrToInt(Form1->Edit1->Text);
     znam1=StrToInt(Form1->Edit2->Text);
     chis2=StrToInt(Form1->Edit3->Text);
     znam2=StrToInt(Form1->Edit4->Text);}
Fraction::Fraction(int nod1, int znam1,int znam2)
   {Fraction ob2(znam3);
    for (long i = ob2.znam1; i> 0; i--)
     {     if (ob2.znam1 % i == 0 && ob2.znam2 % i == 0)
   {nod = i;
   break;} }}
void Fraction::Add( int chis1, int chis2, int znam1,int znam2)
   { Fraction ob2(znam3);
     a=ob2.chis1*ob2.znam2+ob2.chis2*ob2.znam1;
     b=ob2.znam1*ob2.znam2;}
void Fraction::Minus( int chis1, int chis2, int znam1,int znam2)
     {Fraction ob2(znam3);
      a=ob2.chis1*ob2.znam2-ob2.chis2*ob2.znam1;
      b=ob2.znam1*ob2.znam2;}
void Fraction::Multiply( int chis1, int chis2, int znam1,int znam2)
   {Fraction ob2(znam3);
    a=ob2.chis1*ob2.chis2;
    b=ob2.znam2*ob2.znam1;}
void Fraction::Divide( int chis1, int chis2, int znam1,int znam2)
  {Fraction ob2(znam3);
   a=ob2.chis1*ob2.znam2;
   b=ob2.chis2*ob2.znam1;}
void __fastcall TForm1::Button1Click(TObject *Sender)
{ Edit5->Text="";
   F1->Add(chis1,chis2,znam1,znam2);
   Edit5->Text=Edit5->Text+a;
   Edit5->Text=Edit5->Text+"/";
   Edit5->Text=Edit5->Text+b;}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{ Edit5->Text="";
   F2->Minus(chis1,chis2,znam1,znam2);
   Edit5->Text=Edit5->Text+a;
   Edit5->Text=Edit5->Text+"/";
   Edit5->Text=Edit5->Text+b;}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{ Edit5->Text="";
   F3->Multiply(chis1,chis2,znam1,znam2);
   Edit5->Text=Edit5->Text+a;
   Edit5->Text=Edit5->Text+"/";
   Edit5->Text=Edit5->Text+b;}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{ Edit5->Text="";
   F4->Divide(chis1,chis2,znam1,znam2);


   b = a - b;
   a = a - b;}
void __fastcall TForm1::Button5Click(TObject *Sender)
{Reverse();
  Edit5->Text="";
  Edit5->Text=Edit5->Text+a;
  Edit5->Text=Edit5->Text+"/";
  Edit5->Text=Edit5->Text+b;}
