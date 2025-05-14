#include <iostream>
using namespace std;

int main()
{
	double D;
	double CD;
	double R;
	
	cout << "informe a cotacao do dolar: ";
	cin >> CD;
	cout << "informe a quantidade de dolares para converter em reais: ";
	cin >> D;
	
	R= D*CD;
	
	cout << "valor em reais: " << R;
}