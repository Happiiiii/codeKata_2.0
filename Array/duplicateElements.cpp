/*
Write a program to count total number of duplicate elements in an array.
6                                                                                                                              
1 1 2 2 3 3                                                                                                                    
3 
*/
    #include <iostream>
    using namespace std;
     
    int main()
    {
        int num;
        int i, j, count = 0;
        cin>>num;
        int arr[num];
        for(i=0;i<num;i++)
        {
            cin>>arr[i];
        }
        
        for(i=0; i<num; i++)
        {
            for(j=i+1; j<num; j++)
            {
            if(arr[i] == arr[j])
                {
                    count++;
                    break;
                }
            }
        }
        for(i=0;i<num;i++)
        {
            if(count==1)
            {
                cout<<arr[i];
            }
        }
        cout<<count;
     
        return 0;
    }
