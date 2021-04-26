#include <iostream>

using namespace std;


int global = 0;

void fun(){
    int x = 0;
    int static static1 = 0;
    static1++;
    global ++;

    x++;
    cout<<"x -> "<<x<<endl;
    cout<<"Static -> " <<static1<<endl;
}

int main(){

    cout<<global<<endl;
    fun();
    cout<<global<<endl;
    global++;
    cout<<global<<endl;
    fun();
    fun();
    cout<<global<<endl;
    fun();
    cout<<global<<endl;

    return 0;
}