/*
Given an array of numbers switch(swap) the adjacent characters.
Sample Testcase :
INPUT
5
3 2 1 2 3
OUTPUT
2 3 2 1 3
*/


#include<iostream>
using namespace std;

int main()
{

    int i, temp, num;
    cin>>num;
    int arr[num];
    for (i = 0; i < num; i++) 
    {
        cin >> arr[i];
    }
    i = 0;
    while (i < num - 1)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        i = i + 2;
    }
    for (i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

