#include <iostream>

using namespace std;

int main() {
	
	/*
	//switchcase

	float a, b, hasil;
	char aritmatika;

	cout << "SELAMAT DATANG DI PROGRAM CALCULATOR" << endl;

	cout << "Masukkan nilai pertama = ";
	cin >> a;
	cout << "Masukkan operator +, -, *, / = ";
	cin >> aritmatika;
	cout << "Masukkan nilai ke dua = ";
	cin >> b;

	cout << "\nHasil perhitungan = ";
	cout << a << aritmatika << b;

	switch (aritmatika)
	{
	case '+':
		hasil = (a + b);
		cout << " = " << hasil << endl;
		break;
	case '-':
		hasil = (a - b);
		cout << " = " << hasil << endl;
		break;
	case '*':
		hasil = (a * b);
		cout << " = " << hasil << endl;
		break;
	case '/':
		hasil = (a / b);
		cout << " = " << hasil << endl;
		break;
	default:
		cout << "Operator yang anda masukkan salah!!" << endl;
	}
	*/

	//if
	float a, b, hasil;
	char aritmatika;

	cout << "SELAMAT DATANG DI PROGRAM CALCULATOR" << endl;

	cout << "Masukkan nilai pertama = ";
	cin >> a;
	cout << "Masukkan operator +, -, *, / = ";
	cin >> aritmatika;
	cout << "Masukkan nilai ke dua = ";
	cin >> b;

	cout << "\nHasil perhitungan = ";
	cout << a << aritmatika << b;

	if (aritmatika == '+')
	{
		hasil = (a + b);
		cout << " = " << hasil << endl;
	}
	else if (aritmatika == '-') {
		hasil = (a - b);
		cout << " = " << hasil << endl;
	}
	else if (aritmatika == '*') {
		hasil = (a * b);
		cout << " = " << hasil << endl;
	}
	else if (aritmatika == '/') {
		hasil = (a / b);
		cout << " = " << hasil << endl;
	}

	


	cin.get();
	return 0;
}