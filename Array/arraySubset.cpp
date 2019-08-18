/*
Given 2 numbers N and M followed by 2 arrays A an B of sizes N and M. Check if array B is a subset of array A. if yes print 'YES' else print 'NO'.
Input Size : 1 <= N <= 1000000
Sample Testcases :
INPUT
7 6
1 2 3 4 5 6 7
3 4 5 6 7 1
OUTPUT
YES
*/


#include <iostream>

using namespace std;

int main()
{
  int num1,num2,count=0;
  int i,j;
  cin >> num1 >> num2;
  int arr1[num1],arr2[num2];
  for(i=0;i<num1;i++)
  {
      cin >> arr1[i];
  }
  for(j=0;j<num2;j++)
  {
      cin >> arr2[j];
  }
  
  
  for(i=0;i<num1;i++)
  {
      for(j=0;j<num2;j++)
      {
          if(arr2[j] == arr1[i])
          {
              count++;
          }
      }
  }
  if(count == num2)
  {
      cout << "YES";
  }
  else
  {
      cout << "NO";
  }

    return 0;
}
