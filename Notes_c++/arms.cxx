#include <iostream>
using namespace std;
class abc;
class xyz
{
    int x;

public:
    void set_data(int a)
    {
        x = a;
    }
    friend void max(xyz, abc);
};
class abc
{
    int y;

public:
    void set_data(int a)
    {
        y = a;
    }
    friend void max(xyz, abc);
};
void max(xyz t1, abc t2)
{
    if (t1.x > t2.y)
    {
        cout << t1.x;
    }
    else
    {
        cout << t2.y;
    }
}
int main()
{
    abc_ABC;
    xyz_XYZ;
    _ return 0;
}