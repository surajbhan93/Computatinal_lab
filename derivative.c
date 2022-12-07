/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// find derivative

#include <stdio.h>
int main(){
    int n,sum=0;
    float arr[n],x,d[60];
    printf("Enter degree of polynomail :");
    scanf("%d",&n);
    printf("Enter the cofficient of polynomial :");
    for(int i =n;i>=0;i--){
    scanf("%f",&arr[i]);
    }
    printf("Enter the value at x :");
    scanf("%f",&x);
    
    for(int j=n;j>0;j--){
        d[j]=j*arr[j];
    }
    for(int l=n;l>1;l--){
        sum=(sum+d[l])*x;
    }
    sum=sum+d[1];
    printf("final answer x= %f is = %d",x,sum);
    return 0;
}

