#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    string empName;
    float basicSalary, grossSalary;

public:
    void read() {
        cout << "Enter ID, Name, Basic Salary: ";
        cin >> empId >> empName >> basicSalary;
    }

    void calculate() {
        grossSalary = basicSalary + (0.2 * basicSalary) + (0.1 * basicSalary);
    }

    void display() {
        cout << "ID: " << empId << endl;
        cout << "Name: " << empName << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Employee e1, e2;

    e1.read();
    e1.calculate();
    e1.display();

    e2.read();
    e2.calculate();
    e2.display();

    return 0;
}