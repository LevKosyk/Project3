#include "Vector.h"
#include<algorithm>
vec::Vector1::Vector1()
{
}

void vec::Vector1::add(good::Good* soft)
{
	arr.push_back(soft);
}

void vec::Vector1::del(int ind)
{
	if (ind >= 0 && ind < arr.size())
	{
		delete arr[ind];
		arr.erase(arr.begin() + ind);
	}
}

void vec::Vector1::edit(string name2, string name, string author, double price, int age)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i]->getName() == name2) {
			arr[i]->setName(name);
			arr[i]->setAuthor(author);
			arr[i]->setPrice(price);
			arr[i]->setAge(age);
			break;
		}
	}
}

void vec::Vector1::searchByName(string name)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i]->getName() == name) {
			arr[i]->show();
		}
	}
}

void vec::Vector1::searchByAuthor(string author)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i]->getAuthor() == author) {
			arr[i]->show();
		}
	}
}

void vec::Vector1::searchByPrice(double price)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i]->getPrice() == price) {
			arr[i]->show();
		}
	}
}

void vec::Vector1::searchByAge(int age)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i]->getAge() == age) {
			arr[i]->show();
		}
	}
}

void vec::Vector1::searchByType(string name)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i]->type() == name) {
			arr[i]->show();
		}
	}
}

void vec::Vector1::sortByType()
{
	std::sort(arr.begin(), arr.end(), [](const good::Good* left, const good::Good* right) {return left->type() < right->type(); });
}

void vec::Vector1::sortByPrice()
{
	std::sort(arr.begin(), arr.end(), [](const good::Good* left, const good::Good* right) {return left->getPrice() < right->getPrice(); });
}

void vec::Vector1::sortByAge()
{
	std::sort(arr.begin(), arr.end(), [](const good::Good* left, const good::Good* right) {return left->getAge() < right->getAge(); });
}


void vec::Vector1::save()
{
	ofstream file("admin.txt");
	if (file.is_open())
	{
		for (int i = 0; i < arr.size(); i++) {
			arr[i]->save(file);
		}
		file.close();
	}
}

void vec::Vector1::load()
{
	ifstream file("admin.txt");
	if (file.is_open())
	{
		string typeObj;
		good::Good* p = nullptr;
		while (!file.eof())
		{
			getline(file, typeObj);
			if (typeObj == "Toy")
			{
				p = new toy::Toy();
				p->load(file);
				arr.push_back(p);
			}
			else if (typeObj == "Book")
			{
				p = new book::Book();
				p->load(file);
				arr.push_back(p);
			}
			else if (typeObj == "SportEquipment")
			{
				p = new sport::SportEquipment();
				p->load(file);
				arr.push_back(p);
			}
		}
		file.close();
	}
}

void vec::Vector1::showInfo()
{
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i]->show();
	}
}
