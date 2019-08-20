/*
integer Reverse
123
321
*/

#include <iostream>

using namespace std;

int main()
{
    int num,rem,sum=0;
    cin >>  num;
    while(num>0)
    {
        rem = num % 10;
        sum = (sum*10) + rem;
        num = num / 10;
    }
    cout << sum;
    
return 0;
}

/*
sum of digits
123
1+2+3=6
*/

#include <iostream>

using namespace std;

int main()
{
    int num,rem,sum=0;
    cin >>  num;
    while(num>0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    cout << sum;
    
return 0;
}
