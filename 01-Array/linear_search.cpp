#include <iostream>

using namespace std;

int main(){

    int array[5] = {3,5,12,6,45};

    int search;
    cout<<"Enter a number: ";
    cin >>search;

    for(int i = 0; i < 5; i++){
        if(array[i] == search){
            cout<<array[i]<< " is found at "<< i <<" position. \n";
            exit(0);
        }
    }

    cout<<"Not found!\n";

    return 0;
}