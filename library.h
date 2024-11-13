#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
private:
    string title;
    string author;
    int ID;

public:
    Book(string title, string author, int ID); 
    void setTitle(string title);
    string getTitle() const;
    void setAuthor(string author);
    string getAuthor() const;
    void setID(int ID);
    int getID() const;
    void printDetails() const;
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book);
    void removeBook(int id);
    void listBooks() const;
};

#endif
