#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int r_s_p() {
	//if��
	srand(time(NULL));
	int i = rand() % 3;

	if (i == 0) {
		printf("����\n");
	}else if (i == 1) {
		printf("����\n");
	}else if (i == 2) {
		printf("��\n");
	}

	//switch��
	switch (i) {
	case 0:
		printf("����\n");
		break;
	case 1:
		printf("����\n");
		break;
	case 2:
		printf("��\n");
		break;

	}

	return 0;
}

int age() {
	int age = 0;
	scanf_s("%d", &age);

	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
		printf("�ʵ��л�");
		break;
	case 14:
	case 15:
	case 16:
		printf("���л�");
		break;
	case 17:
	case 18:
	case 19:
		printf("����л�");
		break;
	default:
		printf("û�ҳ� �ƴ�");
	}
}