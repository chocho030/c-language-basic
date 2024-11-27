// minus : a와 b가 들어와서 a-b 연산을 한뒤 결과를 리턴하는 함수
// evenOdd : 숫자가 들어오면 홀수인지 짝수인지 판단하는 함수 (함수 내부에서 홀수 짝수 여부 출력)
// isEven : 들어온 숫자가 짝수이면 boolean 1을 리턴하는 함수
// isOdd : 들어온 숫자가 홀수이면 boolean 1을 리턴하는 함수

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

	// 홀수 짝수
	evenOdd(1);
	evenOdd(2);

	// 짝수인가?
	if (isEven(2)) {
		printf("짝수가 맞습니다");
	}
	if (isEven(1)) {
		printf("짝수가 맞습니다");
	}

	// 홀수인가?
	if (isOdd(2)) {
		printf("홀수인가 맞습니다");
	}
	if (isOdd(1)) {
		printf("홀수인가 맞습니다");
	}

}

int min(int a, int b) {
	int c;
	c = a - b;

	return c;
}

// evenOdd : 숫자가 들어오면 홀수인지 짝수인지 판단하는 함수 (함수 내부에서 홀수 짝수 여부 출력)
void evenOdd(int a) {
	if (a % 2 == 0) {
		printf("짝수");
	}
	else {
		printf("홀수");
	}
	return;
}


// isEven : 들어온 숫자가 짝수이면 boolean 1을 리턴하는 함수

bool isEven(int a) {
	return a % 2 == 0;
}


// isOdd : 들어온 숫자가 홀수이면 boolean 1을 리턴하는 함수

bool isOdd(int a) {
	return a % 2 != 0;
}