#include <iostream>
using namespace std;
//#define FOR_BASICS
//#define FACTORIAL
//#define EXPONENT
#define ASCII
//#define FIBONACHI
//#define FIB // !!!!ИЗ ДВУХ ПЕРЕМЕННЫХ!!!!
//#define PROST
//#define MULTIPLICATION_TABLE
//#define PIFAGOR_TABLE
//#define GEOMETRY
void main()
{	
#ifdef FOR_BASICS

	int i;
	int  n = 5;
	for (i = 0; i < n; i++)
		cout << "Hello" << endl;;
	;
#endif
#ifdef FACTORIAL
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "Введите число для вычисления факториала"; cin >> n;
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
		f *= i;
		cout << f << endl;
}
#endif
#ifdef EXPONENT
	setlocale(LC_ALL, "Russian");
	double a;//основание степени
	int n;//показатель степени
	double N = 1;//степень
	cout << "Введите основание степени:"; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	if (N < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)

	{
		N *= a;

	}
	cout << N << endl;
#endif
#ifdef ASCII
	cout << "Таблица ASCII-символов; \n";
	setlocale(LC_ALL, "C");
	int i = 0;
	int n = 256;
	while (i < n)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i++ << "";
	}
#endif
#ifdef FIB //ИЗ ДВУХ ПЕРЕМЕННЫХ
	setlocale(LC_ALL, "Russian");
	
	int n;
	cout << "Введите предел числа Фибоначчи: ";
	cin >> n;
	cout << endl;
	int a = 0, b = 1;
	if (n >= 0)
		cout << a << " ";
	if (n >= 1)
		cout << b << " ";
	for (int i = 2; i <= n; i++) 
	{
		cout << a + b << " ";
	 b = a + b;
	 a = b - a;
	}
#endif
#ifdef FIBONACHI
		setlocale(LC_ALL, "Russian");
		int n;
		cout << "Введите предельное число:"; cin >> n;
		for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		{
			cout << a << "\t";
	}
#endif

		///Оператор "запятая" (coma operator) - позволяет в том месте где ожидается одно выражение
		//написать несколько выражений, эти выражения будут выполняться последовательно слева направо, и оператор запятая вернет значение последнего выражения
#ifdef PROST
		setlocale(LC_ALL, "Russian");
		int  N;
		cout << "Введите предельное число:"; cin >> N;
		for (int i = 0; i <= N; i++)
		{
			bool simple = true;
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					simple = false;
					break; // прерывает текущую итерацию и все последующие
				}
			}

			if (simple)cout << i << "\t";
		}

		/*cin >> N;
		for (int i = 0; i < N; i++)
		{
			for (b = 0, a = 2; a < N; a++)

				if (i % a == 0)
				{
					b++;
				}
			if (b == 1)
			{
				cout << i << "\t";
			}


		}
		return;*/
#endif
#ifdef MULTIPLICATION_TABLE
		setlocale(LC_ALL, "Russian");
		int N;
		cout << "Введите предельное число для таблицы умножения";
		cin >> N;
		for (int a = 1; a <= N; a++)
		{
			for (int b = 1; b <= N; b++)
			{
				cout << a << "*" << b << "=" << a * b << "\t";
			}
			cout << endl;
		}
#endif
#ifdef PIFAGOR_TABLE
		setlocale(LC_ALL, "Russian");
		int N;
		cout << "Введите предельное число для таблицы умножения";
		cin >> N;
		for (int a = 1; a <= N; a++)
		{
			for (int b = 1; b <= N; b++)
			{
				cout << a * b << "\t";
			}
			cout << endl;
		}
#endif
#ifdef GEOMETRY
		
		int N = 5;
		for (int a = 0; a < N; a++)
		{
			for (int b = 0; b < 5; b++)
			{
				cout << "*";
			}
			cout << endl;
		}
		cout << endl;
		for (int a = 1; a <= N; a++)
		{
			for (int b = 1; b <= a; b++)
			{
				cout << "*";
			}
			cout << endl;
		}
		cout << endl;
		
		for (int a = 1; a <= N; a++)
		{
			for (int b = 5; b >= a; b--)
			{
				cout << "*";
			}
			cout << endl;
		}
#endif
}
