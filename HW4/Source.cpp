#include "House.h"

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	House*h;
	int r;
	cout << "Введите количество кваритир "; cin >> r;
	h = new House[r];
	char it[6];
	int f, cR, ar;
	for (int i = 0; i < r; i++)
	{
		char adr[15] = "Adress ";
		itoa(i+1, it, 10);
		strcat(adr, it);
		f = 1 + rand() % 9;
		cR = 1 + rand() % 5;
		ar = 40 + rand() % 50;
		h[i]=House(adr, f, cR, ar);
		h[i].print();
	}

	system("pause");
	return 0;
}