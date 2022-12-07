/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<math.h>

/* Define function f(x) which
   is to be solved */
#define   f(x)   cos(x)-3*x+1
/* Write f(x) as x = g(x) and
   define g(x) here */
#define   g(x)   (1+cos(x))/3
 
int main()
{
	 int step=1, N;
	 float x0, x1, e;
	 
	 /* Inputs */
	 printf("Enter initial guess: ");
	 scanf("%f", &x0);
	 printf("Enter tolerable error: ");
	 scanf("%f", &e);
	 
	 printf("Enter maximum iteration: ");
	 scanf("%d", &N);
	 /* Implementing Fixed Point Iteration */
	 printf("\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  x1 = g(x0);
		  printf("%d\t%f\t%f\t%f\t%f\n",step, x0, f(x0), x1, f(x1));
		
		  step = step + 1;
		
		  if(step>N)
		  {
			   printf("Not Convergent.");
			   exit(0);
		  }
		  
		  x0 = x1;
		  //fabs ::used to get the absolute value of a floating point number. 
		  
	 }while( fabs(f(x1)) > e);
	 
	 printf("\nRoot is %f", x1);
	
	 getch();
	 return(0);
}