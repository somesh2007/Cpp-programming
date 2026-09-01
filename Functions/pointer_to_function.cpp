#include <iostream>
using namespace std;

int maximum(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int minimum(int x,int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}

int main(){
    int(*fp)(int,int);
    
    fp=maximum;
    cout<<"maximum: "<<(*fp)(10,5)<<endl;

    fp=minimum;
    cout<<"minimum: "<<(*fp)(10,5)<<endl;

    return 0;
}
