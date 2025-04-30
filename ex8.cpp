#include<iostream>
using namespace std;

int main()
{
	int x;
	int y;
	
	cout << "digite o valor da temperatura em celsius: ";
	cin >> x;
	
	y = (x-32)*5/9;
	cout << "o valor da temperatura em farenheit: " << y;
}