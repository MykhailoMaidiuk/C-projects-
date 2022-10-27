
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {

	double x, d, z, v;
	x = 54.731;

	v = unsigned(x * pow(10, 1)) % 100 % 10;




	cout << "Your number after point " << v << endl;


	return 0;
}

