#include <iostream>
using namespace std;

class Account {
private:
    float balance;

public:
   
    Account() {
        balance = 0;
    }

    Account(float b) {
        balance = b;
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account acc1;      
    Account acc2(5000);  

    acc1.display();
    acc2.display();

    return 0;
}