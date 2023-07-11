#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
int main()
{
int amnt, a,b,c,d;
cout<<"enter amnt";
cin>>amnt;
for(int i=1;i<=4;i++)
{
switch(i)
{
  case 1: {
           a = amnt/100;
           amnt=amnt- (a*100) ;
           cout<<"\nno. of 100 notes"<<a;
           }
           break;
  case 2: {
           b= amnt/50;
           amnt=amnt-(50*b);
           cout<<"\n50 notes"<<b;
          }  
          break;       
  case 3:
          {
            c=amnt/20;
            amnt=amnt-(20*c);
            cout<<"\n20 notes"<<c;
          }
          break;
  case 4:
           {
            d=amnt/1;
            cout<<"\n1 notes "<<d;
           }  
            break;      

}
}
 
 return 0;
}