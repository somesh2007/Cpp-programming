#include <iostream>
using namespace std;

class Rectangle{
    
private:
    int length;
    int breadth;

public:

    Rectangle(){
        length=1;
        breadth=1;
    }
    Rectangle(int l,int b){ //parameterised
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r){ //copy constructor
        length=r.length;
        breadth=r.breadth;
    }



    void setLength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth=b;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;

    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }


};

int main(){
    Rectangle r1(10,8);
    Rectangle r2(r1);
    cout<<r1.area();



}