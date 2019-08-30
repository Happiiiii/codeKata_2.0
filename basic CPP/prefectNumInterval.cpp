/*
Write a program to print all Perfect numbers between 1 to n.
1 1000                                                                                                                         
6                                                                                                                              
28                                                                                                                             
496 
*/
#include <iostream>

using namespace std;

int main()
{
    int i, j, a, b, sum;
    cin>>a>>b;

    for(i=a; i<=b; i++)
    {
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }
 
        if(sum == i)
        {
           cout<<i<<endl;
        }
         sum = 0;
    }

    return 0;
}
