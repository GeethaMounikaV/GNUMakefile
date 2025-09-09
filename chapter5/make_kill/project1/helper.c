#include "helper.h"
#include <unistd.h>

// A deliberately slow function to simulate a long compile
int add(int a, int b) {
    sleep(5);   // simulate long computation
    return a + b;
}

