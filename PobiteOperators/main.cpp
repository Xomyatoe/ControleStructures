#include <iostream>
using namespace std;
 void main()
 {
	 setlocale(LC_ALL, "Russian");
	 int i, j; cout << "¬ведите первое число: "; cin >> i; cout << endl;
		  cout << "¬ведите второе число: "; cin >> j;cout << endl;
	 i = i ^ j;
	 j = i ^ j;
	 i = i ^ j;
	 cout << "ѕервое число теперь = " << i << endl;
	 cout << "¬торое число теперь = " << j << endl;


 }