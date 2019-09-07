/*
                                                (*****RECRUSION*****)
Let us first define our recursive function to print array elements, say printArray(int arr[], int start, int len). 
The function takes three parameters where first is array to print, second is starting index from where we want to print array
and last is length of the array or upper limit to print elements in array. Here

   1. start >= len is used as base condition of recursion. Which will exit function control to the caller function.
   2. If base condition is not satisfied then print arr[start].
   3. After printing array element make recursive call to print successive array element i.e. printArray(arr, start + 1, len);.
5
1 2 3 4 5 
1 2 3 4 5
*/

#include <iostream>
using namespace std;

int printArray(int arr[], int start, int len);

int main()
{
    int N, i;
    cin>>N;
    int arr[N];
    for(i=0; i<N; i++) 
    {
       cin>>arr[i];
    }
    printArray(arr, 0, N);
    return 0;
}
int printArray(int arr[], int start, int len)
{
    if(start >= len)
    {
        return 0;
    }
        cout << arr[start]<<" ";
        printArray(arr, start + 1, len); 
    
}
