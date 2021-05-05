#include <iostream>

using namespace std;

class Rectangle{
    int length;
    int breadth;

    public:
    Rectangle(int l = 0, int b = 0);
    void set_length(int l);
    void set_breadth(int b);
    int get_length();
    int get_breadth();
    int area();
    int perimeter();
};


class Cuboid:public Rectangle{
    int height;
    public:
    Cuboid(int l = 0, int b= 0, int h = 0);
    void set_height(int h);
    int get_height();
    int area();
    int volume();
};




int main(){

    Rectangle r(20, 40);
    cout<<"Length of rectangle is : "<<r.get_length()<<endl;
    cout<<"Breadth of rectangle is : "<<r.get_breadth()<<endl;
    cout<<"Area of rectangle is : "<<r.area()<<endl;
    cout<<"Perimeter of rectangle is : "<<r.perimeter()<<endl;


    Cuboid c(30, 40, 50);
    cout<<"Length of Cuboid is : "<<c.get_length()<<endl;
    cout<<"Breadth of Cuboid is : "<<c.get_breadth()<<endl;
    cout<<"Height of Cuboid is : "<<c.get_height()<<endl;
    cout<<"Area of Cuboid is : "<<c.area()<<endl;
    cout<<"Volume of Cuboid is : "<<c.volume()<<endl;
 


    return 0;
}


Rectangle::Rectangle(int l, int b){
    this->length = l;
    this->breadth = b;
}

void Rectangle::set_length(int l){
    this->length = l;
}

void Rectangle::set_breadth(int b){
    this->breadth = b;
}

int Rectangle::get_length(){
    return this->length;
}

int Rectangle::get_breadth(){
    return this->breadth;
}

int Rectangle::area(){
    return this->breadth * this->length;
}

int Rectangle::perimeter(){
    return 2 * (this->length + this->breadth);
}


Cuboid::Cuboid(int l , int b, int h){
    set_length(l);
    set_breadth(b);
    set_height(h);
}

void Cuboid::set_height(int h){
    this->height = h;
}

int Cuboid::get_height(){
    return this->height;
}

int Cuboid::area(){
    return 2 *(get_height() * get_breadth() + get_breadth() * get_length() + get_length() * get_height());
}

int Cuboid::volume(){
    return this->height * get_height() * get_breadth();
}

