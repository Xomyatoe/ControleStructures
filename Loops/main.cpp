#include <iostream>
#include <conio.h>
using namespace std;
#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77
#define Enter 13
#define Escape 27
#define WHILE_1
//#define WHILE_2
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	//int i = 0; //������� �����
	//int n; // ���������� ��������
	//cout << "������� ���������� ��������:"; cin >> n;
	//while (i < n)
	//{
	//	cout << "Hello World!";
	//	cout << "��� ������";
	//	cout << i << endl;
	//	cout << i++ << endl;
	//}


	char key;
	do
	{
		key = _getch(); //������� _getch() ������� ������� ������� � ���������� ASCII-��� ������� �������
		//	//�������  _getch() ��������� � ���������� <conio.h>
		//	cout << (int)key << "\t" << key << endl;
		//	if (key == 'w' || key == 'W' || key == UP_ARROW) cout << "������" << endl;
		//	else if (key == 's' || key =='S' || key == DOWN_ARROW) cout << "�����" << endl;
		//	else if (key == 'a' || key =='A' || key == LEFT_ARROW) cout << "�����" << endl;
		//	else if (key == 'd' || key == 'D' || key == RIGHT_ARROW) cout << "������" << endl;
		//	else if (key == ' ' ) cout << "������" << endl;
		//	else if (key == '13' ) cout << "�����" << endl;
		//	else if (key != 27 && key != -32 ) cout << "Error" << endl;
		//	//(int)key -��� ����� �������������� ���������� key � ��� ������ int ��� ���� ����� �������  ASCII - ��� ������� ����������� � ���������� key

		switch (key)
		{
		case 'w': cout << "������" << endl; break;
		case 'W': cout << "������" << endl; break;
		case 's': cout << "�����" << endl; break;
		case 'S': cout << "�����" << endl; break;
		case 'a': cout << "������" << endl; break;
		case 'A': cout << "������" << endl; break;
		case 'd': cout << "�������" << endl; break;
		case 'D': cout << "�������" << endl; break;
		case UP_ARROW: cout << "������" << endl; break;
		case DOWN_ARROW: cout << "�����" << endl; break;
		case LEFT_ARROW: cout << "������" << endl; break;
		case RIGHT_ARROW: cout << "�������" << endl; break;
		case Escape: cout << "�����" << endl;
		case -32: break;
		default: cout << "Error" << endl;
		}
	} while (key != 27);
#endif
#ifdef Factorial
	//////////////////������ � �����������!!!!!!!!!!!!!!!
	int n;//����� ��� ���������� ����������
	int i = 1;
	float f = 1; 
	cout << "������� ����� ��� ���������� ����������"; cin >> n;
	while (i <= n)
	{
		cout << i << "! = ";
		f *= i++;
		cout << f << "\n";
	}
#endif
#ifdef Factorial
	///////////������ �� ��������
	int a;
	int n;
	int N = 1;
	cout << "������� ��������� �������:"; cin >> a;
	cout << "������� ���������� �������:"; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	int i = 0;
	while (i++ < n) N *= a;
	cout << N << endl;
#endif
	setlocale(LC_ALL, "C"); //�������� ��������� �� ���������
	int i = 0;
int n = 256;
		while (i < n)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i++ << " ";
		}

}



/*


*/