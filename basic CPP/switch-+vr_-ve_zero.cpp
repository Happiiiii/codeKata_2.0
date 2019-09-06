/*
1
+ve
-1
-ve
0
zero
*/

#include <iostream>

using namespace std;

int main()
{
int a;
cin>>a;
switch(a>0)
{
    case 1:cout<<"+ve";break;
    case 0:
switch(a<0)
{
    case 0: cout<<"zero";break;
    case 1: cout<<"-ve";break;
    
}
}
}
