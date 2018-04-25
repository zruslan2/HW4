#include "House.h"

House::House()
{
	this->adress = "";
	this->floor = 0;
	this->cRoom = 0;
	this->area = 0;
}

House::House(string adr, int floor, int cRoom, int area)
{
	this->adress = adr;
	this->floor = floor;
	this->cRoom = cRoom;
	this->area = area;
}

void House::apartment(int countR, int r)
{
	for (int i = 0; i < r; i++)
	{
		if (this->cRoom == countR)
			cout << this->adress << "\t" << this->floor << "\t" << this->cRoom << "\t" << this->area << endl;
	}
}

void House::apartment(int countR, int minFloor, int maxFloor, int r)
{
	for (int i = 0; i < r; i++)
	{
		if(this->cRoom==countR&&(this->floor>minFloor||this->floor<maxFloor))
			cout << this->adress << "\t" << this->floor << "\t" << this->cRoom << "\t" << this->area << endl;
	}
}

void House::apartment1(int area, int r)
{
	for (int i = 0; i < r; i++)
	{
		if (this->area > area)
			cout << this->adress << "\t" << this->floor << "\t" << this->cRoom << "\t" << this->area << endl;
	}
}

void House::print()
{
	cout << "Адрес:" << this->adress << "\tЭтаж: " << this->floor << "\tКоличество комнат: " << this->cRoom << "\tПлощадь: " << this->area << endl;
}

House::~House()
{
}
