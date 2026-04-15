#include <iostream>
using namespace std;

int main() {
    int n, i, total = 0;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];

    for(i = 0; i < n; i++) {
        cout << "Enter marks: ";
        cin >> marks[i];
        total += marks[i];
    }

    float avg = (float)total / n;

    cout << "Total: " << total << endl;
    cout << "Average: " << avg << endl;

    if(avg >= 80)
        cout << "Grade A";
    else if(avg >= 60)
        cout << "Grade B";
    else if(avg >= 40)
        cout << "Grade C";
    else
        cout << "Fail";

    return 0;
}