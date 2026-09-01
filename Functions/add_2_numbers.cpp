#include <iostream>
using namespace std;

float add(float x,float y){

    float z =x+y;

    return z;
}

int main(){

    float a=2.4,b=3.8,c;
    c=add(a,b);
    cout<<c<<endl;

    return 0;

}