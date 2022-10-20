#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int length, breadth;
	scanf("%d%d", &length, &breadth);

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < breadth; j++)
		{
			if ((i == 0 || i == (length - 1) || j == 0 || j == (breadth - 1)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}