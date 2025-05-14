#include <iostream>
using namespace std;

int main(){
	double a;
	double b;
	double c;
	double d;
	double e;
	
	double vt;
	double vp;
	double trc;
	
	cout << "informe o valor dos 5 produtos a serem comprados" << endl;
	cout << "primeiro produto: ";
	cin >> a ;
	cout << "segundo produto: ";
	cin >> b ;
	cout << "terceiro produto: ";
	cin >> c ;
	cout << "quarto produto: ";
	cin >> d ;
	cout << "quinto produto: ";
	cin >> e ;
	cout << "informe o valor a pagar: ";
	cin >> vp ;
	
	vt=a+b+c+d+e;
	trc=vp-vt;
	
	cout << "o valor total da compra: " << vt << endl << "troco: " << trc;
}