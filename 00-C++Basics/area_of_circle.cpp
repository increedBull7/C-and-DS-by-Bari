#include <iostream>

#define pie 3.14

using namespace std;

int main(){

    cout<< "Enter the radius of circle: ";
    int r;
    cin>> r;
    float area = pie * pow(r,2);
    cout<<"Area of circle is : "<<area<<endl;

    return 0;
}