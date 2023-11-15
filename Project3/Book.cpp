#include "Book.h"

book::Book::Book()
{
}

book::Book::Book(string name, string author, double price, int age)
    :good::Good(name, author, price, age)
{
}

book::Book::~Book()
{
}

void book::Book::show() const
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "Author: " << author << endl;
}

string book::Book::type() const
{
    return "Book";
}

void book::Book::save(ofstream& file) const
{
    file << type() << endl;
    file << name << endl;
    file << age << endl;
    file << price << endl;
    file << author << endl;
}

void book::Book::load(ifstream& file)
{
    getline(file, name);
    file >> age;
    file >> price;
    file >> author;
    file.get();
    getline(file, author);
}
