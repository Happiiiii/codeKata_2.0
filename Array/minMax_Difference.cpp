/*
Given an array, find the maximum difference between any two elements in that array?
Input Size : N <= 1000000(complexity O(n) or O(nlogn))
Sample Testcase :
INPUT
5
1 2 3 4 5
OUTPUT
4
*/

#include <iostream>

using namespace std;

int main()
{
   int num,i;
   cin >> num;
   int arr[num];
   for(i=0;i<num;i++)
   {
       cin >> arr[i];
   }
   // Minimum
   int min = arr[0];
   for(i=0;i<num;i++)
   {
       if(min > arr[i])
       {
           min = arr[i];
       }
   }
   //Maximum
   int max = arr[0];
   for(i=0;i<num;i++)
   {
     if(max < arr[i])
     {
         max = arr[i];
     }
   }
   //Difference
   int res = max - min;
   cout << res;
    return 0;
}
