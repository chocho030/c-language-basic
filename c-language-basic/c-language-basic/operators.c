#include <stdio.h>

// 연산자 실습
int operators() {
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
	// printf("%d\n", a > b);
	// printf("%d\n",  a < b);
	// printf("%d\n", a == b);
	// printf("%d\n", a != b);
	// printf("%d\n", a >= b);
	// printf("%d\n", a <= b);

	// 논리 연산
	// and, or, not (&& || !
	// nor, nand, xor, xnor

	// printf("%d \n", 1 && 0);
	// printf("%d \n", 1 || 0);
	// printf("%d \n", !1);

	// 삼항 연산
	// ? :
	// 조건 ? 출력1 : 출력2
	printf("%d \n", 1 ? 12 : 7);
	printf("%d \n", 0 ? 11 : 9);
	printf("%d \n", 1 && 0 ? 12 : 7);
	printf("%d \n", 0 || 1 ? 12 : 7);
	printf("%d \n", !1 ? 12 : 7);
	printf("%d \n", (1&& 0)|| 0 ? 12 : 7);
	printf("%d \n", (1||1)&&(1&&0) ? 12 : 7);

}