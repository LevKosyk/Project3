#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
namespace good {
	class Good
	{
	protected:
		string name;
		string author;
		double price;
		int age;
	public:
		Good();
		Good(string name, string author, double price, int age);
		virtual ~Good();

		void setName(string name);
		void setAuthor(string author);
		void setPrice(double price);
		void setAge(int age);

		string getName()const;
		string getAuthor()const;
		double getPrice()const;
		int getAge()const;

		virtual void show()const = 0;
		virtual string type()const = 0;
		virtual void save(ofstream& file)const = 0;
		virtual void load(ifstream& file) = 0;

	};

}

