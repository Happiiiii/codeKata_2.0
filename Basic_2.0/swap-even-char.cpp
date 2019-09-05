/*
Given a string s swap the even and odd characters.
Input Size : |s| <= 10000000(complexity O(n))
Sample Testcase :
INPUT
abcd
OUTPUT
badc
*/

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    gets(str);
    int i,temp;
    int len=strlen(str);
    for(i=0;i<=len;i++)
    {
        if(i%2==0)
        {
            temp = str[i];
            str[i] = str[i+1];
            str[i+1] = temp;
        }
    }
    for(i=0;i<=len;i++)
    {
        cout<<str[i];
    }
    return 0;
}

