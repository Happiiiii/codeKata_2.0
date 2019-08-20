/* 
array merge sort
3 2
[2 4 6]
[3 5]
o/p => [2 3 4 5 6]
*/
#include <iostream>
using namespace std;

int main() {
	int fst,snd,i=0,j=0;
	cin >> fst >> snd;
	int sum = fst + snd;
	int a1[fst];
	int a2[snd];
	int res[sum];
	for(int i=0;i<fst;i++){
		cin>>a1[i];
	}
	for(int j=0;j<snd;j++){
		cin>>a2[j];
	}
	sum=0;
	while( i<fst && j<snd )
	{
	    if(a1[i] < a2[j])
	    {
	        res[sum] = a1[i];
	        i++;
	        sum++;
	    }
	    else
	    {
	        res[sum] = a2[j];
	        j++;
	        sum++;
	    }
	}
	while(i < fst)
	{
	    res[sum] = a1[i];
	    i++;
	    sum++;
	}
	while(j < snd)
	{
	    res[sum] = a2[j];
	    j++;
	    sum++;
	}
	for(int i=0;i<sum;i++)
	{
	    cout<<res[i];
	}
	return 0;
}
