#include <iostream>

using namespace std;

int main(){

    int *p;
    p = new int[2000];

    p[0] = 54;

    cout<<p<<endl;
    cout<<p[0]<<endl;

    delete []p;

    cout<<p<<endl;

    cout <<p[0]<<endl<<endl;

    int *q;

    q = new int[5];

    for(int i = 0; i < 5; i++)
        q[i] = i;
    
    for(int i = 0; i < 5; i++)
        cout<<q[i];

    cout<<endl;

    q = new int[10];

    for(int i = 0; i < 9; i++)
        cout<<q[i];




    return 0;
}