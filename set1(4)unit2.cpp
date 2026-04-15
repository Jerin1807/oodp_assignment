#include <iostream>
using namespace std;

class Account {
public:
    float balance;

    Account(float b) {
        balance = b;
    }

    
    Account operator+(Account a) {
        return Account(balance + a.balance);
    }
};

int main() {
    Account acc1(2000), acc2(3000);

    Account total = acc1 + acc2;

    cout << "Balance: " << total.balance;

    return 0;
}