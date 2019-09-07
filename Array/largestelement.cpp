/*
5                                                                                                                              
3 5 7 6 4                                                                                                                      
7 6 5 4 3                                                                                                                      
Enter the size of largest number: 3                                                                                            
5 
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
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //cout<<arr[num-2]; // hard core
    int fnd;
    cin>>fnd;
    for(i=fnd-1;i<fnd;i++)
    {
        cout<<arr[i];
    }
    
}
