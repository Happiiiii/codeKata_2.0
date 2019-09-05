/*
Given 2 numbers N,M. Find their product and check whether it is a perfect square.
Sample Testcase :
INPUT
5 5
OUTPUT
yes
*/

#include <iostream>
using namespace std;

int main()
{
  int a,b,c,i,flag=false,temp;
  cin>>a>>b;
  c=a*b;
  if(a>b)
  {
      temp=a;
      a=b;
      b=temp;
  }
  for(i=a;i<=b;i++)
  {
      if(i==i)
      {
          if(i*i==c)
          {
              flag=true;
          }
      }
  }
  if(flag==true)
  {
      cout<<"yes";
  }
  else
  {
      cout<<"no";
  }
    return 0;
}
