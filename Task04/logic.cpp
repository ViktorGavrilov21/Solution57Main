#include "logic.h"

bool is_prime(int n, int d = 2) {
	if (n < 2) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	if (n % d == 0) {
		return false;
	}
	if (d * d > n) {
		return true;
	}
	return is_prime(n, d + 1);
}

int find_first_prime_div(int number, int div) {
	if (div > number) {
		return -1;
	}

	if (is_prime(div)) {
		if (number % div == 0) {

			return div;
		}
	}

	return find_first_prime_div(number, div + 1);
}

int recursion(int a, int b) {
	int div_b = find_first_prime_div(b, 2);

	int quadrat = b / div_b;

	if (a % quadrat == 0) {
		return quadrat;
	}

	if (quadrat == 0) {
		return 0;
	}


	return recursion(a, quadrat);
}

int divide_into_squares(int a, int b) {
	if (a <= 0 || b <= 0) {
		return -1;
	}

	if (a < b) {
		int t = a;
		a = b;
		b = t;
	}

	return recursion(a, b);
}
