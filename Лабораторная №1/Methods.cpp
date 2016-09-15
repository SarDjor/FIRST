#include "stdafx.h"


#include "Airline.h"
#include <iostream>
#include <stdio.h>

using namespace std;


Airline::Airline(char* dest, int numb, char* atype, char* t, char* dow) : numberofline(numb){
	destination = dest;
	airtype = atype;
	time = t;
	dayofweek = dow;
	reset = "reset";
	
}

Airline::Airline() : numberofline(0){
	destination = NULL;
	airtype = NULL;
	time = NULL;
	dayofweek = NULL;
	reset = "reset";

}

void Airline::show(){
	cout << "Destination: " << destination << endl
		<< "Number of line: " << numberofline << endl
		<< "Air type: " << airtype << endl
		<< "Arriving time: " << time << endl
		<< "Arriving day: " << dayofweek << endl;
}
void Airline::changedest(){
	char* buf = new char[20];
	system("cls");
	cout << "Old destination: " << destination << endl;
	cout << "Enter new destination (in case of mistake say - reset: ";
	cin.getline(buf,20);
	if (strcmp(buf, reset)==0)
	{cout << endl << "Change destination method is breaked" << endl; return;}
	else destination = buf;
	cout << "New destination is " << destination;

}

void Airline::changenumbofl(){
	int buf=0;
	system("cls");
	cout << "Old number of line: " << numberofline << endl;
	cout << "Enter new number (in case of mistake say - 532: ";
	cin >> buf;
	if (buf==ireset)
	{
		cout << endl << "Change number method is breaked" << endl; return;
	}
	else numberofline = buf;
	cout << "New number is " << numberofline;

}

void Airline::changeairt(){
	char* buf = new char[20];
	system("cls");
	cout << "Airtype is: " << airtype << endl;
	cout << "Enter new airtype (in case of mistake say - reset: ";
	cin.getline(buf,20);
	if (strcmp(buf, reset)==0)
	{
		cout << endl << "Change airtype method is breaked" << endl; return;
	}
	else airtype = buf;
	cout << "New airtype is " << airtype;
}

void Airline::changetime(){
	char* buf = new char[20];
	system("cls");
	cout << "Arriving time is: " << time << endl;
	cout << "Enter new time (in case of mistake say - reset): ";
	cin.getline(buf, 20);
	if (strcmp(buf, reset)==0)
	{
		cout << endl << "Change time method is breaked" << endl; return;
	}
	else time = buf;/*strcpy(time, buf)*/;
	cout << "New time is " << time;
}

void Airline::changedow(){
	char* buf = new char[20];
	system("cls");
	cout << "Air arriving at " << dayofweek << endl;
	cout << "Enter new day (in case of mistake say - reset: ";
	cin.getline(buf,20);
	if (strcmp(buf, reset)==0)
	{
		cout << endl << "Change day method is breaked" << endl; return;
	}
	else dayofweek = buf;
	cout << "New day is " << dayofweek;
}

Airline::~Airline(){
	cout << "bye";
}

