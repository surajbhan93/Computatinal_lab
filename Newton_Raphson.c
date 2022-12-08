/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
  #include<conio.h>
  #include<math.h>
  #define e 0.001
  #define F(x) (3*x*x)-5
  float frac(float a)
  {
    float f1;
    f1=a*a*a-5*a+3;
    return f1;
  }

  void main()
  {
    float x1,x2,f1=0,f2,er,d;
    printf("F(x) = x^2-3x+2\n\n");
    printf("Enter the value of x1: ");
    scanf("%f",&x1);
    printf("\nx1 = %f",x1);
    printf("\n______________________________________________________\n");
    printf(" x1   | x2 | f1 | f'1 | |(x2-x1)/x2| | \n");
    printf("--------------------------------------------------------\n");
    do
    {
        f1=frac(x1);
        d=F(x1);
        x2=x1-(f1/d);
        er=fabs((x2-x1)/x2);
        printf(" %f | %f | %f | %f | %f | \n",x1,x2,f1,d,er);
        x1=x2;
    }
    while(er>e);
    printf("-------------------------------------------------------\n\n");
    printf("\n Root of the equation is: %f",x2);
    getch();
    
  }
