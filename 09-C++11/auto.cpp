#include <iostream>

using namespace std;



int main(){

    auto x = 33.4 * 'x' * 45 + 345676.543;

    cout<<typeid(x).name()<<endl;

    return 0;
}