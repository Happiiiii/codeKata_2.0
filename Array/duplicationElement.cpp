/*
 Given a number N followed by N numbers. Keep the count of each number and print the maximum repeating number.
Input Size : N <= 100000
Sample Testcase :
INPUT
5
15 5 -20 -20 -45
OUTPUT
-20
*/

#include <iostream>
using namespace std;
int main()
{
  int num,i;
  cin >> num;
  int arr[num];

  for( i=0;i<num;i++)
  {
      cin >> arr[i];
  }
  for(i=0;i<num;i++)
  {
   for(j=i+1;j<num;j++)
    {
     if(arr[i] == arr[j]
        {
         cout << arr[i];
        }
    }
  }
    return 0;
}
