// Создать класс Airline: Пункт назначения, Номер рейса,
//Тип самолета, Время вылета, Дни недели.Функции -
//члены реализуют запись и считывание полей(проверка
//корректности).
//Создать массив объектов.Вывести:
//a) список рейсов для заданного пункта назначения;
//b) список рейсов для заданного дня недели; .
#include "stdafx.h"

#include <iostream>
#include <string.h>
#include "Airline.h"
using namespace std;

void comparedest(char* buf, Airline prototype){
	if (strcmp(buf, prototype.destination) == 0)
	{
		std::cout << "Search Succesfull: " << endl;
		prototype.show();
		cout << endl;
	}
};
void compareday(char* buf, Airline prototype){
	if (strcmp(buf, prototype.dayofweek) == 0)
	{
		std::cout << "Search Succesfull: " << endl;
		prototype.show();
		cout << endl;
	}
};
void searchdest(Airline* mas){
	int i = 0;
	char* buf = new char[20];
		cout << "Enter the city: ";
		cin >> buf;
	while (i<3){
		comparedest(buf, mas[i]);
		i++;
	}
}
void searchday(Airline* mas){
	int i = 0;
	char* buf = new char[20];
	cout << "Enter day: ";
	cin >> buf;
	while (i < 3){
		compareday(buf, mas[i]);
		i++;
	}
}
int main(){
	int inside = 1;
	int dj = 1;
	Airline obj0("Minsk", 7777, "Ty-6", "15:03", "Saturday");
	Airline obj1("Drogichin", 123, "Kyky", "7:30", "Saturday");
	Airline obj2("Minsk", 8907, "L1O3", "11:13", "Friday");
	Airline mas[5] = {};

	mas[0] = obj0;
	mas[1] = obj1;
	mas[2] = obj2;
	
	while (dj){
		cout << "Enter number of object: (1,2,3,0 - Exit): ";
		cin >> dj;
		if (!dj) break;
		inside = 1;
		while (inside){
			cout << endl << "1 - Show object" << endl
				<< "2 - Change destination" << endl
				<< "3 - Change number of line" << endl
				<< "4 - Change air type" << endl
				<< "5 - Change time" << endl
				<< "6- Change day of week" << endl
				<< "7 - Search destination" << endl
				<< "8 - Search day" << endl
				<< "0 - Exit" << endl;
			cin >> inside;
			switch (inside){
			case 0: break;
			case 1: mas[dj-1].show(); break;
			case 2: mas[dj-1].changedest(); break;
			case 3: mas[dj-1].changenumbofl(); break;
			case 4: mas[dj-1].changeairt(); break;
			case 5: mas[dj-1].changetime(); break;
			case 6: mas[dj-1].changedow(); break;
			case 7: searchdest(mas); break;
			case 8: searchday(mas); break;
			default: cout << "Error data!!!"; break;
			}
		}
	}
	system("pause");
	return 0;
}
