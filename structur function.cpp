/*----------------------*/
/*program penggunaan stucture pada function*/
/*Nama File : struct4.cpp*/
/*----------------------*/
#include<stdio.h>
#include<conio.h>
#include<iostream.h>

char ket(float n);

main()
{
int i,j=1,k=1;
struct
{
char nim[5];
char nama[15];
float nilai;
}mhs[5];
clrscr();
for(i=0;i<2;i++)
{
cout<<"Data ke - "<<j++<<endl;
cout<<"masukan NIM ="; cin>>mhs[i].nim;
cout<<"masukan nama = "; cin>>mhs[i].nama;
cout<<"masukan nilai akhir = ";cin>>mhs[i].nilai;
}
clrscr();
for(i=0;i<2; i++)
{
cout<<"data ke - "<<k++<<endl;
cout<<"NIM = "<<mhs[i].nama<<endl;
cout<<"keterangan yang didapat = ";

cout<<endl;
}
getch();
}
