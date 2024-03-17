#include <iostream>
using namespace std;

int main()
{
    int n, squ, sum = 0, d, h;
    cout << "Enter the number :";
    cin >> n;
    squ = n * n;
    h = n;
    while (squ != 0)
    {
        d = squ % 10;
        sum = sum + d;
        squ = squ / 10;
    }
    if (sum == h)
    {
        cout << "It is neon number :";
    }
    else
    {
        cout << "Not Neon number";
    }
    return 0;
}