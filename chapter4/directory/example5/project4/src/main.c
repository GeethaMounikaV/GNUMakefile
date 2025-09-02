#include "ex.h"
#include <math.h>   // Example: using libm

int main() {
    print_message();

    double val = cos(0.0);   // libm function
    printf("cos(0) = %.2f\n", val);

    return 0;
}

