#include <iostream>
#include <string>
using namespace std;

// Base class for Publication
class Publication
{
protected:
    string title;
    float price;

public:
    // Mark the function as virtual
    virtual void getdata()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }

    // Mark the function as virtual
    virtual void putdata()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    // Virtual destructor to ensure proper cleanup
    virtual ~Publication() {}
};

// Derived class for Book
class Book : public Publication
{
private:
    int pageCount;

public:
    // Use scope resolution to call base class getdata()
    void getdata()
    {
        Publication::getdata(); // Call base class method explicitly
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    // Use scope resolution to call base class putdata()
    void putdata()
    {
        Publication::putdata(); // Call base class method explicitly
        cout << "Page Count: " << pageCount << endl;
    }
};

// Derived class for Tape
class Tape : public Publication
{
private:
    float playingTime;

public:
    // Use scope resolution to call base class getdata()
    void getdata()
    {
        Publication::getdata(); // Call base class method explicitly
        cout << "Enter playing time in minutes: ";
        cin >> playingTime;
    }

    // Use scope resolution to call base class putdata()
    void putdata()
    {
        Publication::putdata(); // Call base class method explicitly
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

// Main function to test the classes
int main()
{
    int MAX_PUBLICATIONS = 10;             // Regular integer
    Publication *pubArr[MAX_PUBLICATIONS]; // Array of pointers to Publication
    int count = 0;                         // To keep track of the number of publications

    while (count < MAX_PUBLICATIONS)
    {
        cout << "Enter 1 for Book or 2 for Tape (0 to finish): ";
        int choice;
        cin >> choice;

        if (choice == 0)
        {
            break; // Exit the loop if the user chooses to finish
        }

        if (choice == 1)
        {
            pubArr[count] = new Book(); // Create a new Book object
        }
        else if (choice == 2)
        {
            pubArr[count] = new Tape(); // Create a new Tape object
        }
        else
        {
            cout << "Invalid choice! Please enter 1 or 2." << endl;
            continue; // Continue to the next iteration
        }

        pubArr[count]->getdata(); // Get data for the publication
        count++;                  // Increment the count
    }

    cout << "\nDisplaying Publication Data:\n";
    for (int j = 0; j < count; ++j)
    {
        pubArr[j]->putdata(); // Display data for each publication
    }

    // Cleanup: delete allocated memory
    for (int j = 0; j < count; ++j)
    {
        delete pubArr[j];
    }

    return 0;
}
