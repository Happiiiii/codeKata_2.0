/*
Write a program to count total number of negative elements in an array.
5                                                                                                                              
-1 -2 3 4 5                                                                                                                    
2                                                                                                                              
     
*/
#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<num;i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
    }
    cout<<count;
}
