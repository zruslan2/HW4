#pragma once
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class House
{
private:
	string adress;
	int floor;
	int cRoom;
	int area;
public:
	House();
	House(string adr, int floor, int cRoom, int area);

	void apartment(int countR);
	friend void apartment(House *h, int countR, int minFloor, int maxFloor, int r);
	friend void apartment1(House *h, int area, int r);

	void print();
	virtual ~House();
};

