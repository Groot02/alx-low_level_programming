#include <stdio.h>

/**
 * main-print of sizes of computer
 * code on c
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char:%lu Byte(s)\n", sizeof(a));
	printf("size of an int:%lu Byte(s)\n", sizeof(b));
	printf("size of a long int:%lu Byte(s)\n", sizeof(c));
	printf("size of a long long int:%lu Byte(s)\n", sizeof(d));
	printf("size of a float:%lu Byte(s)\n", sizeof(e));
	return (0);
}
