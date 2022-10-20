#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void rate(float r)
{
	float money = 5000;
	for (int i = 0; i < 15; i++)money *= (r + 1);
	printf("%.2f\n", money);
}
int main()
{
	rate(0.1);
	rate(0.105);
	rate(0.11);
	rate(0.115);
	rate(0.12);
	return 0;
}