/*
Sort array in ascending order
*/

#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int num,i,j;
    cin >> num;
    int arr[num];
    for(i=0;i<num;i++)
    {
     cin >> arr[i];
    }
    
    int temp;
   for(i=0;i<num;i++)
   {
       for(j=0;j<num;j++)
       {
           if(arr[i] < arr[j])
           {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
   }
   for(i=0;i<num;i++)
    {
     cout << arr[i] << " ";
    }
    return 0; 
} 
