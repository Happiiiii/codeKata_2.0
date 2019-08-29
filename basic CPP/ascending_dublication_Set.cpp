/*
ascending set;
13 23 42 65 75 77 
*/
#include <iostream>
#include <set>
using namespace std;
int main ()
{
  int myints[] = {75,23,65,42,13,77};
  set<int> myset (myints,myints+6);
  for (auto it=myset.begin(); it!= myset.end(); ++it)
  {
    cout << ' ' << *it;
  }
  return 0;
}
