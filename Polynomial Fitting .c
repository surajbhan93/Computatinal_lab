/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#define f(x) x*x-25
#define df(x) 2*x

int main()
{
    int n;
    float x0,err,h,x1,x;
    printf("Enter initial guess value,allow err,and maximum itteration :");
    scanf("%f,%f,%d",&x0,&err,&n);
    for(int i=1;i<=n;i++){
        h=f(x0)/df(x0);
        x1=x0-h;
        printf("itteration no, %3d iteration","x=%f9.6f\n",err,x1);
        if(fabs(x1-x)<err){
            printf("after %3d iteration","root=%8.6f\n",err,x1);
            return 0;
        }
        x0=x1;
    }
    printf("iteration not sufficient solution does not convergent\n");
    return 1;
    
    

    return 0;
}
