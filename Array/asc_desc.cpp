/*
5
3 5 4 2 1
1 2 3 4 5
*/

#include<iostream>
using namespace std;

int main()
{
    int num,i,j;
    cin>>num;
    int arr[num];
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    int temp;
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
          if(arr[i]>arr[j]) // (arr[i] < arr[j])---descending
           {
             temp = arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
          }
        }
    }
    for(i=0;i<num;i++)
    {
      cout<<arr[i]<<" ";
    }
}
