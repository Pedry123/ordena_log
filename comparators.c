#include<stdio.h>

int equal(int x, int y) {
    if (x == y) {
        return 1;
    }
    return 0;
}

int greater(int x, int y) {
    if (x > y) {
        return 1;
    }
    return 0;
}

int lower(int x, int y) {
    if (x < y) {
        return 1;
    }
    return 0;
}