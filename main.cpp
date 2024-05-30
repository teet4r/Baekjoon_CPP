#include <iostream>

using namespace std;

#define fast_io (ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL))
#define cout_precision(x) (cout << fixed, cout.precision(x))
#define nl '\n'

//#include "number.h"
//#include "matrix.h"
//#include "date.h"

int fast_power(int base, int exp) {
	int r = 1;

	while (exp) {
		if (exp & 1)
			r *= base; // % c;
		exp >>= 1;
		base *= base; // %c;
	}

	return r;
}

bool is_leapyear(int y) {
	if (!(y % 400))
		return true;
	if (!(y % 100))
		return false;
	return !(y % 4);
}

int main() {
	fast_io;

	return 0;
}