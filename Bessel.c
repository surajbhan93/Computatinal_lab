/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>

void main()
{


int n;
int i,j;

float ax[10]; 
float ay[10];
float h;
float p;
float diff[20][20]; 

float x,y;
float y1,y2,y3,y4;

printf("\n Enter the number of terms");
scanf("%d",&n);

printf("\n Enter the values for x \n");

for(i=0;i<n;i++)
{
printf("\n Enter the value for x%d",i+1);
scanf("%f",&ax[i]);
}

printf("\n Enter the values for y\n");

for(i=0;i<n;i++)
{
printf("\n Enter the value for y%d",i+1);
scanf("%f",&ay[i]);
}

printf("\n Enter the value of x for ");
printf("\n which you want the value of y ");

scanf ("%f",&x);

h=ax[1]-ax[0];
for(i=0;i<n-1;i++)
{
diff[i][1]=ay[i+1]-ay[i];
}
for(j=2;j<=4;j++)
{
for(i=0;i<n-j;i++)
{
diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
}
}
i=0;
do {
i++;
}while (ax[i]<x);
i--;

p=(x-ax[i])/h;
y1=p*(diff[i][1]);
y2=p*(p-1)*(diff[i][2]+diff[i-1][2])/4;  
y3=p*(p-1)(p-0.5)(diff[i-1][3])/6;
y4=(p+1)p(p-1)(p-2)(diff[i-2][4]+diff[i-1][4])/48;

y=ay[i]+y1+y2+y3+y4;

printf("\nwhen x=%6.2f,y=%6.8f ",x,y);

printf("\n\n Press Enter to Exit \t");

}