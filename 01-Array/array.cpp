#include <iostream>

using namespace std;

int main(){

    int Array[5] = {1,2,3,4,5};
    // cout<<&Array<<endl;
    // cout<<&Array[2]<<endl;
    for(int i = 0; i < 5; i++){
        cout<<"Address : "<<&Array[i]<<" , "<<Array[i]<<endl;
    }

    for(int a: Arrayw)
        cout<<a;



    return 0;
}