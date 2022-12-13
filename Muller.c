/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;

float f(int arr[],int n,float x)
{   
   float y = arr[0];

    for(int i=1;i<=n;i++)
    {
        y = arr[i] + y*x;
    }
    return y;
}
float root(float s,float e,int arr[],int n,float er)
{
 
 float x = e , y = s ,z = s-1;
 int i=2;
 float error=1;
  while(error>=er)
  {
     float A ,B;
     
     float temp;
     float X = f(arr,n,x);
     float Y = f(arr,n,y);
     float Z = f(arr,n,z);

     A =  (Y-X)/((y-z)(y-x)) + (Z-X)/((z-y)(z-x));

     B = ((Y-X)/(y-x))  - A*(y - x);
     
     
     
     float g = sqrt(B*B - 4*A*X);
     float h = max(B+g ,B-g );
    
     temp = x;
     x = x - (2*X)/(h);

     error = (abs(x - temp)/y)*100;
     cout<<error<<endl;  
  
     i--;
  }  
   return x;
}
int main()
{
  int n;
  cout<<"Degree :"<<endl;
  cin>>n;

  int arr[n+1];
  cout<<"Coefficients :"<<endl;
  for(int i=0;i<=n;i++)
  cin>>arr[i];

   float s,e;
  cout<<"Interval :"<<endl;
  cin>>s>>e;

  float er;
  cout<<"Error"<<endl;
  cin>>er;

  
  cout<<root(s,e,arr,n,er)<<endl;

return 0;
}#include<iostream>
#include<math.h>
using namespace std;

float f(int arr[],int n,float x)
{   
   float y = arr[0];

    for(int i=1;i<=n;i++)
    {
        y = arr[i] + y*x;
    }
    return y;
}
float root(float s,float e,int arr[],int n,float er)
{
 
 float x = e , y = s ,z = s-1;
 int i=2;
 float error=1;
  while(error>=er)
  {
     float A ,B;
     
     float temp;
     float X = f(arr,n,x);
     float Y = f(arr,n,y);
     float Z = f(arr,n,z);

     A =  (Y-X)/((y-z)(y-x)) + (Z-X)/((z-y)(z-x));

     B = ((Y-X)/(y-x))  - A*(y - x);
     
     
     
     float g = sqrt(B*B - 4*A*X);
     float h = max(B+g ,B-g );
    
     temp = x;
     x = x - (2*X)/(h);

     error = (abs(x - temp)/y)*100;
     cout<<error<<endl;  
  
     i--;
  }  
   return x;
}
int main()
{
  int n;
  cout<<"Degree :"<<endl;
  cin>>n;

  int arr[n+1];
  cout<<"Coefficients :"<<endl;
  for(int i=0;i<=n;i++)
  cin>>arr[i];

   float s,e;
  cout<<"Interval :"<<endl;
  cin>>s>>e;

  float er;
  cout<<"Error"<<endl;
  cin>>er;

  
  cout<<root(s,e,arr,n,er)<<endl;

return 0;
}
