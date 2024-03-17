#include <iostream>

using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int num;
    cout << "Enter a number from user :";
    cin >> num;
    if (num < 0)
    {
        cout << "factorial is not defined for negative numbers";
    }
    else
    {
        cout << "factorial of" << num << "=" << factorial(num);
    }
    return 0;
}