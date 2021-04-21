#include <iostream>

using namespace std;

int main(){

    cout<<"Enter the numbers: ";
    int m, n;
    cin >> m>>n;

    while(m != n){
        if(m > n){
            m -= n;
        }
        else
        {
            n -= m;
        }      
    }
    if(m > n)
        cout<<m <<" is GCD.\n";
    else cout<<n <<" is GCD.\n";

    return 0;
}