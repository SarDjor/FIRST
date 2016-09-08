// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Classes.h"
using namespace std;


Income operator+(Income &inc1, Income &inc2) {
	Income rezult;
	rezult.inc = inc1.inc + inc2.inc;
	rezult.show();
	return rezult;

}

int main()
{
	Income i1(15);
	Income i2(30);
	Income i3;
	i3 = i1 + i2;
	cout << i3;
	Stuck stack;
	int choice = 1;
	setlocale(2, "");
	while (choice) {
		cout << "Choose:" << endl
			<< "1 - Add customer" << endl
			<< "2 - Deal with it" << endl
			<< "3 - Show last one" << endl;
		cin >> choice;
		switch (choice) {
		case 1: stack.push(); break;
		case 2: stack.pop(); break;
		case 3: stack.showfirst(); break;
		default:break;
		}
	}
}