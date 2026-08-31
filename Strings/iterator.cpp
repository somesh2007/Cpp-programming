#include <iostream>
#include<string>
using namespace std;

int main(){
    string str="today";
    string::reverse_iterator it;


    for(it=str.rbegin();it!=str.rend();it++){

        cout<<*it;
    }

    return 0;
    
}