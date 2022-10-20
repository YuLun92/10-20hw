#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hour;
	float rate;
	
	while (1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf("%d", &hour);
		if (hour == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker ($00.00):");
		scanf("%f", &rate);

		float salary;
		if (hour <= 40)
		{
			salary = rate * hour;
		}
		else
		{
			salary = rate * (40 + (hour - 40) * 1.5);
		}

		printf("Salary is $%.2f\n\n", salary);
	}

	return 0;
}