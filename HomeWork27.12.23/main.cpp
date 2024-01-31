#include <iostream>
using namespace std;
//#define TASK_1
//#define TASK_2
#define TASK_3

void main()
{

	setlocale(LC_ALL, "");
#ifdef TASK_1
	int n, fact =1;
	

	
	
	cout << "¬ведите число:";
	cin >> n;
	int num = n;
	 
	do
	{
	 	fact *= num;
		num--;
		
	} while ( n / num != n); 
	
	cout << "‘акториал числа " << n  << ", это: " << fact << endl;
#endif	

#ifdef TASK_2
	int x, y;

	cout << "¬ведите число:";
	cin >> x;
	cout << "¬ведите степень:";
	cin >> y;
	int result = x;

	for (int i = 1; i < y; i++)
	{
		result = result * x;
	}
	cout << "ќ“¬≈“: " << result << endl;

#endif

#ifdef TASK_3
	for (int i = 0; i < 16; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 16; i < 32; i++)
	{
		cout << (char)i; 
	}
	for (int i = 32; i < 48; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 48; i < 64; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 64; i < 80; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 80; i < 96; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 96; i < 112; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 112; i < 128; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 128; i < 144; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 144; i < 160; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 160; i < 176; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 176; i < 192; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 192; i < 208; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 208; i < 224; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 224; i < 240; i++)
	{
		cout << (char)i;
	}
	cout << "\n";
	for (int i = 240; i < 255; i++)
	{
		cout << (char)i;
	}
#endif		
	cout << endl;
}