#include <locale>
#include "Vector.h"

int main()
{
	setlocale(LC_ALL, "");
	int r = 10;
	Vector v1(r);
	char v;
	while (true)
	{
		while (true)
		{
			system("cls");
			cout << "Выберите действие с массивом:" << endl;
			cout << "a. Добавить значение в конец массива" << endl;
			cout << "b. Добавить значение в указанную позицию" << endl;
			cout << "c. Удалить значение с указанной позиции" << endl;
			cout << "d. Изменить значение в указанной позиции" << endl;
			cout << "e. Вернуть значение с указанной позиции" << endl;
			cout << "f. Выход" << endl;
			cin >> v;
			if (v == 'a' || v == 'b' || v == 'c' || v == 'd' || v == 'e' || v == 'f')break;
			else
			{
				cout << "Такого варианта нет, повторите" << endl;
				getchar();
				getchar();
			}
		}

		if (v == 'a')
		{
			system("cls");
			getchar();
			cout << "Vассив:" << endl;
			v1.print(); cout << endl;
			int val;
			cout << "Какую цифру добавить в конец массива ";
			cin >> val;
			v1.push_back(val);
			cout << "Vассив:" << endl;
			v1.print(); cout << endl;
			system("pause");
			r++;
		}
		else if (v == 'b')
		{
			system("cls");
			getchar();
			cout << "Vассив:" << endl;
			v1.print(); cout << endl;
			int val, pos = 0;
			while (!(pos>0 && pos <= r))
			{
				cout << "В какую позицию добавить цифру ";
				cin >> pos;
			}
			cout << "Какую цифру добавить ";
			cin >> val;	cout << endl;
			v1.push_pos(pos, val);
			cout << "Vассив:" << endl;
			v1.print(); cout << endl;
			system("pause");
			r++;
		}
		else if (v == 'c')
		{
			system("cls");
			getchar();
			cout << "Vассив:" << endl;
			v1.print(); cout << endl;
			int pos = 0;
			while (!(pos>0 && pos <= r))
			{
				cout << "C какой позицию удалить цифру ";
				cin >> pos;
			}
			v1.dell_pos(pos);
			cout << "Vассив:" << endl;
			v1.print(); cout << endl;
			system("pause");
			r--;
		}
		else if (v == 'd')
		{
			system("cls");
			getchar();
			cout << "Vассив:" << endl;
			v1.print(); cout << endl;
			int val, pos = 0;
			while (!(pos>0 && pos <= r))
			{
				cout << "В какой позиции заменить цифру ";
				cin >> pos;
			}
			cout << "На какую цифру ";
			cin >> val;	cout << endl;
			v1.rep_pos(pos, val);
			cout << "Vассив:" << endl;
			v1.print(); cout << endl;
			system("pause");
		}
		else if (v == 'e')
		{
			system("cls");
			getchar();
			cout << "Vассив:" << endl;
			v1.print(); cout << endl;
			int pos = 0;
			while (!(pos>0 && pos <= r))
			{
				cout << "C какой позицию показать цифру ";
				cin >> pos;
			}
			cout<<v1.at(pos)<<endl;
			system("pause");
		}
		else if (v == 'f')
		{
			break;
		}
	}
	
	system("pause");
	return 0;
}