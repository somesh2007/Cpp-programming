#include <iostream>
#include<string>
using namespace std;

int main(){

    string str="madam";
    int length=str.length();

            for(int i=length-1;i>=0;i--){

                cout<<str[i];

            }
        
        return 0;
    
}