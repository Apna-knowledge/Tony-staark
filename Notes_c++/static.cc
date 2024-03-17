#include <iostream>
using namespace std;
int num = 0;
void count()
{
    num++;
    cout << num << endl;
};
int main()
{
    count();
    count();
    count();
    count();

    return 0;
}
