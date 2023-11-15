#include "Toy.h"

toy::Toy::Toy()
{
    material = "0";
}

toy::Toy::Toy(string material, string name, string author, double price, int age)
    :good::Good(name, author, price, age)
{
    this->material = material;
}

toy::Toy::~Toy()
{
}

void toy::Toy::setMaterial(string material)
{
    this->material = material;
}

string toy::Toy::getMaterial() const
{
    return material;
}

void toy::Toy::show() const
{
    cout << "Name: " << name << endl;
    cout << "Material: " << material << endl;
    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "Author: " << author << endl;
}

string toy::Toy::type() const
{
    return "Toy";
}

void toy::Toy::save(ofstream& file) const
{
    file << type() << endl;
    file << name << endl;
    file << material << endl;
    file << age << endl;
    file << price << endl;
    file << author << endl;
}

void toy::Toy::load(ifstream& file)
{
    getline(file, name);
    getline(file, material);
    file >> age;
    file >> price;
    file >> author;
    file.get();
    getline(file, author);
}
