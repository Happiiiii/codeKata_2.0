/*Given a number n followed by n numbers. Find the numbers which are equal to their index value and print them in sorted order. If no such numbers are present print '-1' without quotes.
Input Size : 1 <= n <= 100000
Sample Testcases :
INPUT
6
6 7 3 3 4 5
OUTPUT
3 4 5. */

#include <iostream>
using namespace std;
int main()
{
 int num;
 cin >> num;
 int arr[num];
 
 for(int i=0;i<num;i++)
 {
     cin >> arr[i];
     if(arr[i] == i)
     {
         cout << i << " " ;
     }
 }
    return 0;
}
