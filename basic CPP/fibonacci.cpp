/*
fibonacci
1 10
0 1 1 2 3 5 8 13 21 34 55
*/
#include <iostream>
using namespace std;

int main()
{
   int a=0,b=1,c;
   int fst,lst;
   cin>>fst>>lst;
   cout<<a<<" "<<b<<" ";
   for(int i=fst;i<lst;i++)
   {
       c = a + b;
       cout << c <<" ";
       a = b;
       b = c;
   }
   
   
    return 0;
}
