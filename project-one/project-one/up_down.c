#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int up_down() {
	int user_num = 0;
	srand(time(NULL));
	int computer_num = rand() % 100 + 1;
	int chance = 0;

	while (chance < 5) {
		printf("���ڸ� �Է��ϼ��� (1 ~ 100) : ");
		scanf_s("%d", &user_num);

		if (user_num == computer_num) {
			printf("�����Դϴ�.\n");
			break;
		}
		else if (user_num < computer_num) {
			printf("��  %d/5\n", ++chance);
		}
		else if (user_num > computer_num) {
			printf("�ٿ�  %d/5\n", ++chance);
		}
	}

	if (chance == 5) {
		printf("\nFail\n");
		printf("���� : %d\n", computer_num);
	}

	return 0;
}