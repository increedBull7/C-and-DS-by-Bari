#include <iostream>

using namespace std;

class Base{
    public:
    Base(){cout<<"Constructor of Base class\n";}
    Base(int a){cout<<"Base class : "<<a<<endl;}
};

class Derived: public Base{
    public:
    Derived(){cout<<"Constructor of Derived class\n";}
    Derived(int x){cout<<"Derived class : "<<x<<endl;}
    Derived(int x, int z): Base(z){cout<<"Derived class : "<<x<<endl;}
};


int main(){

    Derived d;
    Derived d1(5);
    Derived d2(5,3);

    return 0;
}