#include <iostream>
using namespace std;

int main(){
    int i,sum=0;
    int A[7]={4,8,6,9,5,2,7};

    for(i=0;i<7;i++){
        sum=sum+A[i];
    }
    cout<<"sum of all array element: "<<sum;
    return 0;
}