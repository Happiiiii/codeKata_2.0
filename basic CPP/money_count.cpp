/*
4000
8
*/

#include <iostream>

using namespace std;

int main()
{
int amt;
cin>>amt;
int a500,a100,a50;
a500=a100=a50=0;
if(amt>=500)
{
a500=amt/500;
amt=amt%500;
}
if(amt>=100)
{
    a100=amt/100;
    amt=amt%100;
}
if(amt>=50)
{
 a50=amt/50;
 amt=amt%50;
}

cout<<a500<<" "<<a100<<" "<<a50;
}
