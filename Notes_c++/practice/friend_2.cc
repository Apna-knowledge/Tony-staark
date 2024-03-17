#include<iostream>
using namespace std;
class B;
class A{
int a;
public:
void getdata(){
cout<<"Enter the number :";
cin>>a;
}
friend void max(A,B);

};
class A;
class B{
int b;
public:
void putdata(){
    cout<<"Enter the nuber of b:";
    cin>>b;
}
friend void max(A aa,B.bb){
    if(aa.a>bb.b)
    cout<<"max="<<aa.a;
    else
    cout<<"Max="<<bb.b;
}
};

int main(){ 

    return 0;
}