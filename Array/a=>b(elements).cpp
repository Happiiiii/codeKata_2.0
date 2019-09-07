/*
Write a program to copy all elements from an array to another array.

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
     
     int arr1[num];
     for(i=0;i<num;i++)
     {
        arr1[i]=arr[i];
     }
     for(i=0;i<num;i++)
     {
        cout<<"Array B : "<<arr1[i]<<" ";
     }
 }
