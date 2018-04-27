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
	int task;
	while (true)
	{
		cout << "Выберите задание:" << endl;
		cout << "0 - выход" << endl;
		cout << "1 - список квартир, имеющих заданное число комнат" << endl;
		cout << "2 - список квартир, имеющих заданное число комнат," << endl;
		cout << "    и расположенных на этаже, который находится в заданном промежутке" << endl;
		cout << "3 - список квартир, имеющих площадь, превосходящую заданную" << endl;
		cin >> task;
		if (task == 0)break;
		else if (task == 1)
		{
			int cr;
			cout << "Введите число коснат: ";cin >> cr;
			for (int i = 0;i < r;i++)
			{
				h[i].apartment(cr);
			}
		}
		else if (task == 2)
		{
			int cr, minf,maxf;
			cout << "Введите число коснат: ";cin >> cr;
			cout << "Введите мин. этаж: ";cin >> minf;
			cout << "Введите макс. этаж: ";cin >> maxf;
			h->apartment(cr, minf, maxf,r);
		}
	}
	system("pause");
	return 0;
}