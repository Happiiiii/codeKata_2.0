
/*
Write a program to count frequency of each element in an array.
5                                                                                                                              
3 4 5 5 1                                                                                                                     
3 = 1                                                                                                                          
4 = 1                                                                                                                          
5 = 2                                                                                                                          
1 = 1 
*/
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    
    int count=0;
    int rem=0;
    int i,j;
    
    for(i=0;i<10;i++)
    {
        for(j=num;j>0;j=j/10)
        {
            rem=j%10;
            if(rem==i)
            {
                count++;
            }
        }
        if(count>0)
        {
           cout<<i<<" => "<<count<<endl;
        }
        count=0;
    }
}
