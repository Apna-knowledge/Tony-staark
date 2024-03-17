// //Static variable in c++
// #include <iostream>
// #include <string>
// using namespace std;
// void demo()
// {
//     static int count = 1;
//     cout << count << " ";
//     count++;
// }
// int main()
// {
//     for (int i = 0; i < 5; i++)
//         demo();
//     // demo();
//     // demo();
//     // demo();
//     // demo();
//     return 0;
// }
#include <iostream>
using namespace std;
class tony
{
public:
    static int i;

    tony(){

    };
};
int tony::i = 1;
int main()
{
    tony obj1;
    tony obj2;
    obj1.i = 23;
    obj2.i = 34;
    cout << obj1.i << " " << obj2.i << endl;
    return 0;
}