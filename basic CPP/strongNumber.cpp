/*
strong number
145                                                                                                                     
Strong number 
*/
#include<iostream>
using namespace std;

int main()
{
  	int num,rem,sum=0;
  	cin >> num;
  	int temp = num;
  	while(num)
  	{
  	    int i=1,fact=1;
  	    rem = num % 10;
  	    while(i<=rem)
  	    {
  	        fact = fact * i;
  	        i++;
  	    }
  	    sum = sum + fact;
  	    num = num/ 10;
  	}
  	if(sum == temp)
  	{
  	    cout<<"Strong number";
  	}
  	else
  	{
  	    cout<<"Not a strong number";
  	}
  	return 0;
}
