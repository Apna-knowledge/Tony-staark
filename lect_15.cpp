#include<iostream>

using namespace std;
int sum(int a,int b){//function protype 
/*Here is (int ,int ) Is Actual arrgument not formal argument so 
you change these arrgument You can write only (int ,int )*/
    int c=a+b;
    return c;
}
/*Using Call byb value and call by conference---->>>>>>>>
*/
int main(){
int numn1,num2;
cout<<"Enter the first nunber :"<<endl;
cin>>numn1;
cout<<"Enter the secound number :"<<endl;
cin>>num2;
cout<<"The sum of two number is "<<sum(numn1,num2);//function call-->>>

    return 0;
}
