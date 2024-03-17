#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chik_bin(void);
};

void binary :: read (void){
    cout<<"enter A binary number :"<<endl;
    cin>>s; 

}
void binary :: chk_bin(void){
    for(int i=0; i <s.lenght();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary formate"<<endl;
            exit(0);
        }
    }

}
int main()
{
// TODAY I LEARN THESE TOPIC==>>(OOPs RECAP & NESTING OF MEMBER FUNCTION)----->>>>>>
    // OOps - classes and object..

    // C++-->initially called ---->>C with classes by stroustroup
    // clas---->>>extenstion of structure(in c)
    // structures had limitation--->>
    /*  --->>>member are public
        --->>>No methode
        */
    // classes = >>>structure  +   more
    // classes--- >> can have methode and propertiies
    // classes -->> can make few member as private & few as public
    // structure in c++ are typedefed
    // you can declare object along with the class declartion
    // class employee{
    // class definition
    // }tony,rohan,lovish;
    // }
    // tony.salary = 8 makes no sence if salary is private ---- >>
    return 0;
}