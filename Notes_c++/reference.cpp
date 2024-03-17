#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    int &y = x;
    cout << x << endl;
    cout << y << endl;
    int num1, num2;
    cin >> num1 >> num2;
    int sum = num1 + num2;
    int &odd = sum;
    cout << "The  of two given no is" << odd << endl;

    return 0;
}