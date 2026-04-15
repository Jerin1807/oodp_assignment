#include <iostream>
using namespace std;

class Account {
public:
    Account() {
        cout << "Account Created" << endl;
    }

    ~Account() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    Account acc1;
    Account acc2;

    return 0;
}