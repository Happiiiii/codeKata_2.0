/*
Write a program to delete all duplicate elements from an array.
6                                                                                                                              
1 2 2 3 4 4                                                                                                                    
1 2 3 4 
*/
    #include <iostream>
    using namespace std;
     
    int main()
    {
        int num;
        cin>>num;
        int i, j, k;
        int arr[num];
        for(i=0; i<num; i++)
        {
            cin>>arr[i];
        }
        
        for(i=0; i<num; i++)
        {
            for(j=i+1; j<num; j++)
            {
                if(arr[i] == arr[j])
               {
                    for(k=j; k<num; k++)
                    {
                        arr[k] = arr[k + 1];
                    }
                    num--;
                    j--;
                }
            }
        }
        for(i=0; i<num; i++)
        {
            cout<<arr[i]<<" ";
        }
     
        return 0;
    }
