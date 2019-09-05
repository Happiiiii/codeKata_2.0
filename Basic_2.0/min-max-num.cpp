/*
Given a number N followed by N numbers. Find the smallest number and largest number and print both the indices(1based indexing).
Input Size : N <= 100000
Sample Testcase :
INPUT
5
1 2 3 4 5
OUTPUT
1 5
*/
#include <iostream>

using namespace std;
int main()
{
    int num,min,max,i;
    cin>>num;
    int arr[i];
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    min=arr[0];
    max=arr[0];
    for(i=0;i<num;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<min<<" "<<max;
  return 0;
}

