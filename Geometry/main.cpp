#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define SQUARE
//#define TRIANDLE_1
//#define TRIANDLE_2
//#define TRIANDLE_3
//#define TRIANDLE_4
//#define ROMBUS
#define PLUSMINUS
void main()
{
#ifdef SQUARE
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef TRIANDLE_1
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef TRIANDLE_2
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif

#ifdef TRIANDLE_3
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif
#ifdef TRIANDLE_4
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}

		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}
#endif
#ifdef ROMBUS
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i* 2; j++) cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n-1-i)*2; j++)cout << " "; cout << "/";
		cout << endl;
     }
	/*for (int i = 0; i < n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			cout << " ";
		}

		for (int j = i; j <= i; j++)
		{
			cout << "/";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j <= i; j++)
		{
			cout << "\\";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = -1; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = i; j <= i; j++)
		{
			cout << "\\";
		}
		for (int j = i; j < n - 1; j++)
		{
			cout << "  ";
		}
		for (int j = i; j <= i; j++)
		{
			cout << "/";
		}

		cout << endl;*/
	
#endif
#ifdef PLUSMINUS
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			//if ((i + j)%2 == 0) cout << "+ ";else cout << "- ";
			//if (i %2 == j%2) cout << "+ ";else cout << "- ";
			 //(i %2 == j%2) ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		} 
		cout << endl;
	}

#endif
}