#include<iostream>

using namespace std;

class Base{
    public:
    int x;
    void show(){
        cout<<"This is from base class : "<<x<<endl;
    }
};

class Derived:public Base{
    public:
    int y;
    void display(){
        cout<<"This is from derived class : "<<x<<" "<< y<<endl;
    }
};





int main(){

    Base b;
    b.x = 100;
    b.show();

    Derived d;
    d.y = 200;
        d.x = 300;

    d.display();
    d.show();



    return 0;
}