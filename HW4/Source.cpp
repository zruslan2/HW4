#include "House.h"

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	House*h;
	int r;
	cout << "������� ���������� �������� "; cin >> r;
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
		cout << "�������� �������:" << endl;
		cout << "0 - �����" << endl;
		cout << "1 - ������ �������, ������� �������� ����� ������" << endl;
		cout << "2 - ������ �������, ������� �������� ����� ������," << endl;
		cout << "    � ������������� �� �����, ������� ��������� � �������� ����������" << endl;
		cout << "3 - ������ �������, ������� �������, ������������� ��������" << endl;
		cin >> task;
		if (task == 0)break;
		else if (task == 1)
		{
			int cr;
			cout << "������� ����� ������: ";cin >> cr;
			for (int i = 0;i < r;i++)
			{
				h[i].apartment(cr);
			}
		}
		else if (task == 2)
		{
			int cr, minf,maxf;
			cout << "������� ����� ������: ";cin >> cr;
			cout << "������� ���. ����: ";cin >> minf;
			cout << "������� ����. ����: ";cin >> maxf;
			apartment(h,cr, minf, maxf,r);
		}
		else if (task == 3)
		{
			int ar;
			cout << "������� ����������� �������: ";cin >> ar;
			apartment1(h, ar, r);
		}
	}
	system("pause");
	return 0;
}