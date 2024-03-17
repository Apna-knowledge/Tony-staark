#include <iostream>
// Today I am  learn Power of number --->>>
using namespace std;
int main()
{
    int num;
    int power;
    cout << "Enter the number :\f";
    cin >> num;
    cout << "Enter the power";
    cin >> power;
    int product = 1;
    for (int i = 1; i <= power; i++)
    {
        product = product * num;
    }
    cout << endl;
    cout << num << "power" << power << "=" << product;

    return 0;
}