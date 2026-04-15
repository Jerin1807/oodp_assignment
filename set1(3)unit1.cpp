#include <iostream>
using namespace std;

class Account {
private:
    int accNo;
    string name;
    float balance;
    static int count;

public:
    Account() {
        count++;
    }

    void read() {
        cout << "Enter Account No, Name, Balance: ";
        cin >> accNo >> name >> balance;
    }

    void display() {
        cout << "Acc No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    static void showCount() {
        cout << "Total Accounts: " << count << endl;
    }
};

int Account::count = 0;

int main() {
    Account a1, a2;

    a1.read();
    a2.read();

    a1.display();
    a2.display();

    Account::showCount();

    return 0;
}