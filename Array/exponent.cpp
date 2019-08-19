/*
Given numbers A,B find a^b.
Input Size : 1 <= A <= 5 <= B <= 50
Sample Testcase :
INPUT
3 4
OUTPUT
81
HINT:- Read about Modular Exponentation
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int base,expo,res;
  cin >> base >> expo;
  res = pow(base,expo);
  cout << res;
    return 0;
}
