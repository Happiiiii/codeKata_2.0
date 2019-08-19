/*
Given 2 string S, check whether they are same without using strcmp(case sensitive).
Sample Testcase :
INPUT
rknagar rknagar
OUTPUT
yes
*/

#include <iostream>
#include<string>
using namespace std;

int main()
{
  string a,b;
  cin >> a >> b;
  if(a==b)
  {
      cout << "yes";
  }
  else
  {
      cout << "no";
  }
    return 0;
}
