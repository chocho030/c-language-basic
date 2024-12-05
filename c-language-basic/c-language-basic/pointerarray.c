#include <stdio.h>

int main() {
	int arr[3] = { 1, 2, 3 };
	
	// printf("%p %p %p", &arr[0], &arr[1], &arr[2]);

	int* ptr = arr;
	
	printf("%d %d %d\n", arr[0], arr[1], arr[2]); // 1 2 3
	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2)); // 1 2 3
	printf("%d %d %d\n", *arr, *(arr + 1), *(arr + 2)); // 1 2 3
	printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]); // 1 2 3


	// 배열 포인터 : 시작주소값을 저장한 포인터
	int arr2[2][3] = {
		{10, 20, 30},
		{40, 50, 60},
	};

	printf("%d %d\n", arr2[0][0], arr2[1][0]); // 10 40
	printf("%p %p\n", arr2[0], arr2[1]); // 주소 2개
	printf("%d %d\n", *arr2[0], *arr2[1]); // 10 40

	int(*arrptr1)[2] = arr2; // 배열 포인터
	printf("%d \n", arrptr1[0][0]);




	// 포인터 배열 : 주소값들을 저장하는 배열
	int num1 = 1, num2 = 2, num3 = 3;
	int* ptrarr[3] = { &num1, &num2, &num3 };

	printf("%p %p %p\n", ptrarr[0], ptrarr[1], ptrarr[2]);
	printf("%d %d %d\n", *ptrarr[0], *ptrarr[1], *ptrarr[2]);

	char* str[3] = { "text1", "example", "sample" };

	printf("%s %s %s \n", str[0], str[1], str[2]);

}