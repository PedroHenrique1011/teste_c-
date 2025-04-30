#include <iostream>
using namespace std;

int main()
{
	double altura;
	double base;
	double area;
	
	cout << "digite a altura do triangulo: ";
	cin >> altura;
	
	cout << "digite a base do triangulo: ";
	cin >> base;
	
	area = (altura*base)/2;
	cout << "a area: " << area;
	
	return 0;
}