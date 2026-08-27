#include <iostream>
using namespace std;

int main(){
    int x=10;
    int *p=&x; //declaration and initialization of pointer

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    return 0;
    
}