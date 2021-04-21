#include <iostream>

using namespace std;

int main(){

    cout<<"Enter 3 numbers: ";
    int x,y,z;
    cin>>x>>y>>z;

    if(x > y && x > z)
        cout<<x<<" is greatest!\n";
    else if (y > z)
        cout<<y<<" is greatest!\n";
    else 
        cout<<z<<" is greatest!\n";
        

    return 0;
}