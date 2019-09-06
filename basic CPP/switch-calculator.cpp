/*
+ 
2 3
5
*/
    # include <iostream>
    using namespace std;
    int main()
    {
        char op;
        cin >> op;
        float num1, num2;
        cin >> num1 >> num2;
        switch(op)
        {
            case '+':
                cout << num1+num2;
                break;
            case '-':
                cout << num1-num2;
                break;
            case '*':
                cout << num1*num2;
                break;
            case '/':
                cout << num1/num2;
                break;
        }
        return 0;
    }
