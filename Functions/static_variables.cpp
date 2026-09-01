#include <iostream>
using namespace std;

void fun(){
    static int s=10; //static variable 
    s++;
    int a=6; //local variable
    a++;
    cout<<s<<" "<<a<<endl;
}

int main(){

    fun();
    fun();
    fun();
}