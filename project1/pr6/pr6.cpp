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
		for (ch = chyslo; ch > 0; ch = ch / 10)
		{
			cyfry = ch % 10;
			x = x * 10 + cyfry;
		}
	}
	cout << x << endl;
	if (x == chyslo) {
		cout << "Yay, this is a palindrome";
	}
	else {
		cout << "Nah, this is not a palindrome";
	}

}