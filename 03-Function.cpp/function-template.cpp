#include <iostream>

using namespace std;

template<class T>

T max(T x, T y){
    if(x > y)
        return x;
    else 
        return y;
}
 

int main(){

    cout<<max(5, 3)<<endl;

    //cout<<max(34.34f, 43.2f)<<endl;



    return 0;
}