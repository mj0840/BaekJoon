#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, a, b, sum[100];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		sum[i] = a + b;
	}
	for (int i = 0; i < t; i++) {
		printf("%d\n", sum[i]);
	}
	return 0;
}