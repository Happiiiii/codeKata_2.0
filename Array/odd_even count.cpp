/*
Write a program to count total number of even and odd elements in an array.
5                                                                                                                              
2 4 6 4 1                                                                                                                      
Even Count => 4                                                                                                                
Odd Count  => 1                                                                                                                 
                
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
    
    int even_count=0;
    int odd_count=0;
    
    for(i=0;i<num;i++)
    {
        if(arr[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout<<"Even Count => "<<even_count<<endl;
    cout<<"Odd Count  => "<<odd_count;
}
