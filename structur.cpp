/*----------------------*/
/*program penggunaan stucture*/
/*----------------------*/
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{
struct
{
char nim[10];
char nama[15];
int nilai;
}mahasiswa;
clrscr();
cout<<"masukan NIM=";
cin>>mahasiswa.nim;
cout<<"masukan Nama=";
cin>>mahasiswa.nama;
cout<<"masukan nilai akhir=";
cin>>mahasiswa.nilai;
cout<<"\n\nData Yang di Input adalah :\n\n";
cout<<"NIM = "<<mahasiswa.nim<<endl;
cout<<"Nama = "<<mahasiswa.nama<<endl;
cout<<"nilai akhir = "<<mahasiswa.nilai<<endl;
getch();
}
