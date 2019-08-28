/*
Even Index
5
1 2 3 4 5
1 3 5
*/
#include <iostream>

using namespace std;

int main()
{
   int num,i;
   cin>>num;
   int arr[num];
   for(int i=0;i<num;i++)
   {
       cin>>arr[i];
   }
   for(i=0;i<num;i++){
   if(i%2==0)
   {
       cout<<arr[i]<<" ";
   }
       
   }
    return 0;
}
