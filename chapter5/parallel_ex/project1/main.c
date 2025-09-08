#include <stdio.h>

void foo(void);
void bar(void);

int main(void) {
    puts("Main start");
    foo();
    bar();
    puts("Main end");
    return 0;
}

