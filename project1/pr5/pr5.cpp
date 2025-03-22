
#include <iostream>
using namespace std; 

int main()
{
	int chyslo;
	int cyfry, x = 0;

	cin >> chyslo;
	int ch = chyslo; 

	if (chyslo < 0)
	{
		cout << "this is not a palindrom";
	}

	else {
		while (ch > 0)
		{
			cyfry = ch % 10;
			x = x * 10 + cyfry;
			ch = ch / 10; 
		}
	}
	cout << x << endl;
	cout << chyslo << endl; 
	if (x == chyslo) {
		cout << "Yay, this is a palindrome"; }
	else { 
		cout << "Nah, this is not a palindrome"; }

}