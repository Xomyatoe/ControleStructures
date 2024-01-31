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
	//int i = 0; //счетчик цикла
	//int n; // количество итераций
	//cout << "Введите количество итераций:"; cin >> n;
	//while (i < n)
	//{
	//	cout << "Hello World!";
	//	cout << "Сам привет";
	//	cout << i << endl;
	//	cout << i++ << endl;
	//}


	char key;
	do
	{
		key = _getch(); //функция _getch() ожидает нажатия клавиши и возвращает ASCII-код нажатой клавиши
		//	//функция  _getch() объявлена в беблиотеке <conio.h>
		//	cout << (int)key << "\t" << key << endl;
		//	if (key == 'w' || key == 'W' || key == UP_ARROW) cout << "Вперед" << endl;
		//	else if (key == 's' || key =='S' || key == DOWN_ARROW) cout << "Назад" << endl;
		//	else if (key == 'a' || key =='A' || key == LEFT_ARROW) cout << "Влево" << endl;
		//	else if (key == 'd' || key == 'D' || key == RIGHT_ARROW) cout << "Вправо" << endl;
		//	else if (key == ' ' ) cout << "Прыжок" << endl;
		//	else if (key == '13' ) cout << "Огонь" << endl;
		//	else if (key != 27 && key != -32 ) cout << "Error" << endl;
		//	//(int)key -это явное преобразование переменной key в тип данных int для того чтобы увидеть  ASCII - код символа хранящегося в переменной key

		switch (key)
		{
		case 'w': cout << "Вперед" << endl; break;
		case 'W': cout << "Вперед" << endl; break;
		case 's': cout << "Назад" << endl; break;
		case 'S': cout << "Назад" << endl; break;
		case 'a': cout << "Налево" << endl; break;
		case 'A': cout << "Налево" << endl; break;
		case 'd': cout << "Направо" << endl; break;
		case 'D': cout << "Направо" << endl; break;
		case UP_ARROW: cout << "Вперед" << endl; break;
		case DOWN_ARROW: cout << "Назад" << endl; break;
		case LEFT_ARROW: cout << "Налево" << endl; break;
		case RIGHT_ARROW: cout << "Направо" << endl; break;
		case Escape: cout << "Выход" << endl;
		case -32: break;
		default: cout << "Error" << endl;
		}
	} while (key != 27);
#endif
#ifdef Factorial
	//////////////////ЗАДАЧА С ФАКТОРИАЛОМ!!!!!!!!!!!!!!!
	int n;//число для вычисления факториала
	int i = 1;
	float f = 1; 
	cout << "Введите число для вычисления факториала"; cin >> n;
	while (i <= n)
	{
		cout << i << "! = ";
		f *= i++;
		cout << f << "\n";
	}
#endif
#ifdef Factorial
	///////////задача со степенью
	int a;
	int n;
	int N = 1;
	cout << "Введите основание степени:"; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	int i = 0;
	while (i++ < n) N *= a;
	cout << N << endl;
#endif
	setlocale(LC_ALL, "C"); //включаем кодировку по умолчанию
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