/*
Given a number N, followed by an array of N elements, check if it is sorted.
Input Size : 1 <= N <= 100000
Sample Testcase :
INPUT
3
2 3 7
OUTPUT
yes
*/
#include <iostream>

using namespace std;

int main()
{
int num,i,j;
bool flag=true;
cin >> num;
int arr[num];
for(i=0;i<num;i++)
{
    cin >> arr[i];
}

for(i=0;i<num;i++)
{
   if(arr[i] < arr[i+1])
    {
        flag = true;
        break;
    }
    else
    {
      flag = false;
    }
}

if(flag == true)
{
    cout << "yes";
}
else
{
    cout << "no";
}
    return 0;
}
