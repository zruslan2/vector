#include "Vector.h"

int main()
{
	Vector v1(10);

	/*Vector v2(v1);*/
	v1.push_back(15);
	v1.print();
	v1.push_pos(3, 5);
	cout << endl;
	v1.print();
	v1.dell_pos(2);
	cout << endl;
	v1.print();
	cout <<endl<< v1.at(2) << endl;
	cout << endl;	
	system("pause");
	return 0;
}