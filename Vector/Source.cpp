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
			cout << "�������� �������� � ��������:" << endl;
			cout << "a. �������� �������� � ����� �������" << endl;
			cout << "b. �������� �������� � ��������� �������" << endl;
			cout << "c. ������� �������� � ��������� �������" << endl;
			cout << "d. �������� �������� � ��������� �������" << endl;
			cout << "e. ������� �������� � ��������� �������" << endl;
			cout << "f. �����" << endl;
			cin >> v;
			if (v == 'a' || v == 'b' || v == 'c' || v == 'd' || v == 'e' || v == 'f')break;
			else
			{
				cout << "������ �������� ���, ���������" << endl;
				getchar();
				getchar();
			}
		}

		if (v == 'a')
		{
			system("cls");
			getchar();
			cout << "V�����:" << endl;
			v1.print(); cout << endl;
			int val;
			cout << "����� ����� �������� � ����� ������� ";
			cin >> val;
			v1.push_back(val);
			cout << "V�����:" << endl;
			v1.print(); cout << endl;
			system("pause");
			r++;
		}
		else if (v == 'b')
		{
			system("cls");
			getchar();
			cout << "V�����:" << endl;
			v1.print(); cout << endl;
			int val, pos = 0;
			while (!(pos>0 && pos <= r))
			{
				cout << "� ����� ������� �������� ����� ";
				cin >> pos;
			}
			cout << "����� ����� �������� ";
			cin >> val;	cout << endl;
			v1.push_pos(pos, val);
			cout << "V�����:" << endl;
			v1.print(); cout << endl;
			system("pause");
			r++;
		}
		else if (v == 'c')
		{
			system("cls");
			getchar();
			cout << "V�����:" << endl;
			v1.print(); cout << endl;
			int pos = 0;
			while (!(pos>0 && pos <= r))
			{
				cout << "C ����� ������� ������� ����� ";
				cin >> pos;
			}
			v1.dell_pos(pos);
			cout << "V�����:" << endl;
			v1.print(); cout << endl;
			system("pause");
			r--;
		}
		else if (v == 'd')
		{
			system("cls");
			getchar();
			cout << "V�����:" << endl;
			v1.print(); cout << endl;
			int val, pos = 0;
			while (!(pos>0 && pos <= r))
			{
				cout << "� ����� ������� �������� ����� ";
				cin >> pos;
			}
			cout << "�� ����� ����� ";
			cin >> val;	cout << endl;
			v1.rep_pos(pos, val);
			cout << "V�����:" << endl;
			v1.print(); cout << endl;
			system("pause");
		}
		else if (v == 'e')
		{
			system("cls");
			getchar();
			cout << "V�����:" << endl;
			v1.print(); cout << endl;
			int pos = 0;
			while (!(pos>0 && pos <= r))
			{
				cout << "C ����� ������� �������� ����� ";
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