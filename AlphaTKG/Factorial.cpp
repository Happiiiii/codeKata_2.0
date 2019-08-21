/*
Factorial number
5
120
*/

#include<iostream>
using namespace std;

int main()
{
int num,fact=1;
cin >> num;
    for(int i=1;i<=num;i++)
    {
     fact = fact * i;
    }
 cout << fact;
}

---------------------------------------------------------------------------------------------------------------------------
/*
factorial using recrusion
5 
120
*/

#include <iostream>
using namespace std;

//Factorial function
int f(int n)
{
   if (n <= 1)
   {
        return 1;
   }
   else 
   {
       return n*f(n-1);
   }
}

int main()
{
   int n;
   cin>>n;
   cout<<f(n);
   return 0;
}
