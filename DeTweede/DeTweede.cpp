#include <stdio.h>

int x;
int y;
int z;
int product;

int main(void)
{
	printf("Calculating product of three intergers…\n");
	printf("Enter three intergers \n");
	printf("x:");
	scanf_s("%d", &x);
	printf("y:");
	scanf_s("%d", &y);
	printf("z:");
	scanf_s("%d", &z);
	product = x * y * z;
	printf("The result is %d", product);

	return 0;
}