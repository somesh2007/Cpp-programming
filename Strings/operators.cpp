#include <iostream>
#include<string>
using namespace std;

int main(){
    string str="Holiday";
    
    cout<<str.at(4)<<endl;
    cout<<str[4]<<endl;

    string str1="Hello";
    string str2=" World";

    str1=str1+str2;
    cout<<str1<<endl;

    str1=str1+", How are you?";
    cout<<str1<<endl;




    return 0;
}