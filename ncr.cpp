#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
int fact( int a)
{
   int facta =1;
   for(int i=1;i<=a;i++)
   {
    facta =facta*i;
   }
   return facta;

}
int ncr(int n ,int r)
{    
    int ans =0;
    int num = fact(n);
     int denom =  fact(r) * fact(n-r);
     ans=num/denom;
     return ans;
}
int main()
{
    int n,r,ans =0;;
    cout<<"enter n and r";
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
}
    
