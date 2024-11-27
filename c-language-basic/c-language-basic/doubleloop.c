// 1 ���� 9���� ������ּ���
#include <stdio.h>

int loop1() {
	for (int i = 1; i < 10; i++) {
		printf("%d", i);
	}
}

int loop1_1() {
	int i = 1;
	while (i < 10) {
		printf("%d\n", i++);
	}
}


// ������ 2���� ������ּ��� ex) 2 x 1 = 2, 2 x 2 = 4
int loop2() {
	for (int i = 1; i < 10; i++) {
		printf("2 X %d = %d\n", i, 2 * i);
	}
}

int loop2_1() {
	int i = 1;
	while (i < 10) {
		printf("2 X %d = %d\n", i, i * 2);
		i++;
	}
}



// ������ 1~9���� ������ּ��� 

int loop3() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}
}

int loop3_1() {
	int i = 1;
	int j = 1;

	while (i < 10) {
		while (j < 10) {
			printf("%d X %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
		j = 1;
	}
}






// *
// **
// ***
// ****
// *****
int loop4() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int loop4_1() {
	int i = 0;
	int j = 0;

	while (i < 6) {
		while (j < i) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
		j = 0;

	}
}




// *
// ***
// *****
// *******
// *********

int loop5() {
	for (int i = 1; i < 10; i+=2) { 
		for (int j = 0; j < i ; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int loop5_1() {
	int i = 1;
	int j = 0;

	while (i < 10) {
		while (j < i) {
			printf("*");
			j++;
		}
		printf("\n");
		i+=2;
		j = 0;

	}
}

// ��ó���� 3���� ¥�� �ܾ �Է¹ް�
// ����ڰ� 1���ھ� �Է��� �޾Ƽ� ��� ���������� �ܾ �ԷµǾ����� Ż���ϴ� ���α׷�
// ex ) cat
// a
// b
// c
// a
// t 
// Ż��!


int loop6() {

	char num1, num2, num3;
	scanf_s(" %c", &num1);
	scanf_s(" %c", &num2);
	scanf_s(" %c", &num3);

	char num4 = 0;

	while (num4 != num1) {
		printf("�Է� : ");
		scanf_s("%c", &num4);
		printf("\n");
	}

	while (num4 != num2) {
		printf("�Է� : ");
		scanf_s("%c", &num4);
		printf("\n");
	}
	while (num4 != num3) {
		printf("�Է� : ");
		scanf_s("%c", &num4);
		printf("\n");
	}

}
