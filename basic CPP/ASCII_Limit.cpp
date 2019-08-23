/*
Write a program to print all ASCII character with their values.
a is => 97                                                                                                                     
b is => 98                                                                                                                     
c is => 99                                                                                                                     
d is => 100                                                                                                                    
e is => 101   
*/
#include <iostream>
using namespace std;
int main()
{
char a,b,i;
cin >> a >> b;
for(i=a;i<=b;i++)
{
cout << i << " is => " << int(i) << endl; 
}
return 0;
}
