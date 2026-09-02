#include <iostream>
using namespace std;

 class Reactangle{
    public:
    int length,breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }

 };

 int main(){
    Reactangle r1;
    r1.length=5;
    r1.breadth=20;

    cout<<"Area is: "<<r1.area()<<endl;
    cout<<"perimeter is: "<<r1.perimeter()<<endl;


 }