#include "ex.h"
#include "gm.h"

int add(int a, int b)
{
	return a+b;
}

int main()
{
	int a = 10, b = 11;

	printf("Addition of %d + %d is : %d\n", a, b, add(a, b));
	return 0;
}

