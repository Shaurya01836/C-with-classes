#include <iostream>
#include <string>
using namespace std;

// Base class for Publication
class Publication {
protected:
    string title;
    float price;

public:
    void getdata() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }

    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

// Base class for Sales
class Sales {
protected:
    float sales[3]; // Array to hold sales for the last three months

public:
    void getdata() {
        cout << "Enter sales for the last 3 months: ";
        for (int i = 0; i < 3; ++i) {
            cin >> sales[i];
        }
    }

    void putdata() {
        cout << "Sales for the last 3 months: ";
        for (int i = 0; i < 3; ++i) {
            cout << sales[i] << " ";
        }
        cout << endl;
    }
};

// Derived class for Book
class Book : public Publication, public Sales {
private:
    int pageCount;

public:
    void getdata() {
        Publication::getdata(); // Call base class method
        Sales::getdata();       // Call sales class method
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void putdata() {
        Publication::putdata(); // Call base class method
        Sales::putdata();       // Call sales class method
        cout << "Page Count: " << pageCount << endl;
    }
};

// Derived class for Tape
class Tape : public Publication, public Sales {
private:
    float playingTime;

public:
    void getdata() {
        Publication::getdata(); // Call base class method
        Sales::getdata();       // Call sales class method
        cout << "Enter playing time in minutes: ";
        cin >> playingTime;
    }

    void putdata() {
        Publication::putdata(); // Call base class method
        Sales::putdata();       // Call sales class method
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

// Main function to test the classes
int main() {
    Book book;
    Tape tape;

    cout << "Enter details for Book:\n";
    book.getdata();
    
    cout << "\nEnter details for Tape:\n";
    tape.getdata();

    cout << "\nBook Details:\n";
    book.putdata();

    cout << "\nTape Details:\n";
    tape.putdata();

    return 0;
}
