#include<iostream>

using namespace std;
class a{
    int roll;
    public:
    void getdata(){
        cout<<"Enter the rooll no:";
        cin>>roll;
    }
    void putdata(){
        cout<<"Roll no="<<roll;
    }
};
class b:public a{
    int sub1,sub2;
    public:
    void gewarks(){
        cout<<"Enter the two marks :";
        cin>>sub1>>sub2;
    }
    void putwarks(){
        cout<<"/n marks="<<sub1<<"/marks="<<sub2;

    }
};
class c:public a,public b{
    int sports;
    public:
    void getsp(){ 
cout<<"/nEnter sports Marks=";
cin>>sports;
    }
}



int mian(){


    return 0;
}