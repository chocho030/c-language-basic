#include <stdio.h>

// 포인터는 무엇이냐
// 데이터의 주소

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

// 이중 포인터
int pointer_2() {
	int* ptr;
	int** dptr;
	int num = 20;

	ptr = &num;
	dptr = &ptr;

	printf("%d\n", *ptr);
	printf("%d\n", **dptr);

}

// 포인터를 상수 선언 후 값 바꾸기
int main() {
	const int* ptr;
	int num = 20;
	ptr = &num;

	// *ptr = 1; // 직접 바꾸는건 불가능

	num = 10;

	printf("%d\n", *ptr);
}