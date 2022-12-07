/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <math.h>
float f(float x){
    return ((x*x*x)-1*x-1);
}
 
 void main(){
     float x1,x2,x3,y1,y2,y3;
     int n;
     printf("\n Enter value of initial x1:");
     scanf("%f",&x1);
     printf("\n Enetr value of second x2:");
     scanf("%f",&x2);
     printf("Nomber of itteration n :");
     scanf("%d",&n);
     y1=f(x1);
     y2=f(x2);
     while(y1*y2>0){
         printf("\n Enter values of again :");
         scanf("%f",&x1);
         printf("\n Enetr values of again :");
         scanf("%f",&x2);
         y1=f(x1);
         y2=f(x2);
         
     }
     for(int i=0;i<=n;i++){
         x3=((x1+x2)/2);
         y3=f(x3);
         if(y1*y3<0)
            {
             x2=x3;
             y2=y3;
             
         }
         else{
             x1=x3;
             y1=y3;
             
         }
        
     }
      printf("\n The root x3=%f",x3);
      
      getch();
     
     
    
 }
