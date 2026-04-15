#include <iostream>
using namespace std;

class Account {
public:
    int accNo;
    string name;
    float balance;

    void get() {
        cout << " Enter accNo , name , balance:" << endl;
        cin >> accNo >> name >> balance;
    }
};

class SavingsAccount : public Account {
public:
    void show() {
        cout << "Savings Account Holder: " << name;
        cout << " Interest: " << balance * 0.04 << endl;
    }
};

class CurrentAccount : public Account {
public:
    void show() {
        cout << "Current Account Holder: " << name;
        cout << " Interest: 0" << endl;
    }
};

int main() {
    SavingsAccount s;
    CurrentAccount c;

    
    s.get();

    
    c.get();

    s.show();
    c.show();

    return 0;
}