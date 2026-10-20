#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int availableCopies;

public:
    // Member function to input book details
    void inputDetails() {
        cout << "Enter Book Title: ";
        getline(cin >> ws, title); // ws consumes any leading whitespace
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Number of Copies Available: ";
        cin >> availableCopies;
    }

    // Member function to reduce available copies when borrowed
    void borrowBook() {
        if (availableCopies > 0) {
            availableCopies--;
            cout << "\n--- Book borrowed successfully! ---" << endl;
        } else {
            cout << "\nError: No copies available to borrow." << endl;
        }
    }

    // Member function to display book information
    void displayDetails() const {
        cout << "\n--- Book Details ---" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << availableCopies << endl;
    }
};

int main() {
    Book myBook;

    cout << "Task 1: Library Book Management" << endl;
    // i) Input book details
    myBook.inputDetails();

    // ii) Borrow a book
    myBook.borrowBook();

    // iii) Display updated book details
    myBook.displayDetails();

    return 0;
}