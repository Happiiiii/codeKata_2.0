/*
string reverse
hello
olleh
*/
#include <iostream>
#include<string>
using namespace std;

int main()
{
   string str;
   cin >> str;
   for(int i=str.length();i>=0;i--)
   {
       cout << str[i];
   }

    return 0;
}

/*
palindrome(STRING)
madam => yes
hello => no
*/

#include <iostream>
#include<string>
using namespace std;

int main()
{
   string str,rev="";
   cin >> str;
   for(int i=str.length()-1;i>=0;i--)
   {
      rev= rev + str[i];
   }
    if(str != rev)
    
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }
    return 0;
}
