/*
Leap year

    if(year is divisible by 4){
        if(year is divisible by 100){
            if(year is divisible by 400){
                it is leap
            }
            else it not is leap
        }
        else it is leap
    }
    else it is not

*/





#include <iostream>

using namespace std;

int main(){

    int year;
    cout << "Enter the value of year: ";
    cin >> year;

    if( year < 0)
        cout<<"Invalid data!!\n";

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                cout<<year << " is leap year!\n";
            }
            else{
                cout <<year <<" is not leap year!\n";
            }
        }
        else{
            cout<<year <<" is leap year!\n";
        }
    }
    else{
        cout<<year <<" is not leap year!\n";
    }
    

    return 0;
}