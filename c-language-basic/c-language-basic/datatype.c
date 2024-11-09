#include <stdio.h>

// 자료형
int datatype() {
	// 변수 선언
	// 자료형 변수이름;
	// * 변수이름을 적을때 주의사항
	// 첫번째 자리에 숫자를 넣지 않는다
	// 변수 이름은 대소문자를 구분한다
	// 예약어를 이름으로 사용하지 못한다
	int number; // 변수 선언
	int numbere1 = 10; // 변수를 초기화

	// 정수 - 딱 떨어지는 수 ex) 0, 1, 2
	int intNumber = 17; // 21억, 4바이트 
	long longNumber = 10000; // 8바이트
	// 실수 - 딱 안떨어지는 수 ex) 3.14
	float floatNumber = 1.1f;
	double doubleNumber = 3.3f;


	// 문자
	// 컴퓨터는 어떻게 문자를 인식하는가?
	// 0과 1밖에 없는데...
	// 0,1 이진수
	// 십진법
	char character = '!'; // 문자 1개
	
	// 출력
	printf("intNumber의 숫자는 %d 입니다.\n", intNumber);
	printf("longnumber의 숫자는 %d 입니다.\n", longNumber);
	printf("floatnumber의 숫자는 %f 입니다.\n", floatNumber);
	printf("doublenumber의 숫자는 %f 입니다.\f", doubleNumber);
	printf("character의 기호는 %d 입니다.\f", character);

	printf("Hello world1");

}
