#include <stdio.h>

// 연산자 실습
int main() {
	// 산술 연산
	int a = 20;
	int b = 10;

	// printf("%d + %d = %d \n",a, b, a + b);
	// printf("%d - %d = %d \n",a, b, a - b);
	// printf("%d * %d = %d \n",a, b, a * b);
	// printf("%d / %d = %d \n",a, b, a / b);
	// printf("%d %% %d = %d \n",a, b, a % b);


	// 대입 연산
	// printf("%d \n", a);
	// a += 10; // a = a + 10;
	// printf("%d \n", a);
	// a -= 10; // a = a - 10;
	// printf("%d \n", a);
	// a *= 10; // a = a * 10;
	// printf("%d \n", a);
	// a /= 10; // a = a / 10;
	// printf("%d \n", a);
	// a %= 10; // a = a % 10;
	// printf("%d \n", a);

	// 증감 연산
	a++; // a = a + 1;
	++a; // a = a + 1;

	a--; // a = a - 1;
	--a; // a = a - 1;

	// a = 0;
	// printf("%d \n", a++);
	// printf("%d \n", --a);
	// printf("%d \n", ++a);
	// printf("%d \n", a++);
	// printf("%d \n", a--);
	// printf("%d \n", --a);

	// 관계 연산 (참, 거짓으로 출력)
	// < > == != <= >=
	printf("%d\n", a > b);
	printf("%d\n",  a < b);
	printf("%d\n", a == b);
	printf("%d\n", a != b);
	printf("%d\n", a >= b);
	printf("%d\n", a <= b);


}