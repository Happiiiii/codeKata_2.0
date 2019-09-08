/*
Write a program to count frequency of each element in an array.
5                                                                                                                              
3 4 5 5 1                                                                                                                     
3 = 1                                                                                                                          
4 = 1                                                                                                                          
5 = 2                                                                                                                          
1 = 1 
*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int i,j;
    int fre[num];
    int arr[num];
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
        fre[i]=-1;
    }
    int count;
    for(i=0; i<num; i++)
    {
        count = 1;
        for(j=i+1; j<num; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                fre[j] = 0;
            }
        }
        if(fre[i] != 0)
        {
            fre[i] = count;
        }
    }
    for(i=0; i<num; i++)
    {
        if(fre[i] != 0)
        {
            cout<< arr[i]<<" = "<< fre[i]<<endl;
        }
    }
    return 0;
}
