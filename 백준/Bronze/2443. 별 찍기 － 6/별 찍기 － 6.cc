#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (int j = 2 * i - 1; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}