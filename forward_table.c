/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n,i,j;
    float x[20],y[20][20];
    
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter data :");
    for(int i=0;i<n;i++){
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        
        printf("y[%d]=",i);
        scanf("%f",&y[i][0]);
    }
    /* Generating Forward Difference Table matrix type */
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            y[j][i] = y[j+1][i-1] - y[j][i-1];//main code
            
        }
        
    }
        /* Displaying Forward Difference Table */
        printf("\nFORWARD DIFFERENCE TABLE\n\n");
    for(i = 0; i < n; i++)
    {
         printf("%0.2f", x[i]);
         for(j = 0; j < n-i ; j++)
     {
         printf("\t%0.2f", y[i][j]);
        }
 printf("\n");
}
        
        
    return 0;
    
    
        
    
}
  