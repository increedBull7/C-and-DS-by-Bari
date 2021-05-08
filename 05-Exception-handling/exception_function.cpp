#include <iostream>

using namespace std;

int division(int x, int y){
    if(y == 0)
        throw 1;
    return x/y;
}



int main(){

    int x = 8, y = 0, c;

    try{
        c = division(x, y);
        cout<<"Division sucessful "<<c<<endl;
    }
    catch(int t){
        cout<<"Error: Division by zero!\n";
    }

    return 0;
}