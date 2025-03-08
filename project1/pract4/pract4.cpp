#include <iostream>
using namespace std; 

int main()
{
    int num, cycle, nepar, sum;
    cin >> num; 
	cycle = 0; 
	sum = 0;
	while (cycle <= num)
	{
		nepar = cycle % 2; 
		if (nepar)
		{
			//cout << cycle<< "\t";
			sum = sum + cycle; 
			//cout << sum << endl; 
		}
		cycle++; 
	}
	cout << sum;
}


