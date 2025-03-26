#include <stdio.h>

int multiple() {
	for (int i = 1; i <= 10; i++) {
		printf("%d´Ü\n", i);
		for (int j = 1; j <= 9; j++) {
			printf(" %d x %d = %d\n", i, j, i*j);
		}
	}
}

int star_left() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int star_right() {
	for (int i = 0; i < 5; i++) {
		for (int j = 4; j > i; j--) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
}

int star_stack() {
	int n = 0;
	printf("Ãþ ¼ö: ");
	scanf_s("%d", &n);
	printf("\n");

	for (int i = 0; i < n; i++) {
		for (int j = n; j > i+1; j--) {
			printf(" ");

		}
		for (int k = 0; k <= i*2; k++) {
			printf("*");
		}
		printf("\n");
	}
}