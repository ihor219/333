// Lab_03_4.cpp
// �������� ����
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 4
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;


	// ������������ � ����� ����
	if ((x+x+y*y <= R*R && y >= 0) ||
		(y >= -R && y <= x && x>=-R && x<=0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
