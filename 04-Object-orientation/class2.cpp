#include <iostream>

using namespace std;



class Rectangle{
    int length;
    int breadth;


    public:

    Rectangle(){
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b){
        set_breadth(b);
        set_length(l);
    }

    //Copy constructor

    Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }

    void set_length(int l){
        if(l < 0)
            this->length = 1;
        else 
            this->length = l;
    }
    void set_breadth(int b){ 
        if(b < 0)
            this->breadth = 1;
        else         
            this->breadth = b;
    }

    int get_length(){return this->length;}
    int get_breadth(){return this->breadth;}

    int area(){
        return this->length * this->breadth;
    }

    int perimeter(){
        return 2 *(this->length * this->breadth);
    }

    bool is_square();

};





int main(){

    Rectangle red;

    red.set_length(5);
    red.set_breadth(6);

    cout<<red.area()<<endl;
    cout<<red.perimeter()<<endl;
    cout<<red.get_length()<<endl;
    cout<<red.is_square()<<endl;
    
    

    return 0;
}


bool Rectangle::is_square(){
    if (this->length == this->breadth)
        return true;
    else 
        return false; 
}