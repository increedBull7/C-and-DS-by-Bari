#include "accounts.hpp"
#include <iostream>
using namespace std;

int accountNumberout = 0;

Account::Account(){
    setBalance();
}


void Account::setAccountNumber(){
    accountNumberout++;
    accountNumber = accountNumberout;
}


int Account::getAccountNumber(){ return accountNumber; }


void Account::setName(std::string f, std::string l){ 
    fName = f;
    lName = l;
    setAccountNumber();
    
}

void Account::setPhoneNumber(long m){ phoneNumber = m; }

void Account::setBalance(){ balance = 0;}

void Account::deposit(float money){ balance += money; }

void Account::withdrawl(float money){ balance -= money; }

std::string Account::getFullName(){ return fName + ' ' + lName; }

long Account::getPhoneNumber(){ return phoneNumber; }

float Account::getBalance(){ return balance; }

ostream & operator<<(ostream &out, Account &a){
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$$ Account Number: "<<a.getAccountNumber()<<endl;
    cout<<"$$ Name: "<<a.getFullName()<<endl;
    cout<<"$$ Phone: "<<a.getPhoneNumber()<<endl;

    if(a.balance != 0)
        cout<<"$$ Available Balance: "<<a.balance<<endl;
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    return out;

}
istream & operator>>(istream &in, Account &a){
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$$ Enter your First Name: ";
    string fname, lname;
    cin>>fname;
    cout<<"$$ Enter your last Name: ";
    cin>>lname;
    a.setName(fname, lname);
    cout<<"$$ Enter your Phone Number: ";
    long number;
    cin>>number;
    a.setPhoneNumber(number);
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";

    return in;
}
