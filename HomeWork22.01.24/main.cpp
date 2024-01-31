#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
void main()
{
	setlocale(LC_ALL, "");

	int n ; 
	cout << "¬ведите размер доски: "; cin >> n;
	
	int i = 0;
		
			

		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)
			{
				for (int z = 0; z < 5; z++)
				{
					for (int j = 0; j < n; j++)
					{
						
						cout << (i % 2 == j % 2 ? "+ + + + + " : "          ");

					}
					cout << endl;

				}
			}
			else
			{
				for (int z = 0; z < 5; z++)
				{
					for (int j = 0; j < n; j++)
					{
						
						cout << (i % 2 == j % 2 ? "          " : "+ + + + + ");

					}
					cout << endl;

				}
			}
		}
		
}