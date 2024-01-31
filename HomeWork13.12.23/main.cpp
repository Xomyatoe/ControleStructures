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
	cout << "Введите выражение \n";
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

	cout << "Введите температуру воздуха: ";
	cin >> temperature;
	
	if (temperature == 1)
	{
		cout << "Температура воздуха:" << temperature << "\t Градус" << endl;
	}

	else if (temperature == 2)
	{
		cout << "Температура воздуха:" << temperature << "\t Градуса" << endl;
	}
	else if (temperature == 5)
	{
		cout << "Температура воздуха:" << temperature << "\t Градусов" << endl;
	}
	else if (temperature == 15)
	{
		cout << "Температура воздуха:" << temperature << "\tГрадусов" << endl;

	}
	else if (temperature == 23)
	{
		cout << "Температура воздуха:" << temperature << "\t Градуса" << endl;
	}
	else if (temperature == 27)
	{
		cout << "Температура воздуха:" << temperature << "\tГрадусов" << endl;
	}
	else
	{
		cout << "Градус" << endl;
	}
#endif
	


}