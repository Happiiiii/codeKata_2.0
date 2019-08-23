/*
sum of elements => array
*/

#include<iostream>
using namespace std;

int main()
{
    int num,i,sum=0;
    cin >> num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin >> arr[i];
    }
    
    for(i=0;i<num;i++)
    {
        sum = sum + arr[i];
    }
     cout << sum;
}


/*sum of elements 
=> 5
(5+4+3+2+1)=15*/

#include <iostream>

using namespace std;

int main()
{
    int num,i,sum=0,rem;
    cin >> num;
   while( num > 0)
    {
     rem = num%10;
     sum = sum + rem;
     num = num/10;
    }
    cout << sum;
    return 0;
}
