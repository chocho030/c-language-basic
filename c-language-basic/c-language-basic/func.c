// minus : a�� b�� ���ͼ� a-b ������ �ѵ� ����� �����ϴ� �Լ�
// evenOdd : ���ڰ� ������ Ȧ������ ¦������ �Ǵ��ϴ� �Լ� (�Լ� ���ο��� Ȧ�� ¦�� ���� ���)
// isEven : ���� ���ڰ� ¦���̸� boolean 1�� �����ϴ� �Լ�
// isOdd : ���� ���ڰ� Ȧ���̸� boolean 1�� �����ϴ� �Լ�

#include <stdio.h>
#include <stdbool.h>

int min(int a, int b);
void evenOdd(int a);
bool isEven(int a);
bool isOdd(int a);

int main() {
	int x, y;
	int result = 0;



	scanf_s("%d %d", &x, &y);

	result = min(x, y);
	printf("%d", result);

	// Ȧ�� ¦��
	evenOdd(1);
	evenOdd(2);

	// ¦���ΰ�?
	if (isEven(2)) {
		printf("¦���� �½��ϴ�");
	}
	if (isEven(1)) {
		printf("¦���� �½��ϴ�");
	}

	// Ȧ���ΰ�?
	if (isOdd(2)) {
		printf("Ȧ���ΰ� �½��ϴ�");
	}
	if (isOdd(1)) {
		printf("Ȧ���ΰ� �½��ϴ�");
	}

}

int min(int a, int b) {
	int c;
	c = a - b;

	return c;
}

// evenOdd : ���ڰ� ������ Ȧ������ ¦������ �Ǵ��ϴ� �Լ� (�Լ� ���ο��� Ȧ�� ¦�� ���� ���)
void evenOdd(int a) {
	if (a % 2 == 0) {
		printf("¦��");
	}
	else {
		printf("Ȧ��");
	}
	return;
}


// isEven : ���� ���ڰ� ¦���̸� boolean 1�� �����ϴ� �Լ�

bool isEven(int a) {
	return a % 2 == 0;
}


// isOdd : ���� ���ڰ� Ȧ���̸� boolean 1�� �����ϴ� �Լ�

bool isOdd(int a) {
	return a % 2 != 0;
}