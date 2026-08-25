#include <iostream>
using namespace std;

int main(){
      float avg;
      int sum=0,i;
      int A[5]={4,8,4,9,6};

    for(i=0;i<5;i++){
        sum=sum+A[i];
       
    }
    avg = (float) sum/5;
    cout<<"Average of all array elements: "<<avg;
    return 0;
}