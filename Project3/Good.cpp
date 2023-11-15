#include "Good.h"

good::Good::Good()
{
    name = "0";
    author = "0";
    price = 0;
    age = 0;
}

good::Good::Good(string name, string author, double price, int age)
{
    this->name = name;
    this->author = author;
    this->price = price;
    this->age = age;
}

good::Good::~Good()
{
}

void good::Good::setName(string name)
{
    this->name = name;
}

void good::Good::setAuthor(string author)
{
    this->author = author;
}

void good::Good::setPrice(double price)
{
    this->price = price;
}

void good::Good::setAge(int age)
{
    this->age = age;
}

string good::Good::getName() const
{
    return name;
}

string good::Good::getAuthor() const
{
    return author;
}

double good::Good::getPrice() const
{
    return price;
}

int good::Good::getAge() const
{
    return age;
}
