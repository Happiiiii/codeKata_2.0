/*
5                                                                                                                              
1 2 3 4 5                                                                                                                      
5 2 3 4 1   
*/

#include<iostream>
using namespace std;

int main()
{
int num,temp,i;
cin>>num;
int arr[num];
for(i=0;i<num;i++)
{
    cin>>arr[i];
}
temp=arr[num-1];
arr[num-1]=arr[0];
arr[0]=temp;

for(i=0;i<num;i++)
{
    cout<<arr[i]<<" ";
}
}

