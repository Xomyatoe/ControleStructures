#include <iostream>
#include <conio.h>
using namespace std;
#define Task_1
//#define Task_2
void main()
{

	setlocale(LC_ALL, "Russian");
     #ifdef Task_1
	int a, b, c;
	cin >> a;
	b = a / 1000;
	c = a % 1000;
	if (b / 100 + (b / 10) % 10 + b % 10 == c / 100 + (c / 10) % 10 + c % 10)
	{
		cout << a << " - счастливый билет";
	}
	else
	{
		cout << a << "- билет не счастливый";
	}
     #endif

     #ifdef Task_2


	

	_getch();
			
			while (_getch() != 27)
		
				
			{

					if (_getch() == 119)
					{
						cout << "Вперед" << endl; 

					}
					else if  (_getch() == 97)
				{
					cout << "Влево" << endl; 
				}
					else if  (_getch() == 115)

				{
					cout << "назад" << endl;
				}
					else if  (_getch() == 100)

				{
					cout << "Вправо" << endl; 
				}
					else if (_getch() == 32)

				{
					cout << "Прыжок" << endl; 
				}
					else if  (_getch() == 13)

				{
					cout << "Огонь" << endl; 
				}
			}
		 

#endif

}
