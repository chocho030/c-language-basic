#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int r_s_p() {
	//if문
	srand(time(NULL));
	int i = rand() % 3;

	if (i == 0) {
		printf("가위\n");
	}else if (i == 1) {
		printf("바위\n");
	}else if (i == 2) {
		printf("보\n");
	}

	//switch문
	switch (i) {
	case 0:
		printf("가위\n");
		break;
	case 1:
		printf("바위\n");
		break;
	case 2:
		printf("보\n");
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
		printf("초등학생");
		break;
	case 14:
	case 15:
	case 16:
		printf("중학생");
		break;
	case 17:
	case 18:
	case 19:
		printf("고등학생");
		break;
	default:
		printf("청소년 아님");
	}
}