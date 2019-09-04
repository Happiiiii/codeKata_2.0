/*
hello
ollhe
yes

odd
add
no
*/
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
  char str1[100],str2[100];
  gets(str1);
  gets(str2);
  int a,b,i,j,count=0;
  a=strlen(str1);
  b=strlen(str2);
  if(a!=b)
  {
      cout<<"no";
  }
  else
  {
      for(i=0;i<a;i++)
      {
          for(j=0;j<b;j++)
          {
              if(str1[i]==str2[j])
              {
                  str2[j]='*';
                  count++;
              }
          }
          
      }
      if(count==a)
          {
              cout<<"yes";
          }
          else
          {
              cout<<"no";
          }
  }
  return 0;
}
