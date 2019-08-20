/*
sum of elements
*/

#include<iostream>
using namespace std;

int main()
{
    int num,i,sum=0;
    cin >> num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin >> arr[i];
    }
    
    for(i=0;i<num;i++)
    {
        sum = sum + arr[i];
    }
     cout << sum;
}
