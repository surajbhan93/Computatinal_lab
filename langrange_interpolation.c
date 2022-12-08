/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

**********/
#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
{
float x[MAX],y[MAX],k=0,z,nr,dr;
int i,j,m;
//clrscr();
printf("\n enter the range ");
scanf("%d",&m);
printf("\n enter the x value ");
for(i=0;i<m;i++)

scanf("%f",&x[i]);
printf("\n enter the y value ");
for(i=0;i<m;i++)
scanf("%f",&y[i]);
printf("\n enter value OF Z to be calculated ");
scanf("%f",&z);
for(i=0;i<m;i++)
{ nr=1;dr=1;
for(j=0;j<m;j++)
{
if (j!=i)
{
nr=nr*(z-x[j]);
dr=dr*(x[i]-x[j]);
}
}
k=k+((nr/dr)*y[i]);
}
printf("\n final result=%f\n",k);
getch();
}
