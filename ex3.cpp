#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double diagonal;
	double hip;
	double cat;
	
	cout << "informe a diagonal/hipotenusa: ";
	cin >> diagonal;
	
	hip = pow(diagonal,1);
	cat = hip/2;
	
	cout << "a area do quadrado: " << cat;
	
	return 0;
}