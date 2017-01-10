                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               #include<stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>

garis()
{
printf("\n==================================\n");
}
main()
{
int i,no;
char jenis[10][10],*jenisp[10],kodep[10],lagi;
long juhe[10],subto[10],by[10],total=0,ubay,ukem;
struct
{
char petugas[10];
char pemilik[10];
}hewan;


atas:
clrscr();
cout<<"              PENITIPAN HEWAN PELIHARAAN"<<endl;
cout<<"                    MEAOW PET CARE"<<endl;
cout<<"             =**************************="<<endl;
cout<<"Nama Petugas : "; cin>>hewan.petugas;
cout<<"Nama Pemilik : "; cin>>hewan.pemilik;
cout<<"Jumlah Data Peliharaan : "; cin>>no;
cout<<endl;
for(i=1;i<=no;i++)
{
cout<<"Hewan Ke-"<<i<<endl;
cout<<"Kode Jenis Hewan[K/H/B]: "; cin>>jenis[i];
cout<<"Kode Perawatan[1/2]: "; cin>>kodep[i];

if(strcmp(jenis[i],"K")==0)
{
strcpy(jenis[i],"Kucing");
if(kodep[i]=='1')
{
(jenisp[i]="Lux");
 by[i]=250000;
 }
if(kodep[i]=='2')
{
(jenisp[i]="intensif");
 by[i]=300000;
 }
}
else if(strcmp(jenis[i],"H")==0)
{
strcpy(jenis[i],"Hamster");
if(kodep[i]=='1')
{
(jenisp[i]="Lux");
 by[i]=150000;
 }
else if(kodep[i]=='2')
{
(jenisp[i]="intensif");
 by[i]=100000;
 }
}

cout<<"Jumlah Hewan : "; cin>>juhe[i];
subto[i]=by[i]*juhe[i];
cout<<endl;
}
clrscr();
cout<<"              PENITIPAN HEWAN PELIHARAAN"<<endl;
cout<<"                    MEAOW PET CARE"<<endl;
cout<<"             =**************************="<<endl;
cout<<"Nama Petugas : "<<hewan.petugas<<endl;
cout<<"Nama Pemilik : "<<hewan.pemilik<<endl;
cout<<endl;

garis();
cout<<"No. Jenis   Jenis      Biaya      Jumlah   Subtotal"<<endl;
cout<<"    Hewan   Perawatan  Perawatan  Hewan"<<endl;
garis();
for(i=1;i<=no;i++)
{
cout<<setiosflags(ios::left)<<setw(4)<<i;
cout<<setiosflags(ios::left)<<setw(8)<<jenis[i];
cout<<setiosflags(ios::left)<<setw(12)<<jenisp[i];
cout<<setiosflags(3)<<by[i];
cout<<setiosflags(3)<<"      "<<juhe[i];
cout<<setiosflags(3)<<"       "<<subto[i]<<endl;
}
garis();
for(i=1;i<=no;i++)
total+=subto[i];
cout<<"                          Total Bayar: "<<total<<endl;
cout<<"                          Uang Bayar : "; cin>>ubay;
ukem=ubay-total;
cout<<"                          Uang Kembalian: "<<ukem<<endl;
cout<<endl;

cout<<"           INPUT DATA LAGI[Y/T]: "; cin>>lagi;
if(lagi=='Y'||lagi=='y')
{goto atas;}
else
{goto akhir;}
getch();
akhir:

}