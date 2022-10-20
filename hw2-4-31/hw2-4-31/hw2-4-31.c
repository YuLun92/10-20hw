#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int l = 0; l < 5; l++)
	{
		for (int j = 0; j < (4 - l); j++)printf(" ");
		for (int j = 0; j < (1 + 2 * l); j++)printf("*");
		printf("\n");
	}
	for (int l = 4; l-- > 0;)
	{
		for (int j = 0; j < (4 - l); j++)printf(" ");
		for (int j = 0; j < (1 + 2 * l); j++)printf("*");
		printf("\n");
	}
	return 0;
}