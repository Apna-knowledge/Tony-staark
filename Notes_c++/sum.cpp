#include<iostream>

using namespace std;
int mian(){
int n,sum=0;
cout<<"Enter the value of n "<<n<<endl;
cin>>n;
for(int i=1;i<=n;++i){
    sum=sum+i;
}
cout<<"Sum  of first "<<n<<"number is :"<<sum <<endl;

    return 0;
}