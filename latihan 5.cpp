#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
 float tugas,absen,UTS,UAS,na;

 cout<<"masukan nilai mahasiswa"<<endl;
 cout<<"*********************** "<<endl;
 cout<<"masukan nilai tugas  :",cin>>tugas;
 cout<<"masukan nilai absen  :",cin>>absen;
 cout<<"masukan nilai UTS    :",cin>>UTS;
 cout<<"masukan nilai UAS    :",cin>>UAS;

 na=(0,1*tugas)+(0,2*absen)+(0,3*UTS)+(0,5*UAS);

 cout<<"========HASIL AKHIR======:"<<endl;
 cout<<"Nilai akhir anda adalah :"<<endl;


getch();
}