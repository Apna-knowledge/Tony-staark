#include <iostream>

using namespace std;
class a
{
    int n;

public:
    void input()
    {
        cout << "Enter the number :";
        cin >> n;
    }
    void show()
    {
        if (n % 2 == 0)
        {
            cout << "Even number :";
        }
        else
            cout << "Odd numeber";
    }
};
int main()
{
    a obj;
    obj.input;
    obj.show;

    return 0;
}
