#include <iostream>

using namespace std;

class Complex{
    int real;
    int img;

    public:

    Complex(int r = 0, int i = 0);
    //int get_real();

    //Complex add(Complex c);
    Complex operator+(Complex c);

    friend ostream & operator<<(ostream &o, Complex &c);
    friend istream & operator>>(istream &i, Complex &c);


};



int main(){

    Complex C1(4 ,3), C2(3,5);

    Complex C3;

    C3 = C1 + C2;

    cout<<C3;

    cin>>C1;

    //C3 = C1.add(C2);



    return 0;
}


Complex::Complex(int r , int i ){
    this->real = r;
    this->img = i;
}

// Complex Complex::add(Complex c){
//     Complex temp;

//     temp.real = this->real + c.real;
//     temp.img = this->img + c.img;

//     return temp;
// }

Complex Complex::operator+(Complex c){
    Complex temp;
    temp.real = this->real + c.real;
    temp.img = this->img + c.img;
    return temp;
}


// int Complex::get_real(){
//     return this->real;
// }

ostream & operator<<(ostream &o, Complex &c){
    o<<c.real<<" + "<<c.img<<"i";
    return o;
}

istream & operator>>(istream &i, Complex &c){
    cout<<"Enter real part: ";
    i>>c.real;
    cout<<"Enter imaginary part: ";
    i>>c.img;

    return i;
}
