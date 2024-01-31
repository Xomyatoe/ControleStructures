#include <iostream>
using namespace std;
//#define TEMPERATURE
//#define CALC1 
#define CALC2 

void main()
{

	setlocale(LC_ALL, "");
#ifdef TEMPERATURE
	cout << "Hello Controls" << endl;
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	cout << "Температура воздуха:" << temperature << "градусов \n";
	if (abs(temperature) % 100 > 10 && (temperature) % 100< 20) cout << "градусов";//функция abs возвращает модуль числа т.е. число без учета знака
	if (temperature % 10 == 1)  cout << "Градус";
	else if (temperature % 10 >= 5 || temperature % 10 == 0) cout << "градусов";
	else cout << "градуса \n";
	if (temperature > 50)
	{
		cout << "На улице тепло" << endl;
	}
	else if (temperature > 40)
	{
		cout << "Вы в пустыне" << endl;
	}
	else if (temperature > 33)
	{
		cout << "Очень жарко" << endl;
	}
	else if (temperature > 25)
	{
		cout << "Жарко" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif

/////////////////////////////////////////////////////////////////////////////////////////////


	setlocale(LC_ALL, "");
#ifdef TEMPERATURE

	double a, b;
	char s;
	cout << "Введите выражение: ";
	cin >> a >> s >> b;
	cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << "+"  << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << " = " << a / b << endl;
	}
#endif //TEMPERATURE
	
	////////////////////////////////////////////////////////////////
#ifdef CALC2
	setlocale(LC_ALL, "");
	double a, b;
	char s;
	cout << "Введите выражение: ";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << " + " << b << " = " << a + b << endl; break;
	case '-':cout << a << " - " << b << " = " << a - b << endl; break;
	case '*':cout << a << " * " << b << " = " << a * b << endl; break;
	case '/':cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: no operation" << endl;
#endif
	}

}


/*...*/