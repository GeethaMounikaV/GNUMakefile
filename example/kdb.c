#include <stdio.h>
#include "def.h"
#include "common.h"

void hello(void)
{
	printf("Hello from common file\n");
}

void kdb_test()
{
	printf("%d %d\n", X, Y);
	hello();
}
