#pragma once
#include "Good.h"
namespace sport {
	class SportEquipment :
		public good::Good
	{
	protected:
		string kindOfSport;
	public:
		SportEquipment();
		SportEquipment(string kindOfSport, string name, string author, double price, int age);
		~SportEquipment();

		void setKindOfSport(string kindOfSport);

		string getKindOfSport()const;

		void show()const;
		string type()const;
		void save(ofstream& file)const;
		void load(ifstream& file);
	};
}

