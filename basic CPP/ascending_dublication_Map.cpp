/*
ascending_dublication_Map.
a=>200
b=>100
c=>100
*/
#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;
  
  mymap['c'] = 200;
  mymap['b'] = 100;
  mymap['a'] = 200;
  mymap['c'] = 100;

 for (auto it=mymap.begin(); it!=mymap.end();it++) //rbegin(),rend() => descending order
  {
     cout << it->first << " => " << it->second << '\n';
  }
  return 0;
}
