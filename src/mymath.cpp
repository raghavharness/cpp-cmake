#include "mymath.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

// int multiply(int a, int b) {
//     return a * b;
// }

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        // Handle division by zero, return a special value or throw an exception
        return 0; // For simplicity, returning 0 in case of division by zero
    }
}

// int advancedOperation(int a, int b) {
//     // Some more advanced operation
//     return (a * a) + (b * b);
// }