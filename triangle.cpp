/*
Given 3 numbers A,B,C find if they can form the sides of a right angled triangle.
Input Size : A,B,C <= 100000
Sample Testcase :
INPUT
3 4 5
OUTPUT
yes
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   if( a+b>c && b+c>a && c+a>b )
   {
       cout<<"yes";
   }
   else
   {
       cout<<"no";
   }
    return 0;
}
