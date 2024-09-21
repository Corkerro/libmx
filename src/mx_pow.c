#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow) {
    if (pow == 0) {
        return 1.0;
    } else if (pow == 1) {
        return n;
    } else if (pow % 2 == 0) {
        double half_pow = mx_pow(n, pow / 2);
        return half_pow * half_pow;
    } else {
        return n * mx_pow(n, pow - 1);
    }
}
