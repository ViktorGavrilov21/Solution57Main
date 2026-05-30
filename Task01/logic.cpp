#include "logic.h"

bool is_pow_4(int num, int pow) {
	if (num == pow) {
		return true;
	}
	if (pow > num) {
		return false;
	}

	return is_pow_4(num, pow * 4);
}