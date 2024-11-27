// 1 부터 9까지 출력해주세요
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


// 구구단 2단을 출력해주세요 ex) 2 x 1 = 2, 2 x 2 = 4
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



// 구구단 1~9단을 출력해주세요 

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

// 맨처음에 3글자 짜리 단어를 입력받고
// 사용자가 1글자씩 입력을 받아서 모든 순차적으로 단어가 입력되었을때 탈출하는 프로그램
// ex ) cat
// a
// b
// c
// a
// t 
// 탈출!


int loop6() {

	char num1, num2, num3;
	scanf_s(" %c", &num1);
	scanf_s(" %c", &num2);
	scanf_s(" %c", &num3);

	char num4 = 0;

	while (num4 != num1) {
		printf("입력 : ");
		scanf_s("%c", &num4);
		printf("\n");
	}

	while (num4 != num2) {
		printf("입력 : ");
		scanf_s("%c", &num4);
		printf("\n");
	}
	while (num4 != num3) {
		printf("입력 : ");
		scanf_s("%c", &num4);
		printf("\n");
	}

}
