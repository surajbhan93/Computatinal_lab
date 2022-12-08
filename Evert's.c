/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<conio.h>
void main()
{
int n;                          
int i,j;
float ax[10];
float ay[10],x,nr,dr,y=0,h,p,q,y1,y2,y3,y4;                   // 'Y' array limit 9
float diff[20][20];             // to store Y
              // Formulae variables.
float py1,py2,py3,py4;
printf("\t\t !! LAPALCE-EVERETT'S INTERPOLATION FORMULA !! ");
// Input section.
printf("\n\n Enter the no. of terms -> ");
scanf("%d",&n);
// Input Sequel for array X
printf("\n\n Enter the value in the form of x -> ");
// Input loop for X.
for(i=0;i<n;i++)
   {
   printf("\n Enter the value of x%d -> ",i+1);
   scanf("%f",&ax[i]);
   }

// Input sequel for array Y.
printf("\n\n Enter the value in the form of y -> ");
// Input loop for Y.
for(i=0;i<n;i++)
   {
   printf("\n Enter the value of y%d -> ",i+1);
   scanf("%f",&ay[i]);
   }
// Inputting the required value quarry
printf("\n\n Enter the value of x for ");
printf("\n which u want the value of y -> ");
scanf("%f",&x);
// Calculation and processing section.
h=ax[1]-ax[0];
for(int i=0;i<n-1;i++)
   diff[i][1]=ay[i+1]-ay[i];
for(int j=2;j<=4;j++)
   for(int i=0;i<n-j;i++)
      diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
i=0;
do
{
i++;
}
while(ax[i]<x);
i--;
p=(x-ax[i])/h;
q=1-p;
y1=q*(ay[i]);
y2=q*(q*q-1)*diff[i-1][2]/4;
y3=q*(q*q-1)*(q*q-4)*diff[i-2][4]/120;
py1=p*(ay[i+1]);
py2=p*(p*p-1)*diff[i][2]/6;
py3=p*(p*p-1)*(p*p-4)*diff[i-1][4]/120;
y=ay[i]+y1+y2+y3+py1+py2+py3;
printf("\n When x = %6.2f , y = %6.8f",x,y);

getch();
}
