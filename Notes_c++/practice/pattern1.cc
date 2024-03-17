#include <iostream>
using namespace std;
int main()
{
    // int n, i, j;
    // cout << "Enter the number :";
    // cin >> n;
    // i = 1;
    // while (i <= n)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j = j + 1;
    //     }
    //     cout << "\n";
    //     i = i + 1;
    // }
    int n;
    cout << "enter the number;";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " *"; // i,j
        }
        cout << "\n";
    }

    return 0;
}