#include <iostream>
using namespace std;

int main()
{
    char operation;
    double num1, num2;
    cout << "Enter operation(+,-,*,/):" << endl;
    cin >> operation;
    cout << "Enter two number num1,num2";
    cin >> num1 >> num2;
    switch (operation)
    {
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2;
        break;
    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2;
        break;
    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << num1 << "/" << num2 << "=" << num1 / num2;
        }
        else
        {
            cout << "Error Division by zero.";
        }
        cout << num1 << "/" << num2 << "=" << num1 / num2;
        break;
    }

    return 0;
}