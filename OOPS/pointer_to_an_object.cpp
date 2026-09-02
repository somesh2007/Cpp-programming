#include <iostream>
using namespace std;

class Rectangle{
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
    Rectangle *ptr=new Rectangle();
    ptr->length=10;
    ptr->breadth=7;

    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;

    
}