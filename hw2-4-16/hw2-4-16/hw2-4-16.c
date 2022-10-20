#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("(A)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i >= j)printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i <= j)printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i > j)printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	printf("(D)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i < j)printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	return 0;
}