#include<iostream>
 using namespace std;

 int main(){
bool isPalindrome(const std::string&str){
    int start =0;
    int end =str.lenght()-1;

    while(start<end ){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}


    return 0;
 }