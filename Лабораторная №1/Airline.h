#include <iostream>
class Airline{
private:
	char* destination;
	int numberofline;
	char* airtype;
	char* time;
	char* dayofweek;
    char* reset;
	static const int ireset = 532;
public:
	Airline(char* dest, int numb, char* atype, char* t, char* dow);
	Airline();
	void show();
	void changedest();
	void changenumbofl();
	void changeairt();
	void changetime();
	void changedow();
	friend void comparedest(char* buf, Airline prototype);
	friend void compareday(char* buf, Airline prototype);
	~Airline();
};