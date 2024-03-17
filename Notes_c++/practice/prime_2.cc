#include <iostream>

using namespace std;
class a
{
    int n, count;

public:
    void getdata()
    {
        cout << "enter the number :";
        cin >> n;
    }
    void putdata()
    {
        count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
            cout << "Prime NUmber :";
        else
            cout << "Not Prime number :";
    }
};

int main()
{
    a obj;
    obj.getdata();
    obj.putdata();

    return 0;
}