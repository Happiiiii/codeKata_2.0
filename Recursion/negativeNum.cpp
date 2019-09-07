/*
                                                      (*********recursion********)
5
-1 2 -3 4 -5
-1 -3 -5
*/
#include <iostream>
using namespace std;

int negativeElement(int arr[],int start,int len);

int main()
{
    int num,i;
    cin>>num;
    int arr[num];
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    negativeElement(arr,0,num);
}

int negativeElement(int arr[],int start,int len)
{
     for(int i=0;i<len;i++)
     {
       if(arr[i]<0)
       {
         cout<<arr[i]<<" ";
       }
     }
}
