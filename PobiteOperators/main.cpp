#include <iostream>
using namespace std;
 void main()
 {
	 setlocale(LC_ALL, "Russian");
	 int i, j; cout << "������� ������ �����: "; cin >> i; cout << endl;
		  cout << "������� ������ �����: "; cin >> j;cout << endl;
	 i = i ^ j;
	 j = i ^ j;
	 i = i ^ j;
	 cout << "������ ����� ������ = " << i << endl;
	 cout << "������ ����� ������ = " << j << endl;


 }