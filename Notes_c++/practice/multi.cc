#include <iostream>
using namespace std;

class a
{
protected:
    int a;

public:
    void input()
    {
        cout << "Enter the nnuber of A :";
        cin >> a;
    }
};
class b
{
protected:
    int b;

public:
    void output()
    {
        cout << "Enter the number of B :";
        cin >> b;
    }
};
class c : public a, public b
{
public:
    void addition()
    {
        cout << "Addition=" << a + b;
    }
};
int main()
{
    c aa;
    aa.input();
    aa.output();
    aa.addition();
    return 0;
}
