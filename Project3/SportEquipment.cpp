#include "SportEquipment.h"

sport::SportEquipment::SportEquipment()
{
    kindOfSport = "0";
}

sport::SportEquipment::SportEquipment(string kindOfSport, string name, string author, double price, int age)
    :good::Good(name, author, price, age)
{
    this->kindOfSport = kindOfSport;
}

sport::SportEquipment::~SportEquipment()
{
}

void sport::SportEquipment::setKindOfSport(string kindOfSport)
{
    this->kindOfSport = kindOfSport;
}

string sport::SportEquipment::getKindOfSport() const
{
    return kindOfSport;
}

void sport::SportEquipment::show() const
{
    cout << "Name: " << name << endl;
    cout << "KindOfSport: " << kindOfSport << endl;
    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "Author: " << author << endl;
}

string sport::SportEquipment::type() const
{
    return "SportEquipment";
}

void sport::SportEquipment::save(ofstream& file) const
{
    file << type() << endl;
    file << name << endl;
    file << kindOfSport << endl;
    file << age << endl;
    file << price << endl;
    file << author << endl;
}

void sport::SportEquipment::load(ifstream& file)
{
    getline(file, name);
    getline(file, kindOfSport);
    file >> age;
    file >> price;
    file >> author;
    file.get();
    getline(file, author);
}
