#include <iostream>

using namespace std;

int main(){

    int array[5] = {2,43,56,78,88};
    int key;
    cout<<"Enter the key: ";
    cin >> key;

    int low = 0, high = 4, mid;

    while(low <= high){
        mid = (low + high)/2;
        if(array[mid] == key){
            cout<<key<<" found at "<<mid<<endl;
            return 0;
        }
        else if(key > array[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    cout<<"Not found!\n";

    return 0;
}