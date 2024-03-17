#include <iostream>

using namespace std;
class student
{
    int roll;
    string name;
    double fees;

public:
    student()
    {
        cout << "Enter the roll no:";
        cin >> roll;
        cout << "Enter the name:";
        cin >> name;
        cout << "Enter the Fees:";
        cin >> fees;
    }
    void display()
    {
        cout << endl
             << roll << "\t" << name << "\t" << fees;
    }
};
int main()
{
    student s;
    s.display();
    return 0;
}