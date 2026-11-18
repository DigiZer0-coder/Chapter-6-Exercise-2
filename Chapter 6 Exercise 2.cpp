#include <iostream>
#include <string>
using namespace std;



double fahrenheitToCelsius(double fahrenheit)
{
	return (fahrenheit - 32) * 5.0 / 9.0;
}

int main()
{
	double fahrenheit;
	double celsius;
	
	cout << "What is the Fahrenheit temperature? ";
	cin >> fahrenheit;
	cout << "What is the Celsius temperature? ";
	cin >> celsius;
	cout << "Fahrenheit           Celsius" << endl;
	cout << "-----------------------------" << endl;

	for (fahrenheit = 0; fahrenheit <= 100; fahrenheit += 5)
	{
		celsius = fahrenheitToCelsius(fahrenheit);
		cout << fahrenheit << "                 " << celsius << endl;
	}

}

