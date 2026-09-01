#include <iostream>
using namespace std;

int sum(int a,int b,int c=0){
    return a+b+c;
}

int main(){

    cout<<sum(24,7)<<endl;
    cout<<sum(5,7,9)<<endl;

    return 0;
}