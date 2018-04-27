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

void House::apartment(int countR)
{	
		if (this->cRoom == countR)
			cout << this->adress << "\t" << this->floor << "\t" << this->cRoom << "\t" << this->area << endl;	
}

void apartment(House *h,int countR, int minFloor, int maxFloor, int r)
{
	for (int i = 0; i < r; i++)
	{
		if(h[i].cRoom==countR&&(h[i].floor>minFloor&&h[i].floor<maxFloor))
			cout << h[i].adress << "\t" << h[i].floor << "\t" << h[i].cRoom << "\t" << h[i].area << endl;
	}
}

void apartment1(House *h,int area, int r)
{
	for (int i = 0; i < r; i++)
	{
		if (h[i].area > area)
			cout << h[i].adress << "\t" << h[i].floor << "\t" << h[i].cRoom << "\t" << h[i].area << endl;
	}
}

void House::print()
{
	cout << "Адрес:" << this->adress << "\tЭтаж: " << this->floor << "\tКоличество комнат: " << this->cRoom << "\tПлощадь: " << this->area << endl;
}

House::~House()
{
}
