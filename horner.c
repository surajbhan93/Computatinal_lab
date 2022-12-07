/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Horner method

#include <stdio.h>
int main(){
int n;
float a[n],sum=0,x;
printf("\nEnter degree of the polynomial X :: ");
   scanf("%d",&n);
     printf("\nEnter coefficient's of the polynomial X :: \n");
     for(i=n;i>=0;i--){
printf("\nEnter Coefficient of [ X^%d ] :: ",i);
            scanf("%f",&a[i]);
 } 
 printf("\nEnter the value of X :: ");
     scanf("%f",&x);
for(i=n;i>0;i--){
        sum=(sum+a[i])*x; }
 sum=sum+a[0];
printf("\nValue of the polynomial is = [ %f ]\n",sum);
 return 0;}

