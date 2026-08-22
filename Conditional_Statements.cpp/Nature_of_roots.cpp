#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;

    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;

    d=(b*b)-(4*a*c);

    if(d==0){
        cout<<"Roots are real and equal";
    }else if(d>0){
        cout<<"Roots are real and unequal";
    }else{
        cout<<"Roots are imaginary";
    }

    return 0;

}