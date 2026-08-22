#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a,b,c,root1,root2;

    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    root1 = (-b+sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"root1: "<<root1<<endl;
    root2 =  (-b-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"root2: "<<root2;

    return 0;



}