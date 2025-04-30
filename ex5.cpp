#include <iostream>
using namespace std;

int main()
{
	double v1;
	double v2;
	double v3;
	double v4;
	double media;
	
	cout << "informe o primeiro valor: ";
	cin >> v1;
	
	cout << "informe o segundo valor: ";
	cin >> v2;
	
	cout << "informe o terceiro valor: ";
	cin >> v3;
	
	cout << "informe o quarto valor: ";
	cin >> v4;
	
	media = (v1+v2+v3+v4)/4;
	cout << "a media aritmetica dos valores digitados: " << media;
	
	return 0;
}