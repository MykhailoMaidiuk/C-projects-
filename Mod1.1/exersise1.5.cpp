#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {
	double a, b, c;

	a = 3 * 3600;
	b = 30 * 60;
	c = 8700;

	int y = a + b + c;



	cout << "He arrive in " << y / 3600 << " Hours" << endl;
	cout << "He arrive in " << y / 60 % 60 << " Minutes" << endl;
	cout << "He arrive in " << y % 60 << " Seconds" << endl;



	return 0;
}

