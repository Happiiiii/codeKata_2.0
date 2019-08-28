/*
Write a program to check whether a number is Perfect number or not.
6
factors => 1 2 3
1+2+3=6
6=6
*/

#include <iostream>

using namespace std;

int main()
{
    int num,i,sum=0;
    cin>>num;
    int temp = num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum = sum + i;
        }
    }
    if(sum == temp)
    {
        cout<<"Perfect Number";
    }
    else
    {
        cout<<"Not a Prfect Number";
    }

    return 0;
}
