//23AIML014_DEVANG_DHANDHUKIYA

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;
    string genre;
    bool available;

public:
    Book(string t, string a, string i, string g) : title(t), author(a), ISBN(i), genre(g), available(true) {}
    Book(){}
    void displayBookDetails() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Genre: " << genre << endl;
        cout << "Availability: " << (available ? "Available" : "Not Available") << endl;
    }

    void checkOutBook() {
        available = false;
    }

    void returnBook() {
        available = true;
    }

    bool isAvailable() const {
        return available;
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    string getGenre() const {
        return genre;
    }
};

class Library {
private:
    static const int MAX_BOOKS = 100;
    
    int numBooks;

public:
    Library() : numBooks(0) {}
    Book books[MAX_BOOKS];
    void addBook(const Book &b) {
        if (numBooks < MAX_BOOKS) {
            books[numBooks++] = b;
            cout << "Book added successfully!" << endl;
        } else {
            cout << "Cannot add more books. Library is full!" << endl;
        }
    }

    void removeBook(const string &title) {
        int index = findBookIndex(title);
        if (index != -1) {
            for (int i = index; i < numBooks - 1; ++i) {
                books[i] = books[i + 1];
            }
            numBooks--;
            cout << "Book removed successfully!" << endl;
        } else {
            cout << "Book not found!" << endl;
        }
    }

    void displayAvailableBooks() const {
        cout << "Available Books:" << endl;
        for (int i = 0; i < numBooks; ++i) {
            if (books[i].isAvailable())
                books[i].displayBookDetails();
        }
    }

    void searchBooksByTitle(const string &keyword) const {
        cout << "Search results for title '" << keyword << "':" << endl;
        for (int i = 0; i < numBooks; ++i) {
            if (books[i].getTitle().find(keyword) != string::npos) {
                books[i].displayBookDetails();
            }
        }
    }

    void searchBooksByAuthor(const string &keyword) const {
        cout << "Search results for author '" << keyword << "':" << endl;
        for (int i = 0; i < numBooks; ++i) {
            if (books[i].getAuthor().find(keyword) != string::npos) {
                books[i].displayBookDetails();
            }
        }
    }

    void searchBooksByGenre(const string &keyword) const {
        cout << "Search results for genre '" << keyword << "':" << endl;
        for (int i = 0; i < numBooks; ++i) {
            if (books[i].getGenre().find(keyword) != string::npos) {
                books[i].displayBookDetails();
            }
        }
    }

    int findBookIndex(const string &title) const {
        for (int i = 0; i < numBooks; ++i) {
            if (books[i].getTitle() == title)
                return i;
        }
        return -1;
    }
};

class User {
private:
    string name;

public:
    User(const string &n) : name(n) {}

    void checkOutBook(Library &library, const string &title) {
        int index = library.findBookIndex(title);
        if (index != -1) {
            if (library.books[index].isAvailable()) {
                library.books[index].checkOutBook();
                cout << "Book checked out successfully!" << endl;
            } else {
                cout << "Sorry, the book is not available!" << endl;
            }
        } else {
            cout << "Book not found!" << endl;
        }
    }

    void returnBook(Library &library, const string &title) {
        int index = library.findBookIndex(title);
        if (index != -1) {
            library.books[index].returnBook();
            cout << "Book returned successfully!" << endl;
        } else {
            cout << "Book not found!" << endl;
        }
    }
};

void showMenu() {
    cout << "\nLibrary Management System Menu:" << endl;
    cout << "1. Search Books by Title" << endl;
    cout << "2. Search Books by Author" << endl;
    cout << "3. Search Books by Genre" << endl;
    cout << "4. Display Available Books" << endl;
    cout << "5. Check Out a Book" << endl;
    cout << "6. Return a Book" << endl;
    cout << "7. Add a Book" << endl;
    cout << "8. Remove a Book" << endl;
    cout << "9. Exit" << endl;
    cout << "Enter your choice: "<<endl<<"23AIML014_DEVANG_DHANDHUKIYA";
}

int main() {
    Library library;

    User user("John");

    int choice;
    string keyword, title, author, ISBN, genre;
    while (true) {
        showMenu();
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            cout << "Enter title keyword to search: ";
            getline(cin, keyword);
            library.searchBooksByTitle(keyword);
            break;
        case 2:
            cout << "Enter author keyword to search: ";
            getline(cin, keyword);
            library.searchBooksByAuthor(keyword);
            break;
        case 3:
            cout << "Enter genre keyword to search: ";
            getline(cin, keyword);
            library.searchBooksByGenre(keyword);
            break;
        case 4:
            library.displayAvailableBooks();
            break;
        case 5:
            cout << "Enter the title of the book you want to check out: ";
            getline(cin, title);
            user.checkOutBook(library, title);
            break;
        case 6:
            cout << "Enter the title of the book you want to return: ";
            getline(cin, title);
            user.returnBook(library, title);
            break;
        case 7:
            cout << "Enter the title of the book: ";
            getline(cin, title);
            cout << "Enter the author of the book: ";
            getline(cin, author);
            cout << "Enter the ISBN of the book: ";
            getline(cin, ISBN);
            cout << "Enter the genre of the book: ";
            getline(cin, genre);
            library.addBook(Book(title, author, ISBN, genre));
            break;
        case 8:
            cout << "Enter the title of the book you want to remove: ";
            getline(cin, title);
            library.removeBook(title);
            break;
        case 9:
            cout << "Thank you for using the Library Management System. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
