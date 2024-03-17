#include<iostream>
//Today leran  function Over Loading------->>>>>>>> 
using namespace std;
int add(int a,int b){
    return a+b;
    cout<<"Using function with 2 aargument :"<<endl;
}
int add(int a,int b ,int c){
    cout<<"Using function with 3 aargument :"<<endl;

    return a+b+c;
}
int main(){
    cout<<"The sum of 3 and 6 is :"<<add(3,6)<<endl;
    cout<<"The sum 3,7,and 6 is :"<<add(3,7,6)<<endl;


    return 0;
}