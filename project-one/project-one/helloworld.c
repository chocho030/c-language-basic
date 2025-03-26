#include <stdio.h>

int test1() {
	for (int a = 0; a < 5; a++) {
		printf("%d\n", a);
	}

	int i = 0;
	while (i <= 10) {
		printf(" while %d\n", i++);
	}

	for (int a = 0; a < 5; a++) {
		printf("½Ãµµ: %d\n", a);
		for (int b = 0; b < 5; b++) {
			printf("%d\n", b);
		}
	}


	return 0;
}