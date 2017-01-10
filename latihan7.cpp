#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
 int x,y,a=0,b=0,c=0,d=0;
 clrscr();
 cout<<"masukan nilai A:";cin>>x;
 cout<<"masukan nilai B:";cin>>y;
 a=x+y; c=x%y;
 b=x-y;d =x*y;
 printf("Hasil Dari A= x+y=%i\n",a);
 printf("Hasil Dari B= x-y=%i\n",b);
 cout<<"hasil dari C = x%y="<<c<<endl;
 cout<<"hasil dari D = x*y="<<d<<endl;
 getch();
}