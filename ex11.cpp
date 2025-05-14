#include <iostream>
#include <math.h>
using namespace std ;

int main(){
	double x;
	double y;
	double z;
	
	cout << "potenciacao" << endl << "informe o valor a ser multiplicado:" ;
	cin >> x;
	cout << "informe a potencia: ";
	cin >> y;
	
	z=pow(x,y);
	cout << "o valor de " << x << " elevado a " << y << ": " << z;
}