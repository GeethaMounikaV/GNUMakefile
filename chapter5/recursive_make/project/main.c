#include <stdio.h>
#include "mathutils.h"

int main(void) {
    int a = 5, b = 3;
    printf("Sum: %d\n", add(a, b));
    printf("Difference: %d\n", subtract(a, b));
    return 0;
}

