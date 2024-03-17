#include <iostream>

using namespace std;
int prime(int a, int b);
int main()
{
    int n, m;
    cout << "Enter the  two number:";
    cin >> n >> m;
    prime(m, n);
}
int prime(int a, int b)
{
    int f = 0, i;
    while (a <= b)
    {
        f = 0;
        for (i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << a << "Is a prime number :" << endl;
        a++;
    }
}
