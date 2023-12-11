#include "100-operations.h"

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        // Handle division by zero (you might want to handle this case appropriately)
        return 0;
    }
}

int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        // Handle modulo by zero (you might want to handle this case appropriately)
        return 0;
    }
}