#include <iostream>

using namespace std;

int main(){

    cout <<"Enter a number: ";
    int num;
    cin >> num;

    int factor = 0;

    for(int i = 2; i <= num; i++){
        if(num % i == 0)
            factor++;
    }

    if(factor == 1)
        cout<<num<<" is prime.\n";
    else
        cout<<num<<" is not prime.\n";
    return 0;
}