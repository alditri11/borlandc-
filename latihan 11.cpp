#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
 char gol,jab[10];
 long gapok=0;

  clrscr();
  cout<<endl<<"data jabatan"<<endl
  <<"============================"<<endl;
  cout<<"masukan golongan [1/2]:";
  cin>>gol;
  //proses seleksi kondisi
  if(gol=='1')
  { strcpy(jab,"direktur");
    gapok=5000000;
   }
  else if(gol=='2')
  { strcpy(jab,"manajer");
    gapok=4000000;
   }
  else
  {cout<<"salah kode golongan"<<endl;}

  //output datanya
    cout<<"jabatan="<<jab<<endl;
    cout<<"gaji pokok="<<gapok<<endl;
    getch();
  }


