#include <iostream>
using namespace std;

class BankService {
public:
    virtual void process() = 0;   
};

class DepositService : public BankService {
public:
    void process() {
        cout << "Deposit Service Processed" << endl;
    }
};

class LoanService : public BankService {
public:
    void process() {
        cout << "Loan Service Processed" << endl;
    }
};

int main() {
    DepositService d;
    LoanService l;

    d.process();
    l.process();

    return 0;
}