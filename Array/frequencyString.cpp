/*
hello
h => 1
e => 1
l => 2
0 => 1
*/
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    char str[100];
    cin>>str;
    
    int len;

    len=strlen(str);
    int count=0;
    for(char i='a';i<='z';i++)
    { 
       for(int j=0;j<=len;j++) 
        {
            if(str[j]==i)
            {
              count++;  
            }
        }
        if(count>0)
        {
           cout<<i<<" => "<<count<<endl;
           count=0;
        }
    }
}
