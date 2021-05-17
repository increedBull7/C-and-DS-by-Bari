#include <iostream>

class Account{
    std::string fName; std::string lName;
    long phoneNumber;
    float balance;
    int accountNumber;

    public:
    Account();
    void setAccountNumber();
    int getAccountNumber();
    void setName(std::string f, std::string l);
    void setPhoneNumber(long m);
    void setBalance();
    void deposit(float money);
    void withdrawl(float money);
    std::string getFullName();
    long getPhoneNumber();
    float getBalance();
    friend std::ostream & operator<<(std::ostream &out, Account &a);
    friend std::istream & operator>>(std::istream &in, Account &a);
};