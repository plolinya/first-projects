
#include <iostream>
using namespace std; 

int main()
{
    int a; 
    cout << "enter a\t"; 
    cin >> a; 
    if (a == 0)
    {
        cout << "nol yomayo";
    }
    else if (a % 2 == 0)
    {
        cout << "parne";
    }
    else if (a % 2 == 1)
    {
        cout << "neparne";
    }
}
