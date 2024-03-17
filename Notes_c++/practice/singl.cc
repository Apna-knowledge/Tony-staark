#include <iostream>

using namespace std;
class vechile
{
public:
    vechile()
    {
        cout << "These is a vecile:";
    }
};
class car : public vechile
{
};
int main()
{

    car obj;
    return 0;
}
