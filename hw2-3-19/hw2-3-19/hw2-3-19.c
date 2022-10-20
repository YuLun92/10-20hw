#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float principal;
	float rate;
	int days;

	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &principal);
		if (principal == -1) 
		{
			break;
		}
		printf("Enter interest rate: ");
		scanf("%f", &rate);

		printf("Enter term of loan in days: ");
		scanf("%d", &days);

		printf("The interest charge is $%.2f\n\n", principal * rate * days / 365.0);
	}
	return 0;
}