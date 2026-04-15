#include <iostream>
using namespace std;

class Account {
public:
    virtual void withdraw(float amt) {
        cout << "Base Withdraw\n";
    }
};

class SavingsAccount : public Account {
public:
    void withdraw(float amt) {
        if(amt <= 3000)
            cout << "Savings Account Withdrawal Allowed: " << amt 
                 << " (Minimum balance rule applied)" << endl;
        else
            cout << "Maintain minimum balance\n";
    }
};

class CurrentAccount : public Account {
public:
    void withdraw(float amt) {
        cout << "Current Account Withdrawal Allowed: " << amt 
             << " (Overdraft facility available)" << endl;
    }
};

int main() {
    Account *ptr;   

    SavingsAccount s;
    CurrentAccount c;

    ptr = &s;       
    ptr->withdraw(3000);

    ptr = &c;      
    ptr->withdraw(3000);

    return 0;
}