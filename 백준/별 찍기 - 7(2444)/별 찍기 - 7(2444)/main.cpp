#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);



	for (int i = 1; i <= n; i++) {
		for (int j = i; j < n; j++) {
			printf(" ");
		}
		for (int j = 1; j < 2 * i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 1; j < 2 * (n - i); j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}