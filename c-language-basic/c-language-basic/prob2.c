// 사용자의 입력을 받아서 50 이상인지 이하인지 출력해주세요
#include <stdio.h>

int prob1() {
	int num = 0;

	scanf_s("%d", &num);

	if (num > 50) {
		printf(",");
	}
	else {
		printf(".");
	}
}
// 사용자의 입력을 x,y 좌표를 입력받아서
// 이게 몇사분면인지 출력하세요

int prob2() {
	int x, y;

	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0) {
		printf("1");
	}
	else if (x < 0 && y > 0) {
		printf("2");
	}
	else if (x < 0 && y < 0) {
		printf("3");
	}
	else if (x > 0 && y < 0) {
		printf("4");
	}
	else {
		printf("what?");
	}
}

// for 문으로 입력받은 숫자만큼 A 출력하기
int prob3() {
	int num;

	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		printf("A");
	}
}

// while
int prob4() {
	int num;

	scanf_s("%d", &num);
	int i = 0;
	while (i < num) {
		printf("A");
		i++;
	}
}

// 특정 문자를 맞출때 까지 입력하기
int prob5() {
	char num = 'a';
		
	while (num != 'A') {
		printf("input : ");
		scanf_s("%c", &num, 1);
		printf("\n");
	}
	printf("fin");
}

// 특정 문자를 맞출때 까지 입력하기
int prob6() {
	char num = 'a';

	while (1) {
		if (num == 'A') {
			break;
		}
		printf("input : ");
		scanf_s("%c", &num, 1);
		printf("\n");
	}
	printf("fin");
}
