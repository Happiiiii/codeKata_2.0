/*
Given a number N and an array of N integers, print the prefix sum array.
Input Size : N <= 100000
Sample Testcase :
INPUT
4
2 4 4 2
OUTPUT
2 6 10 12
*/
#include <iostream>

using namespace std;

int main()
{
  int num,i,sum=0;
  cin >> num;
  int arr[num];
  for(i=0;i<num;i++)
  {
      cin >> arr[i];
  }
  
  for(i=0;i<num;i++)
  {
      sum = sum + arr[i];
      cout << sum << " ";
  }

    return 0;
}
