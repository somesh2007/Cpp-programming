#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char *s;
    cout<<"Enter a string: ";
    cin.getline(s,20);
    
    cout<<"Length of string: "<<strlen(s);

    return 0;

}