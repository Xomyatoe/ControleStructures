#include <iostream>
using namespace std;
#define Calculator
//#define Temp

void main()
{
	setlocale(LC_ALL, "");
   #ifdef Calculator
	double x = .0;
	char oper;
	double y = .0;
	cout << "������� ��������� \n";
	cin >> x >> oper >> y;

	if (oper == '+')
	{
		cout << x + y << endl;

	}
	else if (oper == '+')
	{
		cout << x + y << endl;

	}
	else if (oper == '*')
	{
		cout << x * y << endl;

	}
	else if (oper == '/')
	{
		cout << x / y << endl;

	}
	else
	{
		cout << 0.0 << endl;
	}

   #endif

   #ifdef Temp

	int temperature;

	cout << "������� ����������� �������: ";
	cin >> temperature;
	
	if (temperature == 1)
	{
		cout << "����������� �������:" << temperature << "\t ������" << endl;
	}

	else if (temperature == 2)
	{
		cout << "����������� �������:" << temperature << "\t �������" << endl;
	}
	else if (temperature == 5)
	{
		cout << "����������� �������:" << temperature << "\t ��������" << endl;
	}
	else if (temperature == 15)
	{
		cout << "����������� �������:" << temperature << "\t��������" << endl;

	}
	else if (temperature == 23)
	{
		cout << "����������� �������:" << temperature << "\t �������" << endl;
	}
	else if (temperature == 27)
	{
		cout << "����������� �������:" << temperature << "\t��������" << endl;
	}
	else
	{
		cout << "������" << endl;
	}
#endif
	


}