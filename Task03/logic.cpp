#include "logic.h"

bool recursion(int array[], int n, int a, int b) {
    if (a > b) {
        return false;
    }

    int mid = a + (b - a) / 2;

    if (array[mid] == n) {
        return true;
    }

    if (array[mid] > n) {
        return recursion(array, n, a, mid - 1);
    }

    return recursion(array, n, mid + 1, b);
}

bool binary_search(int array[], int size, int n) {
    if (size <= 0) {
        return -1;
    }

    return recursion(array, n, 0, size - 1);
}

