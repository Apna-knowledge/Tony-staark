#include<iostream>
//STATIC FUNTION USING  THESE PROGRAMME ---->>>>>

using namespace std;
int product(int a,int b){
    static int c=0;//These exicute inlu one time -->>
c=c+1;//next time function is run ,the value ofn c will be retained---->>>>>
    return a*b+c;

}

int main(){
    
int a,b;
cout<<"Enter the value of a and b is :"<<endl;
cin>>a>>b;
cout<<"The Output of a and b is :"<<product(a,b)<<endl;
cout<<"The Output of a and b is :"<<product(a,b)<<endl;
cout<<"The Output of a and b is :"<<product(a,b)<<endl;
cout<<"The Output of a and b is :"<<product(a,b)<<endl;
cout<<"The Output of a and b is :"<<product(a,b)<<endl;
cout<<"The Output of a and b is :"<<product(a,b)<<endl;



    return 0;
}