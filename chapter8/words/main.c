#include <stdio.h>
#include "utils.h"

int main() {
    printf("Result from add(2,3) = %d\n", add(2, 3));
    printf("Message from utils: %s\n", get_message());
    return 0;
}

