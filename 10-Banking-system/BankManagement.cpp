#include<iostream>
#include<vector>
#include "accounts.hpp"


using namespace std;

char mainMenu();
void openAccount();
void deposit();
void withdrawl();
void veiwAccount();
void deleteAccount();
void quiT();

vector<Account> bank;


char option;



int main(){
    

    while (option != 'q')
    {
        char mainOptions = mainMenu();

        switch (mainOptions)
        {
        case 'o': case 'O':
                    openAccount(); break;
        case 'd': case 'D':
                    deposit(); break;
        case 'w': case 'W':
                    withdrawl(); break;
        case 'l': case 'L':
                    deleteAccount(); break;
        case 'v': case 'V':
                    veiwAccount(); break;
        case 'q': case 'Q':
                    quiT(); break;

        }
    }
    


    return 0;

}


char mainMenu(){
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$$             Welcome to your Bank           $$\n";
    cout<<"$$ 1. (O)pen Account                          $$\n";
    cout<<"$$ 2. (D)eposit                               $$\n";
    cout<<"$$ 3. (W)ithdrawl                             $$\n";
    cout<<"$$ 4. (V)iew Account                          $$\n";
    cout<<"$$ 5. De(l)ete Account                        $$\n";
    cout<<"$$ 6. (B)ank Manager                          $$\n";
    cout<<"$$ 7. (Q)uit                                  $$\n";
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$Main->";
    cin>>option;
    return option;
}


void openAccount(){
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$$          Open account Menu                 $$\n";
    Account temp;
    cin>>temp;
    bank.push_back(temp);
}

void deposit(){
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$$                  Deposit                   $$\n";
    cout<<"$$ Enter Account Number: ";
    int account;
    cin>>account; --account;
    cout<<"$$ Enter Deposit Amount: ";
    float money; cin>>money;
    bank[account].deposit(money);
    cout<<"$$ Transaction completed sucessfully!\n\n";
}
void withdrawl(){
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$$                  Withdrawl                 $$\n";
    cout<<"$$ Enter Account Number: ";
    int account; --account;
    cin>>account;
    cout<<"$$ Enter Withdrawl Amount: ";
    float money; cin>>money;
    bank[account].withdrawl(money);
    cout<<"$$ Transaction completed sucessfully!\n\n";
    }
void veiwAccount(){
    cout<<endl;
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$$                   View Menu                $$\n";
    cout<<"$$ 1. (S)ingle Account                        $$\n";
    cout<<"$$ 2. (A)ll Account                           $$\n";
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$$ View Menu-> ";
    char viewOption;
    cin>>viewOption;
    switch (viewOption)
    {
    case 's': case 'S':
        cout<<"Enter Account number: ";
        int acc; cin>>acc;
        cout<<bank[--acc];
        cout<<endl;
        break;
    case 'a': case 'A':
            vector<Account>::iterator itr;
            for(itr = bank.begin(); itr != bank.end(); itr++)
                cout<<*itr<<endl;
        break;
    }

}

void deleteAccount(){}
void quiT(){}