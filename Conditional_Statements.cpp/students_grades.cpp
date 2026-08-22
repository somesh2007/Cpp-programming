#include <iostream>
using namespace std;

int main(){
    int sub1,sub2,sub3;

    cout<<"Enter marks of subject1: ";
    cin>>sub1;
    cout<<"Enter marks of subject2: ";
    cin>>sub2;
    cout<<"Enter marks of subject3: ";
    cin>>sub3;

     float total = (sub1+sub2+sub3);
     float Avg = total/3;

    if(Avg>=75){
        cout<<"Grade:A";
    }else if(Avg>=35 && Avg<75){
        cout<<"Grade:B";
    }else{
        cout<<"grade:C";
    }

    return 0;



}