#include <iostream>
using namespace std;
#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE (char)196 << (char)196
#define VERTICAL_LINE (char)179
#define WHITE_BOX  "\xDB\xDB" /// \x - позвол€ет включить в строку символ по ASCII кода  в шестнадцатеричной симтеме счислени€ D(13)*16^ в 1 степени умножить на B(11)*16^ в 0 степени= 219   
//(char)219 << (char)219 
#define BLACK_BOX    "\x20\x20"     //(char)32
void main()
{
	setlocale(LC_ALL, "");
#ifdef CHESS

	/*for (int i = 176; i < 226; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << i << "\t"<< (char)i << "\n ";
	}*/
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n) cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n) cout << VERTICAL_LINE;
			//else  (i % 2 == j % 2) ? cout << WHITE_BOX : cout << "  ";
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);

		}
		cout << endl;
	}
#endif
#ifdef CHESS_2
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif
#ifdef PASCAL_TRIANGLE
	int l, n = 1;
	cout << "¬ведите колличество элементов: "; cin >> l;
	for (int i = 0; i < l; i++)
	{
		for (int s = 1; s <= l - i; s++)
			cout << " ";
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == 0)
				n = 1;
			else n = n * (i - j + 1) / j;
			cout << n << " ";
		}
		cout << endl;
	}
#endif
	//CHESS 2 operators
#ifdef CHESS 2
	int n; cin >> n;
	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			cout << ((i / n & 1 ^ j / n & 1 ? "* " : "  ");
			//cout << ((i / n) % 2 == (j / n) % 2 ? "* " : "  ");
		}
	cout << endl;
	}
#endif
	int n;
	cout << "¬ведите высоту треугольника: "; cin >> n;
	int nf = 1;
	for (int i = 1; i < n; i++)
	{
		nf *= i;
		int mf = 1;
		for (int j = 1; j < i; j++)
		{
			mf *= j;
			int m_nf = 1;
			for (int k = 1; k < n - i; k++)
			{
				m_nf *= k;
			}
			cout << nf / mf / m_nf << "\t";

		}
		cout << endl;
	}
}