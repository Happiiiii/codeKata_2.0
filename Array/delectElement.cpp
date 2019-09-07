/*Write a program to delete an element from an array at specified position.
len => 5                                                                                                                              
2 4 6 8 10                                                                                                                     
position => 4                                                                                                                              
2 4 6 10   
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
 
   int pos;
   cin>>pos;
   if(pos>num)
   {
     cout<<"\nThis value is out of range: ";
   }
   else
   {
   --pos;
   for(i=pos;i<num;i++)
   {
     arr[i]=arr[i+1];
   }
  
   for(i=0;i<num-1;i++)
   {
     cout<<arr[i]<<" ";
   }
  }
  return 0;
 }
