#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {

	double x, y, z, q, dn, w, t;
	int j;

	x = 12;
	y = 48;
	z = 20;
	q = 12486;
	dn = 6;


	x = x * 3600;
	y = y * 60;

	w = x + y + z + q;

	if (w > 86400) {
		cout << "You arrive next day" << endl;


	}
	else {

		cout << "You arrive in the day of departure " << endl;

	}



	int u = x + y + z + q;
	cout << "You will arrive in " << u / 3600 << " Hours" << endl;
	cout << "You will arrive in " << u / 60 % 60 << " Minutes" << endl;
	cout << "You will arrive in " << u % 60 << " Seconds" << endl;




	return 0;
}

