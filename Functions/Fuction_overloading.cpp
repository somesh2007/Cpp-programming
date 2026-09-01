#include <iostream>
using namespace std;

int add(int x,int y){
    return x+y;
}
int add(int x,int y,int z){
    return x+y+z;
}
float add(float x,float y){
    return x+y;
}

int main(){
    int a=10,b=30,c,d;
    c=add(a,b);
    d=add(a,b,c);

    float  i=3.5f,j=8.9f,k;
    k=add(i,j);

    cout<<"c: "<<c<<endl;
    cout<<"d: "<<d<<endl;
    cout<<"k: "<<k<<endl;

    return 0;


}

