#include <stdio.h>

// �����ʹ� �����̳�
// �������� �ּ�

int pointer_1() {
	int a = 10;
	int* ptr;
	ptr = &a;

	printf("%d \n", a);
	printf("%p \n", &a);
	printf("%p \n", ptr);
	printf("%d \n", *ptr);

	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr1 = arr;

	printf("%d \n", *(ptr1+1));


}

// ���� ������
int pointer_2() {
	int* ptr;
	int** dptr;
	int num = 20;

	ptr = &num;
	dptr = &ptr;

	printf("%d\n", *ptr);
	printf("%d\n", **dptr);

}

// �����͸� ��� ���� �� �� �ٲٱ�
int main() {
	const int* ptr;
	int num = 20;
	ptr = &num;

	// *ptr = 1; // ���� �ٲٴ°� �Ұ���

	num = 10;

	printf("%d\n", *ptr);
}