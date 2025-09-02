#include "main.h"

void print_msg()
{
	printf("Hello from main.h\n");
}


int main()
{
	print_msg();
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d", &b);
	int c = sum(a,b);
	printf("Sum of %d and %d is %d\n", a, b, c);
	return 0;
}
