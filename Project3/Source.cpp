#include"Good.h"
#include"Vector.h"
int main() {
	int menu;
	string str1, str2, str3;
	int num1, num2, num3, num4;
	int lo, h;
	double price;
	vec::Vector1 arr;
	do
	{
		cout << "1 - Add\n";
		cout << "2 - Del\n";
		cout << "3 - Search By The Name\n";
		cout << "4 - Search By The Author\n";
		cout << "5 - Search By The Price\n";
		cout << "6 - Search By The Age\n";
		cout << "7 - Search By The Type\n";
		cout << "8 - Edit\n";
		cout << "9 - Sort By Price\n";
		cout << "10 - Sort By Age\n";
		cout << "11 - Sort By Type\n";
		cout << "12 - Show Info\n";
		cout << "13 - Save\n";
		cout << "14 - Load\n";
		cin >> menu;
		switch (menu)
		{
		case 1:
			cout << "Which one\n1 - Toy\n2 - Book\n3 - Sport\n";
			cin >> h;
			switch (h)
			{
			case 1:
				cout << "Enter name\n";
				cin.ignore();
				getline(cin, str1);
				cout << "Enter author\n";
				getline(cin, str2);
				cout << "Enter material\n";
				getline(cin, str3);
				cout << "Enter price\n";
				cin >> price;
				cout << "Enter age\n";
				cin >> lo;
				arr.add(new toy::Toy(str3, str1, str2, price, lo));
				break;
			case 2:
				cout << "Enter name\n";
				cin.ignore();
				getline(cin, str1);
				cout << "Enter author\n";
				getline(cin, str2);
				cout << "Enter price\n";
				cin >> price;
				cout << "Enter age\n";
				cin >> lo;
				arr.add(new book::Book( str1, str2, price, lo));
				break;
			case 3:
				cout << "Enter name\n";
				cin.ignore();
				getline(cin, str1);
				cout << "Enter author\n";
				getline(cin, str2);
				cout << "Enter kindOfSport\n";
				getline(cin, str3);
				cout << "Enter price\n";
				cin >> price;
				cout << "Enter age\n";
				cin >> lo;
				arr.add(new sport::SportEquipment(str3, str1, str2, price, lo));
				break;
			}
			break;
		case 2:
			cout << "Enter inf\n";
			cin >> lo;
			arr.del(lo);
			break;
		case 3:
			cout << "Enter name\n";
			cin.ignore();
			getline(cin, str1);
			arr.searchByName(str1);
			break;
		case 4:
			cout << "Enter author\n";
			cin.ignore();
			getline(cin, str2);
			arr.searchByAuthor(str2);
			break;
		case 5:
			cout << "Enter price\n";
			cin >> price;
			arr.searchByPrice(price);
			break;
		case 6:
			cout << "Enter age\n";
			cin >> lo;
			arr.searchByAge(lo);
			break;
		case 7:
			cout << "Enter type\n";
			cin.ignore();
			getline(cin, str2);
			arr.searchByType(str2);
			break;
		case 8:
			cout << "Enter name that u want to edit\n";
			cin.ignore();
			getline(cin, str3);
			cout << "Enter name\n";
			getline(cin, str1);
			cout << "Enter author\n";
			getline(cin, str2);
			cout << "Enter price\n";
			cin >> price;
			cout << "Enter age\n";
			cin >> lo;
			arr.edit(str2, str1, str2, price, lo);
			break;
		case 9:
			arr.sortByPrice();
			break;
		case 10:
			arr.sortByAge();
			break;
		case 11:
			arr.sortByType();
			break;
		case 12:
			arr.showInfo();
			break;
		case 13:
			arr.save();
			break;
		case 14:
			arr.load();
			break;
		}
	} while (menu != 0);
}