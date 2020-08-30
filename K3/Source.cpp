#include<stdio.h>
int main() {
	int x;
	printf("Enter number : ");
	scanf_s("%d", &x);
	printf("Base = %d\n", x);
	printf("Height = %d\n", x * 2);
	printf("Area = %d\n", (x * 2) * x);
	for (int i = 1;i <= x;i++) {
		for (int j = 1;j <= x;j++) {
			printf(" *");
		}

		printf("\n");
	}
	for (int i = 1;i <= x;i++) {
		for (int j = 1;j <= x;j++) {
			printf(" *");
		}

		printf("\n");
	}
	return 0;
}