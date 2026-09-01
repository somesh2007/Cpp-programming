#include <iostream>
using namespace std;

int g=5; //global variable
void fun(){
    int a=10; //local variable
    a++;
    g++;
    cout<<a<<" "<<g<<endl;


}
int main(){
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
}