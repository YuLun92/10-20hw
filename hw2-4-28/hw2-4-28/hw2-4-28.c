#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int paycode;
	double salary = 0;

	while (1)
	{
		printf("Enter paycode (1-4, -1 to end): ");
		scanf("%d", &paycode);

		if (paycode == -1)
		{
			break;
		}
		else if (paycode < 1 || paycode > 4)
		{
			printf("Enter a number between 1 and 4.\n\n");
			continue;
		}
		else
		{
			switch (paycode)
			{
			case 1: { // fixed
				printf("Enter your weekly salary: ");
				scanf("%lf", &salary);
				break;
			}
			case 2: { // hourly
				int hour;
				double rate = 0;
				printf("Enter # of hours worked: ");
				scanf("%d", &hour);
				printf("Enter hourly rate of the worker ($00.00):");
				scanf("%lf", &rate);

				if (hour <= 40)
				{
					salary = rate * hour;
				}
				else
				{
					salary = rate * (40 + (hour - 40) * 1.5);
				}
				break;
			}
			case 3: { // commission 250 +5.7%
				double sales;
				printf("Enter gross weekly sales amount: ");
				scanf("%lf", &sales);

				salary = 250 + sales * 0.057;
				break;
			}
			case 4: { // pieceworker linear commission
				double items, unit_rate;
				printf("Enter # of items produced: ");
				scanf("%lf", &items);
				printf("Enter amount of salary for each item produced: ");
				scanf("%lf", &unit_rate);

				salary = unit_rate * items;
				break;
			}
			}
		}

		printf("Your weekly salary is %.2f\n", salary);
	}

	return 0;
}