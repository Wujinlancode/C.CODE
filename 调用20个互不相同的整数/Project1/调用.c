#include <stdlib.h>
#include <stdio.h>
#define N 20
void fun(int *a)
{
	int i, X, n = 0;
	X = rand() % 20;
	while (n<20)
	{
		for (i = 0; i < n; i++)
			if (X == a[i])
				break;
		if (i==n)
		{
			a[n] = X;
			n++;
		}
		X = rand() % 20;
	}
}
main()
{
	int X[N] = {0}, i;
	fun(X);
	printf("The result:\n");
	for (i = 0; i < N; i++)
	{
		printf("%4d", X[i]);
		if((i+1)%5==0)
			printf("\n");
	}
	printf("\n\n");
}