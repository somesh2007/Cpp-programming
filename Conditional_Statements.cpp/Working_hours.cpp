#include <iostream>
using namespace std;

int main(){
    int hour;
    cout<<"Enter hour: ";
    cin>>hour;

    if(hour>=9 && hour<=18){
        cout<<"It is Working hour";
    }else{
        cout<<"It is Leisure hour";
    }
    return 0;
}