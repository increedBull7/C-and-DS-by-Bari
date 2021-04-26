#include <iostream>

using namespace std;

class Rectangle{
    public:

    int length;
    int breadth;

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return (2 * (length + breadth)); 
    }
};





int main(){

    Rectangle r1;
    r1.length = 12;
    r1.breadth = 10;

    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;


    Rectangle *r2;

    r2->length = 100;
    r2->breadth = 200;

    cout<<r2->area()<<endl;



    return 0;
}