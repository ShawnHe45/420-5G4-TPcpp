#include <sstream>
#include <algorithm>

#include "book.h"

using namespace std;

// Constructeur défaut
Book::Book() : title(""), author(""), isbn("") {}

// Constructeur avec paramètres
Book::Book(const string& title, const string& author, const string& isbn)
    : title(title), author(author), isbn(isbn) {}

// Getters
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getISBN() const { return isbn; }
bool Book::getAvailability() const { return isAvailable; }
string Book::getBorrowerId() const { return borrowerId; }

// Setters
void Book::setTitle(const string& title) { this->title = title; }
void Book::setAuthor(const string& author) { this->author = author; }
void Book::setISBN(const string& isbn) { this->isbn = isbn; }
void Book::setAvailability(const bool available) { this->isAvailable = available; }
void Book::setBorrowerId(const string& id) { this->borrowerId = id; }

// Check out
void Book::checkOut(const string& borrowerId) {
    setBorrowerId(borrowerId);
    setAvailability(false);
}

// Return
void Book::returnBook() {
    setBorrowerId("");
    setAvailability(true);
}

// Afficher les informations d'un livre
string Book::toString() const {
    string disponible;
    if(to_string(isAvailable) == "1"){
        disponible = "Oui";
    }else{
        disponible = "Non";
    }
    string info = "Titre: " + title + "\nAuteur: " + author + "\nISBN: " + isbn + 
                    "\nDisponible: " + disponible;
    
    return info;
}

// Formater en fichier
string Book::toFileFormat() const {
    string fichier = title + "|" + author + "|" + isbn + "|" + to_string(isAvailable) + "|" + borrowerId;

    return fichier;
}

// Parse from file format
void Book::fromFileFormat(const string& line) {
    stringstream ss(line);
    string token;

    getline(ss, title, '|');
    getline(ss, author, '|');
    getline(ss, isbn, '|');

    string availableString = to_string(isAvailable);
    getline(ss, availableString, '|');

    getline(ss, borrowerId, '|');
}