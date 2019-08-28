/*
Missing Number
5
1 2 4 5 6
3
*/
#include <iostream>

using namespace std;

int main()
{
     int num,i,res;
   cin>>num;
   int arr[num];
   for(int i=0;i<num;i++)
   {
       cin>>arr[i];
   }
   res=(num+1)*(num+2)/2;
   for(i=0;i<num;i++)
   {
       res=res-arr[i];
   }
   cout<<res;
    return 0;
}
