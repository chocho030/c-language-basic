#include <stdio.h>

// ���� 5���� �����ϰ� �� 5���� ����� ����ϴ� �Լ�
void fiveAverage() {
	int a = 1, b = 2, c = 3, d = 4, e = 5;
	int aver;

	aver = (a + b + c + d + e) / 5;

	printf("%d", aver);
}
// ���� 5���� �����ϰ� �� 5���� ����� ����ϴ� �Լ�
void fiveAverageArray() {
	int nums[5] = { 1,2,3,4,5 };
	int sum = 0;
	int aver;

	// 1��
	aver = (nums[0] + nums[1] + nums[2] + nums[3] + nums[4]) / 5;

	// 2��
	for (int i = 0; i < 5; i++) {
		sum += nums[i];
	}	

	aver = sum / 5;

	printf("%d\n", aver);
}


int main() {
	// ��ȿ������ ����
	fiveAverage();
	// �迭!
	// ���� �����͸� ������ ��� �����ϴ¹�
	// int a = 1, b = 2, c = 3, d = 4, e = 5;
	int nums[5] = { 1,2,3,4,5 };
	// (������ Ÿ��) �̸�[�迭�� ũ��] = { �ʱⰪ };

	// [] �Ⱥκп���  � �����͸� �������� ������ ��� ��ȸ�Ѵ�
	printf("%d\n", nums[2]); // 3
	printf("%d\n", nums[-2]); // �޸𸮰��� ��� ���̵����Ͱ� ���
	printf("%d\n", nums[8]); // �޸𸮰��� ��� ���̵����Ͱ� ���

	// �迭 �׷��� ��� �����ϳ���?
	fiveAverageArray();

	// 3���� 4���� ���� ���� ��ü ���
	// 2���� �迭
	// 1���� �迭�� �����ͷ� �������ִ� �迭
	// ����
	int score[3][4] = {
		{80,60,40,90},
		{82,60,42,90},
		{84,60,44,90},
	};
	printf("%d", score[1][2]); // 42
	printf("%d", score[2][2]); // 44
	printf("%d \n\n", score[0][3]); // 90
	float sum = 0;
	for (int i = 0; i < 3; i++) {
		

		for (int j = 0; j < 4; j++) {
			sum += score[i][j];
		}

	}
	float average = sum / 12;

	printf("%f\n", average);

	
	
	


}