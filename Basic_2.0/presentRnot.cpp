/*
Given a number N and 2 numbers L and R. Check whether N is between L and R. Print yes/no.
Sample Testcase :
INPUT
3
2 6
OUTPUT
yes
*/

#include<iostream>
using namespace std;

int main()
{
    int num,a,b,count=0;
    cin>>num;
     cin>>a>>b;
    for(int i=a;i<b;i++)
    {
        if(num==i)
        {
            count++;
        }
    }
    if(count==1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
        return 0;
}

