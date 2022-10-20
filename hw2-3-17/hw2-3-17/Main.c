#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
	while (1) {
		printf("Enter account number (-1 to end):");
		scanf("%f", &a);
		if (a == -1){
			break;
		}
		printf("Enter beginning balance:");
		scanf("%f", &b);
		printf("Enter total charges:");
		scanf("%f", &c);
		printf("Enter total credits:");
		scanf("%f", &d);
		printf("Enter credits limit:");
		scanf("%f", &e);
		printf("Account:\t%f\n", a);
		printf("Credits limit:\t%f\n", e);
		printf("Balance:\t%f\n", b + c - d);
		if (d < e) {
			printf("Credit Limit Exeeded\n");
		}
		printf("\n");
	}
	

	system("pause");
	return 0;
}