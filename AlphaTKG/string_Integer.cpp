/*
string to integer
*/
#include<string>
#include<typeinfo>
using namespace std;
int main()
{
int num;
cin >> num;
string str = to_string(num);  //integer to string
cout << str << endl;
cout << typeid(str).name() << endl;
int temp = stoi(str);         //string to integer
cout <<  temp << endl;
cout << typeid(temp).name();
return 0;
}
