#include <iostream>
using namespace std;

class Book
{
protected:
    int book_id;
    string title;
    string author;
    string genre;
    bool is_available;

public:
    Book()
    {
        book_id = 0;
        title = "";
        author = "";
        genre = "";
        is_available = false;
    }
};

class Library : public Book
{
public:
    void add_book(int bookId, string Title, string Author, string Genre)
    {
        book_id = bookId;
        title = Title;
        author = Author;
        genre = Genre;
        is_available = true;
    }

    void remove_book(int bookId)
    {
        if (book_id == bookId)
        {
            is_available = false;
        }
    }

    void showData()
    {
        cout << "Book ID: " << book_id << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Genre: " << genre << endl;
        cout << "Availability: " << (is_available ? "Available" : "Not Available") << endl;
    }
};
int main()
{
    Library b;
    b.add_book(1, "The Great Gatsby", "F. Scott Fitzgerald", "Fiction");
    b.showData();
    b.remove_book(1);
    b.showData();
    return 0;
}