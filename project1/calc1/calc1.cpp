#include<iostream>
using namespace std;

int main()
{
	int num1, num2, result;
	char o; 
	float resultdivision;
	cout << "please enter number 1:\t";
	cin >> num1;
	cout << "please enter an operation:\t";
	cin >> o;
	cout << "please enter number 2:\t";
	cin >> num2;
	
	if (o == '+')
	{
		result = num1 + num2;
		cout << result;
		if (result % 2 == 0)
		{
			cout << "\nogo! it's a parne chyslo";
		}
		if (result % 2 == 1)
		{
			cout << "\nogo! it's a neparne chyslo";
		}
	}
	else if (o == '-')
	{
		result = num1 - num2;
		cout << result;
		if (result % 2 == 0)
		{
			cout << "\nogo! it's a parne chyslo";
		}
		if (result % 2 == 1)
		{
			cout << "\nogo! it's a neparne chyslo";
		}
	}
	else if (o == '*')
	{
		result = num1 * num2;
		cout << result;
		if (result % 2 == 0)
		{
			cout << "\nogo! it's a parne chyslo";
		}
		if (result % 2 == 1)
		{
			cout << "\nogo! it's a neparne chyslo";
		}
	}
	else if (o == '/' && num2!=0)
	{
		resultdivision = (float)num1 / (float)num2;
		cout << (float)resultdivision;
		
	}
	else if (o == '%')
	{
		result = num1 % num2;
		cout << result;
	}
	else {
		cout << "\nwhoops! something is wrong";
	}
}
	