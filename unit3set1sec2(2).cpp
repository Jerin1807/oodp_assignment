#include <iostream>
using namespace std;

class Account {
public:
    string name;
};

class LoanAccount : public Account {
public:
    float amount;
};

class HomeLoan : public LoanAccount {
public:
    int time;   

    void get() {
        cout << "Enter name , amount , time:" << endl;
        cin >> name >> amount >> time;
    }

    void show() {
        float emi = amount / time;   
        cout << "Customer: " << name << endl;
        cout << "Loan Amount: " << amount << endl;
        cout << "Monthly EMI: " << emi << endl;
    }
};

int main() {
    HomeLoan h;

   
    h.get();
    h.show();

    return 0;
}