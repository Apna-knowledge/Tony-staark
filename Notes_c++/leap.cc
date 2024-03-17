// These program to learn leap Year

#include <iostream>
using namespace std;
int main()
{
    int Year;
    cout << "Enter year" << endl;
    cin >> Year;
    if (Year % 4 == 0 || Year % 100 != 0 && Year % 400 == 0)
    {
        cout << "leap year" << endl;
    }
    else
        cout << "Not leap Year ";

    return 0;
}