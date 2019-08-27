/*
Frequency of char using map
hello
e-1
h-1
l-2
0-1
12324
1-1
2-2
3-1
4-1
*/


#include <iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
string str;
cin >> str;
map<char,int> m;

for(int i=0;i<str.length();i++)
{
    m[str[i]]++;
}
for(auto itr=m.begin();itr!=m.end();itr++)
{
    cout<<itr->first<<" "<<itr->second << endl;
}
    return 0;
}
