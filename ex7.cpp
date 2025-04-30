#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double Nm =1.852;
	double Nmq;
	double Km;
 
    cout << "digite a quantidade milhas: ";
    cin >> Nmq;
    
    Km = Nmq*Nm;
    cout << "o valor em quilometros é: " << Km; 
}


