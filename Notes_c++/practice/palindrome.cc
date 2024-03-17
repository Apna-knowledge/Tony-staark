#include <iostream>
using namespace std;

class a
{
    int n, r, c, s;

public:
    void getdata()
    {
        cout << "Enter the number:";
        cin >> n;
    }
    void show()
    {
        c = n;
        while (n > 0)
        {
            r = n % 10;
            s = (s * 10) + r;
            n = n / 10;
        }
        if (c == s)
            cout << "Palindrone number :";
        else
            cout << "Not ";
    }
};
int main()
{
    a obj;
    obj.getdata();
    obj.show();
    return 0;
}