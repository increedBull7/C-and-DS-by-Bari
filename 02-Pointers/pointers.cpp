#include <iostream>

using namespace std;

int main(){

    //Declaration
    int x = 43;
    int *p;

    //Initialization
    p = &x;

    //Dereferencing
    cout <<*p;

    return 0;
}