/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
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
   float a ,mid,val;
   float b;
   
   
   int t=7;

   float error;
   while(error>=er)
   {
      float temp;
       a = f(arr,n,s);
       b = f(arr,n,e);
       val=s*b-e*a ;

       temp = e;
       s = e;
       e = e - val;
      
        error = (abs(e-s)*100)/s;

     
      
    val= s*(f(arr,n,e))-e*(f(arr,n,s))  ;

   
      
   }

   return mid;

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
