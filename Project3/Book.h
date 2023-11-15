#pragma once
#include "Good.h"
namespace book {
	class Book :
		public good::Good
	{
	public:
		Book();
		Book(string name, string author, double price, int age);
		~Book();

		void show()const;
		string type()const;
		void save(ofstream& file)const;
		void load(ifstream& file);
	};
}

