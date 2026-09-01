#include <iostream>
using namespace std;

int Maximum(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }else if(b>c){
        return b;
    }else{
        return c;
    }

}
int main(){
    int a=10,b=4,c=9,result;
    result =Maximum(a,b,c);
    cout<<result<<" is maximum"<<endl;
    return 0;
}
        