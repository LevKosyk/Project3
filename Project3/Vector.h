#pragma once
#include"Book.h"
#include"Good.h"
#include"SportEquipment.h"
#include"Toy.h"
#include<vector>
namespace vec {
	class Vector1
	{
		vector<good::Good*>arr;
	public:
		Vector1();
		void add(good::Good* soft);
		void del(int ind);
		void edit(string name2, string name, string author, double price, int age);
		void searchByName(string name);
		void searchByAuthor(string author);
		void searchByPrice(double price);
		void searchByAge(int age);
		void searchByType(string name);
		void sortByType();
		void sortByPrice();
		void sortByAge();
		void save();
		void load();
		void showInfo();
	};
}

