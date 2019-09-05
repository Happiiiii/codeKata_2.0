/*
Given a number N, check whether it is composite.
Sample Testcase :
INPUT
123
OUTPUT
yes

---------------------------------numbers other then prime numbers---are composite number-----------------------------------------
*/
#include<iostream>
using namespace std;

int main()
{
  int num,i,count=0;
  cin>>num;
  for(i=1;i<num;i++)
  {
    if(num%i==0)
    {
      count++;
    }
  }
  if(count>2)
  {
    cout<<"yes";
  }
  else
  {
    cout<<"no";
  }
  return 0;
}
