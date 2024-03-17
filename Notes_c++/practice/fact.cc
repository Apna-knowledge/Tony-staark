#include <iostream>

using namespace std;
class fact
{
    int n, f, i;

public:
    void getcdata()
    {
        f = 1;
        cout << "Enter the number :";
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }
        cout << "Output=" << f << endl;
    }
};

int main()
{
    fact obj;
    obj.getcdata();

    return 0;
}