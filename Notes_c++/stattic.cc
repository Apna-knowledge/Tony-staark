#include <iostream>
#include <string >
using namespace std;
class demo
{
private:
    int x, y;
    static int z;

public:
    void getdata(int a, int b)
    {
        x = a;
        y = b;
        z = z + 1;
    }
    void putdata()
    {
        cout << "x=" << x << endl
             << "y=" << y << endl
             << "z" << z << endl;
    }
};

int main()
{

    return 0;
}