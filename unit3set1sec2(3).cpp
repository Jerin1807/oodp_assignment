#include <iostream>
using namespace std;

class Customer {
public:
    string name;
};

class Transaction {
public:
    int transId;
    float amount;
};

class BankSystem : public Customer, public Transaction {
public:
    void get() {
        cout << "Enter name , transId , amount:" << endl;
        cin >> name >> transId >> amount;
    }

    void show() {
        cout << "Customer Name: " << name << endl;
        cout << "Transaction ID: " << transId << endl;
        cout << "Amount: " << amount << endl;
    }
};

int main() {
    BankSystem b;

    b.get();
    b.show();

    return 0;
}