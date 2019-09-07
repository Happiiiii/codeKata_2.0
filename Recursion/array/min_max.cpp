/*
--------------------------------------------------(Recursion)--------------------------------------------------------------------
5
2 4 3 5 1
Min => 1
Max => 5
*/

#include <iostream>
    using namespace std;
    
     
    // Function declarations
    int Findmaxnumber(int arr[], int i, int len);
    int Findminnumber(int arr[], int i, int len);
     
     
    int main()
    {
        int  num, max, min;
        int j;
        cin>>num;
        int arr[num];
        for(j=0; j<num; j++)
        {
           cin>>arr[j];
        }
     
        max = Findmaxnumber(arr, 0, num);
        min = Findminnumber(arr, 0, num);
     
        cout<<"Min => "<<min<<endl;
        cout<<"Max => "<<max<<endl;
     
        return 0;
    }
     
    int Findmaxnumber( int arr[], int i, int len )
    {
        int max;
        if( i >= len-2)
        {
            if(arr[i] > arr[ i + 1 ])
            {
                return arr[i];
            }
            else
            {
                return arr[ i + 1 ];
            }
        }
     
        max = Findmaxnumber(arr, i + 1, len);
     
        if(arr[i] > max)
        {
            return arr[i];
        }
        else
        {
            return max;
        }
    }
    
    int Findminnumber(int arr[], int i, int len)
    {
        int min;
     
        if( i >= len-2 )
        {
            if(arr[i] < arr[ i + 1 ])
            {
                return arr[i];
            }
            else
            {
                return arr[i + 1];
            }
        }
     
        min = Findminnumber(arr, i + 1, len);
     
        if(arr[i] < min)
        {
            return arr[i];
        }
        else
        {
            return min;
        }
    }
