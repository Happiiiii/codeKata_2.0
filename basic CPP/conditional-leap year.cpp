/*

2019
not

2020
leap year

*/
#include <iostream>
using namespace std;

int main()
{
  int year;
  cin>> year;
  (year%400==0 || year%4==0 && year%100!=0) ? cout<<"leap year" : cout<<"not" ;
  return 0;
}
