#include <iostream>
using namespace std;

int main(){
    cout<<"Menu\n";
    cout<<"1. Add\n"<<"2. Sub\n"<<"3. Mul\n"<<"4. Div\n";

    int option;
    cout<<"Enter your choice: ";
    cin>>option;
    cout<<endl;

    float n1,n2,result;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter secound number: ";
    cin>>n2;

    switch(option){
        case 1: result=n1+n2;
        cout<<"The Addition is: "<<result;
        break;
        case 2: result=n1-n2;
        cout<<"The Subtraction is: "<<result;
        break;
        case 3: result=n1*n2;
        cout<<"The Multiplication is: "<<result;
        break;
        case 4: result=n1/n2;
        cout<<"The Division is: "<<result;
        break;
        default: cout<<"Invalid result";

    }
    return 0;

}
