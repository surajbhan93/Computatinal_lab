/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
# include <conio.h>
# include <math.h>
# include <process.h>
# include <string.h>
float fun(float);
void main()
{
float result=1;
float a,b;
float h,sum;
int i,j;
int n;
clrscr();
printf("\n\n Enter the range - ");
printf("\n\n Lower Limit a - ");
scanf("%f" ,&a);
printf("\n\n Upper Limit b - ");
scanf("%f" ,&b);
printf("\n\n Enter number of subintervals - ");
scanf("%d" ,&n);
h=(b-a)/n;
sum=0;
sum=fun(a)+fun(b);
for(i=1;i<n;i++)
{
sum+=2*fun(a+i);
}
result=sum*h/2;
printf("n\n\n\n Value of the integral is %6.4f\t",result);
printf("\n\n\n Press Enter to Exit");
getch();
}
float fun(float x)
{
float temp;
temp = 1/(1+(x*x));
return temp;
}