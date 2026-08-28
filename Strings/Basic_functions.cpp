#include <iostream>
#include<string>
using namespace std;

int main(){
    string str="Hello";

    cout<<str.length()<<endl;
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl;
    cout<<str.append(" world")<<endl;
    cout<<str.insert(3,"oo")<<endl;
    

     

    return 0;

}