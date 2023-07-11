#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
int pow();
int main()
{
  
  pow();
  return 0;
}
int pow()
{ 
    int a, b;
    cin>>a>>b;

 int ans=1;
   for(int i=0;i<b;i++)
   {
    ans = ans *a;
   } 
   cout<<ans;
}