// ������� �Է��� �޾Ƽ� 50 �̻����� �������� ������ּ���
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
// ������� �Է��� x,y ��ǥ�� �Է¹޾Ƽ�
// �̰� ���и����� ����ϼ���

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

// for ������ �Է¹��� ���ڸ�ŭ A ����ϱ�
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

// Ư�� ���ڸ� ���⶧ ���� �Է��ϱ�
int prob5() {
	char num = 'a';
		
	while (num != 'A') {
		printf("input : ");
		scanf_s("%c", &num, 1);
		printf("\n");
	}
	printf("fin");
}

// Ư�� ���ڸ� ���⶧ ���� �Է��ϱ�
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
