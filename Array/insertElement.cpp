/*
Write a program to insert an element in an array.
4                                                                                                                              
1 2 5 4                                                                                                                          
position => 3                                                                                                                              
value    => 6                                                                                                                              
1 2 6 5 4 

*/
#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cin>>num;
    int arr[num];
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    
    int position,value;
    
    cin>>position;
    cin>>value;
    
    for(i=num-1;i>=position-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position-1]=value;
    
    for(i=0;i<=num;i++)
    {
        cout<<arr[i]<<" ";
    }
}
