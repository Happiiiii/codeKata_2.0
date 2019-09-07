/*
-----------------------------------------------------------(recursion)------------------------------------------------------------
sum of an array
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
    int sum = sumArray(arr,0,num);
    cout<<sum;
}

int sumArray(int arr[],int start,int len)
{
    if(start>=len)
    {
        return 0;
    }
    return(arr[start] + sumArray(arr,start+1,len));
   
}
