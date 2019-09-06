/*
2 4 3
4
*/
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,max;
    cin >>a>>b>>c;
    max = ( a>b && a>c ) ? a : ( b>c ) ? b : c; 
    cout << max;

    return 0;
}
