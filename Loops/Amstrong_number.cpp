#include <iostream>
using namespace std;

int main(){
    int n,r,sum=0,m;
    cout<<"Enter the number: ";
    cin>>n;
    m=n;

    while(n>0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;

    }

    if(sum==m){
        cout<<m<<" is Amstrong number";
    }else{
        cout<<m<<" is not Amstrong number";
    }

    return 0;


}