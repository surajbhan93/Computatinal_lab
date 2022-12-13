/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<string.h>
float fun(float);
void main()
{
float result=1;
float a,b;
float sum,h;
int i,j,n;
clrscr();
printf("\n Enter the range - ");
printf("\n Lower Limit a - ");
scanf("%f",&a)
;printf("\n Upper limit b - ");
scanf("%f",&b);
printf("\n\n Enter number of subintervals - ");
scanf("%d",&n);
h=(b-a)/n;
sum=0;
sum=fun(a)+4*fun(a+h)+fun(b);
for(i=3;i<n;i+=2)
{
sum+=2*fun(a+(i-1)*h)+4*fun(a+i*h);
}
result=sum*h/3;
printf("\n\nValue of integral is %6.4f\t",result);
getch();}
float fun(float x)
{
float temp;
temp=1/(1+(x*x));
return temp;
}