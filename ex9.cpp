#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int x;
	int y;
	
	cout << "digite o valor do diametro do circulo: ";
	cin >> x;
	
	y = pow((x/2),2)*M_PI;
	
	cout << "o valor da area do circulo: " << y;
}
