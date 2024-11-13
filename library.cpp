#include "library.h"
#include <algorithm> 

Book::Book(string title, string author, int ID) : title(title), author(author), ID(ID) {}

void Book::setTitle(string title) { this->title = title; }
string Book::getTitle() const { return this->title; }

void Book::setAuthor(string author) { this->author = author; }
string Book::getAuthor() const { return this->author; }

void Book::setID(int ID) { this->ID = ID; }
int Book::getID() const { return this->ID; }

void Book::printDetails() const {
    cout << title << " by " << author << " (ID: " << ID << ")" << endl;
}

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::removeBook(int id) {
    auto it = find_if(books.begin(), books.end(), [id](const Book& book) {
        return book.getID() == id;
    });

    if (it != books.end()) {
        books.erase(it);
        cout << "Book " << id << " removed" << endl;
    } else {
        cout << "Book not in library" << endl;
    }
}

void Library::listBooks() const {
    if (books.empty()) {
        cout << "There are no books in the library" << endl;
        return;
    }
    for (const auto& book : books) {
        book.printDetails();
    }
}
