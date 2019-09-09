/*
Write a program to print all unique elements in the array.
6                                                                                                                              
1 1 2 2 3 4                                                                                                                    
3 4  
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
    int count=0,temp;
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if( arr[i] == arr[j] )
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<arr[i]<<" ";
        }
      count=0;
    }
}
