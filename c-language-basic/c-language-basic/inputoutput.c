#include <stdio.h>

int grade() {
	char grade;
	scanf_s(" %c", &grade);

	printf("당신의 학점은 %c입니다.\n", grade);




}

int main() {
	int num1, num2;

	scanf_s("%d %d", &num1, &num2);

	printf("%d", num1 + num2);


}
