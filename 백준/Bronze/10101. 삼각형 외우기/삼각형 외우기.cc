#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == 60 && b == 60 && c == 60) printf("Equilateral\n");
	else if (a + b + c == 180) {
		if (a == b || a == c || b == c) printf("Isosceles\n");
		else printf("Scalene\n");
	}
	else printf("Error\n");
	return 0;
}