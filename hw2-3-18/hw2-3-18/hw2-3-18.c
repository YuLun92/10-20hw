#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sales = 0;

	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &sales);
		if (sales == -1)
		{
			break;
		}
		printf("Salary is: $%.2f\n\n", 200 + sales * 0.09);
	}

	return 0;
}