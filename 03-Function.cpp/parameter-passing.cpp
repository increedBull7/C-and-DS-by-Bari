#include <iostream>

using namespace std;

// Call by value

void Swap(int x , int y){
    int temp;

    temp = x;
    x = y;
    y = temp;
}

// Call by address

void Swapp(int *x , int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

// Call by reference 

void Swappp(int &x , int &y){
    int temp;

    temp = x;
    x = y;
    y = temp;
}
int main(){

    int x = 400;
    int y = 500;

    Swap(x, y);
    cout<<x <<" "<<y<<endl;

    Swapp(&x, &y);
    cout<<x <<" "<<y<<endl;

    Swappp(x, y);
    cout<<x <<" "<<y<<endl;




    return 0;
} 