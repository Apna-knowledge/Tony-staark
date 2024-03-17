#include <iostream>

using namespace std;
class a
{
protected:
    int a;

public:
    void set_a()
    {
        cout << "Enter the value of A=";
        cin >> a;
    }
    void disp_a()
    {
        cout << endl
             << "value of a=" << a;
    }
};
class b : public a
{
    int b, p;

public:
    void set_b()
    {
        set_a();
        cout << "Enter the value of B=";
        cin >> b;
    }
    void disp_b()
    {
        disp_a();
        cout << endl
             << "value of b=" << b;
    }
    void call_product()
    {
        p = a * b;
        cout << endl
             << "product of" << a << " *" << b << " =" << p;
    }
};
main()
{
    b _b;
    _b.set_b();
    _b.call_product();
    return 0;
}