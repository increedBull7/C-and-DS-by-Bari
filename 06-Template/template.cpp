#include <iostream>

using namespace std;

template<class T>

T maximum(T x, T y){
    return x > y?x:y;
}



int main(){

    cout<<maximum(4,6)<<endl;
    cout<<maximum(4.5,2.6)<<endl;
    cout<<maximum("Atul", "Prachi")<<endl;
    cout<<maximum('r', 'e')<<endl;

    return 0;
}