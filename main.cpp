#include "library.h"

int main() {
    Book book1("1984", "George Orwell", 1);
    Book book2("To Kill a Mockingbird", "Harper Lee", 2);
    Book book3("The Catcher in the Rye", "J.D. Salinger", 3);

    Library library;

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    cout << "Books in library:" << endl;
    library.listBooks(); 

    library.removeBook(2);  

    cout << "\nBooks in library after removal:" << endl;
    library.listBooks(); 

    library.removeBook(1);
    library.removeBook(3);
    cout<<"Should be empty... lets see"<<endl;
    library.listBooks();
    return 0;
}
