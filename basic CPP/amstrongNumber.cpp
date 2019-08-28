/*
Write a program to check whether a number is Armstrong number or not.
371
3^3+7^3+1^3 => 371
*/

#include <iostream>
using namespace std;

int main()
{
   int num,sum=0,rem;
   cin >> num;
   int temp = num;
   
   while(num>0)
   {
    rem = num % 10;
    sum = sum + rem*rem*rem;
    num = num / 10;
   }
   
   if(temp == sum)
   {
       cout << "Amstrong Number";
   }
   else
   {
       cout << "Not a Amstrong Number";
   }
    return 0;
}
