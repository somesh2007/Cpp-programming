#include <iostream>
using namespace std;

int main(){
    int n,i,count=0;
    cout<<"Enter the number: ";
    cin>>n;

    for(i=1;i<=n;i++){

        if(n%i==0){
            count++;
        }

    }
    if(count==2){
        cout<<n<<" is prime number";
    }else{
        cout<<n<<" is not prime number";
    }

    return 0;


    





}
