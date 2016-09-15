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
		std::cout << "Number of line is (destination): " << prototype.numberofline << std::endl;
};
void compareday(char* buf, Airline prototype){
	if (strcmp(buf, prototype.dayofweek) == 0)
		std::cout << "Number of line is (day) : " << prototype.numberofline << std::endl;
};
void searchdest(char* buf, Airline* mas){
	int i = 0;
	while (i<3){
		comparedest(buf, mas[i]);
		i++;
	}
}
void searchday(char* buf, Airline* mas){
	int i = 0;
	while (i < 3){
		compareday(buf, mas[i]);
		i++;
	}
}
int main(){
	Airline obj0("Minsk", 7777, "Ty-6", "15:03", "Saturday");
	Airline obj1("Drogichin", 123, "Kyky", "7:30", "Saturday");
	Airline obj2("Minsk", 8907, "L1O3", "11:13", "Friday");
	Airline mas[5] = {};

	mas[0] = obj0;
	mas[1] = obj1;
	mas[2] = obj2;
	
	mas[0].changetime();
	mas[0].changeairt();
	mas[0].changedest();
	mas[0].changedow();
	mas[0].changenumbofl();
	mas[0].show();
	searchdest("Drogichin",mas);
	searchday("Saturday",mas);
	system("pause");
	return 0;
}
