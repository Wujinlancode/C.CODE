#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
void fun(char s[],int n)
{
	int i; char a[80],*p;
	p = s;
	for (i = 0; i < n; i++)
		a[i] = '*';
	do
	{
		a[i] = *p;
		i++;
	} while (*(p++));
		a[i] = 0;
	strcpy(s, a);
}
main()
{
	int n; char s[80]; 
	printf("\nEnter a string:");
	gets(s);
	printf("\nThe string\"%s\"\n",s);
	printf("\nEnter n (number of*):");
	scanf("%d", &n);
	fun(s, n);
		printf("\nThe string after insert:\"%s\"\n", s);
}