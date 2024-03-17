#include <iostream>
using namespace std;
class a
{
    int n1, n2, temp;

public:
    int take()
    {
        cout << "Enter the two number :";
        cin >> n1 >> n2;
    }
    int set()
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
        cout << n1 << " " << n2;
    }
};
int main()
{
    a obj;
    obj.take();
    obj.set();
    return 0;
}