#include <iostream>
using namespace std;

template<class T>

T maximum(T x,T y){

    if(x>y){
        return x;
    }
    else{
    return y;
    }
}

int main(){

    cout<<maximum(12,7)<<endl;
    cout<<maximum(5.7,8.9)<<endl;
    cout<<maximum(4.8f,8.9f)<<endl;

    return 0;
}