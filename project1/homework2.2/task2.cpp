#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "please enter two numbers:";
	cin >> a >> b;
	cout << a + b <<
		endl << a - b <<
		endl << a * b << 
		endl << a / b << 
		endl << b / a <<
		endl << a%b << 
		endl << b%a;
}