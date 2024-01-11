#include <iostream>
#include <string>
using namespace std;
struct Book {
    string title;
    string author;
    int publicationYear;
    string genre;
};

Book books[6];  


void inputBooks() {
    for (int i = 0; i < 6; ++i) {
        cout << "Enter details for Book " << i + 1 << ":\n";
        cout << "Title: ";
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Publication Year: ";
        cin >> books[i].publicationYear;
        cin.ignore();
        cout << "Genre: ";
        getline(cin, books[i].genre);
        cout << endl;
    }
}

void Category()
{
    string fiction[6];
    string non_fiction[6];

    for (int i = 0; i < 6; i++)
    {
        if (books[i].genre == "Fiction")
        {
            fiction[i] = books[i].title;
        }
        else if (books[i].genre == "Non-Fiction")
        {
            non_fiction[i] = books[i].title;
        }
    }


}

void findEarliestBooks(const Book books[], int size, const std::string& category) {
    int earliestYear = INT_MAX;
    Book earliestBook;

    for (int i = 0; i < size; ++i) {
        if (books[i].publicationYear < earliestYear) {
            earliestYear = books[i].publicationYear;
            earliestBook = books[i];
        }
    }

    cout << "Earliest published book in " << category << " category:\n";
    cout << "Title: " << earliestBook.title << "\n";
    cout << "Author: " << earliestBook.author << "\n";
    cout << "Publication Year: " << earliestBook.publicationYear << "\n";
    cout << "Genre: " << earliestBook.genre << "\n\n";
}

void displayBooks(const Book arr[], int size)
{
    cout << "All Books Information:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Title: " << arr[i].title << ", Author: " << arr[i].author
            << ", Publication Year: " << arr[i].publicationYear << ", Genre: " << arr[i].genre << endl;
    }
}

int main() {
    inputBooks();
    Category();
    displayBooks(books,6);
    return 0;
}
