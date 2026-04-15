#include <iostream>
using namespace std;

class Book {
public:
    int id;
    string title;
    float price;
};

int main() {
    Book *b = new Book;

    cout << "Enter Book ID, Title, Price: " << endl;
    cin >> b->id >> b->title >> b->price;

    cout << "Book ID: " << b->id << endl;
    cout << "Title: " << b->title << endl;
    cout << "Price: " << b->price << endl;

    delete b;

    return 0;
}