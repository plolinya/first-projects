#include <iostream>
using namespace std;

int main()
{
	int num, dir, cycle, sum;
	char symb; 
	int skew; 
	cout << "Enter the desired symbol:  ";
	cin >> symb;
	cout << "Enter the desired number of symbols:  ";
	cin >> num;
	cout << "Enter the desired direction of your line (1 - vertical, 2 - horizontal, 3 - skewing line):  ";
	cin >> dir;
	cout << "\n\n";
	

	cycle = 1;
	skew = 0;
	
	if (dir == 1)
	{
		while (cycle <= num)
		{
			cout << symb << endl;
			cycle++;
		}
	}
	else if (dir == 2)
	{
		while (cycle <= num)
		{
			cout << symb << " ";
			cycle++;
		}
	}
	else if (dir == 3)
	{
		while (cycle <= num)
		{
			while (skew <= cycle) { 
				cout << " ";
				skew++;
			}
			cout << symb << endl; 
			cycle++;
			skew = 0; 
		}
	}
	else
	{
		cout << "ha lol it doesn't work";
	}
}
