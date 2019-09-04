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
  int a500,a100,a50,a10;
  a500=a100=a50=a10=0;
  if(amt>500)
  {
      a500=amt/500;
      amt = amt - (a500*500);
  }
    cout<<a500;
    return 0;
}
