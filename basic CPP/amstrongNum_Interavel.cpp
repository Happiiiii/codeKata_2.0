/*
Write a program to print all Armstrong numbers between 1 to n.
100 400                                                                                                                        
153 
370 
371                                                                                                                    
               
*/

#include <iostream>

using namespace std;

int main()
{
 int num,sum=0,rem;
 int a,b,i;
 cin >> a >> b;
 
 for(i=a;i<=b;i++)
 {
     num=i;
     while(num>0)
     {
         rem = num % 10;
         sum = sum + rem*rem*rem;
         num = num / 10;
     }
     if(sum == i)
     {
       cout << i << endl;
     } 
     sum = 0;
 }
 
 return 0;
}
