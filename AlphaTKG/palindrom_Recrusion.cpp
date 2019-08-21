#include <iostream>
#include <algorithm>
using namespace std;

void reverse(string &temp, int fst, int lst)
{
	if (fst < lst)
	{
		swap(temp[fst], temp[lst]);
		reverse(temp, fst + 1, lst - 1);
	}
}

int main()
{
	string str;
    cin >> str;
    string temp = str;
	reverse(temp, 0, temp.length() - 1);
	if(str == temp)
	{
	    cout<<"yes";
	}
	else
	{
	    cout<<"no";
	}
 
	return 0;
}
