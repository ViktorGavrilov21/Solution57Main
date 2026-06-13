#include "logic.h"

int main() {
    int n;

    cout << "Input number of rods: ";
    cin >> n;

    view_hanoi(n, "A", "B", "C");


	return 0;
}