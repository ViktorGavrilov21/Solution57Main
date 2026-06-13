#include "logic.h"

void view_hanoi(int n, string from, string to, string temp) {
    if (n == 0) {
        return;
    }

    view_hanoi(n - 1, from, temp, to);

    cout << from << "-->" << to << endl;

    view_hanoi(n - 1, temp, to, from);
}