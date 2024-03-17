#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter the number :";
    i = 1;
    while (i <= n)
    {
        while (j <= i)
        {
            cout << " " << i;
            j = j + 1;
        }
        cout << "\n";
        i = i + 1;
    }

    return 0;
}