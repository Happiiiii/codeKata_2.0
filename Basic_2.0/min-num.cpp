/*
Find the minimum among 10 numbers.
Sample Testcase :
INPUT
5 4 3 2 1 7 6 10 8 9
OUTPUT
1
*/

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
 int num,min,i;
 cin>> num;
 int arr[num];
 for(i=0;i<num;i++)
 {
     cin>>arr[i];
 }
 
 min=arr[0];
 for(i=0;i<num;i++)
 {
         if(arr[i]<min)
         {
             min=arr[i];
         }
 }
 cout<<min;
    return 0;
}

