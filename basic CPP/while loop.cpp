/*
Natural numbers 1-n
10                                                                                                                            
1 2 3 4 5 6 7 8 9 10   
*/
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
  int num;
  cin>>num;
  int i=1;
  while(i<=num)
  {
      cout<<i<<" ";
      i++;
  }
}
----------------------------------------------------------------------------------------------------------------------------------
/*
reverse Natural number n-1
5
5 4 3 2 1
*/

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
  int num;
  cin>>num;
  int i=num;
  while(i>0)
  {
      cout<<i<<" ";
      i--;
  }
//   for(int i=num;i>0;i--)
//   {
//       cout<<i<<" ";
//   }
}

----------------------------------------------------------------------------------------------------------------------------------
/*
alphabet
a b c d e f g h i j k l m n o p q r s t u v w x y z  
*/
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
  char alphabet='a';
  while(alphabet<='z')
  {
      cout<<alphabet<<" ";
      alphabet++;
  }
}
---------------------------------------------------------------------------------------------------------------------------------
/*
Enen  number range
10
2 4 6 8 10

*/
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
 int num;
 cin>>num;
 int i=1;
 while(i<=num)
 {
     if(i%2==0)
     {
       cout<<i<<" ";
     }
     i++;
 }
}

---------------------------------------------------------------------------------------------------------------------------------
