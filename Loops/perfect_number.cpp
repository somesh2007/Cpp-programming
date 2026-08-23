#include <iostream>
using namespace std;

int main(){
    int n,i,sum=0;
    cout<<"Enter the number: ";
    cin>>n;

    for(i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(2*n==sum){
        cout<<n<<" is perfect number";
    }else{
        cout<<n<<" is not perfect number";
    }
    return 0;
}