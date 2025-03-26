#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int up_down() {
	int user_num = 0;
	srand(time(NULL));
	int computer_num = rand() % 100 + 1;
	int chance = 0;

	while (chance < 5) {
		printf("숫자를 입력하세요 (1 ~ 100) : ");
		scanf_s("%d", &user_num);

		if (user_num == computer_num) {
			printf("정답입니다.\n");
			break;
		}
		else if (user_num < computer_num) {
			printf("업  %d/5\n", ++chance);
		}
		else if (user_num > computer_num) {
			printf("다운  %d/5\n", ++chance);
		}
	}

	if (chance == 5) {
		printf("\nFail\n");
		printf("정답 : %d\n", computer_num);
	}

	return 0;
}