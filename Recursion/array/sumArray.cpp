/*
----------------------------------------------(recursion)-----------------------------
3                                                                                                                              
-2 3 2                                                                                                                         
3 
*/
#include<iostream>
using namespace std;

int sumArray(int arr[],int start,int len);

int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    sumArray(arr,0,num);
}
int sumArray(int arr[],int start,int len)
{
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}
