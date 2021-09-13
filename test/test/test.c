#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char a, b, c;
	printf("input character:\n");
	scanf("%c,%c,%c", &a, &b, &c);
	printf("%d,%d,%d\n%c,%c,%c\n", a, b, c, a - 32, b - 32, c - 32);
}