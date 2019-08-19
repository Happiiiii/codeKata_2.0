/*
Given a number N and an array of N numbers, print all elements lesser than N.
Input Size : 1 <= N <= 10000
Sample Testcase :
INPUT
5
31 14 15 7 2
OUTPUT

*/

#include <iostream>

using namespace std;

int main()
{

    int num,i,temp;
    cin >> num;
    int arr[num];
    for(i=0;i<num;i++)
    {
        cin >> arr[i];
    }
    
    temp = arr[num - 1];
    
    cout << temp;
    return 0;
}
