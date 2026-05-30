#include "logic.h"

int main() {
	int num;

	cout << "Input your number: ";
	cin >> num;

	string s = is_pow_4(num, 4) ? "Yes, it`s pow of 4\n" : "No, it isn`t pow of 4\n";

	cout << s;


	return 0;
}