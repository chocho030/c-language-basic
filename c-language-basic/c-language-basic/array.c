#include <stdio.h>

// 숫자 5개를 선언하고 그 5개의 평균을 출력하는 함수
void fiveAverage() {
	int a = 1, b = 2, c = 3, d = 4, e = 5;
	int aver;

	aver = (a + b + c + d + e) / 5;

	printf("%d", aver);
}
// 숫자 5개를 선언하고 그 5개의 평균을 출력하는 함수
void fiveAverageArray() {
	int nums[5] = { 1,2,3,4,5 };
	int sum = 0;
	int aver;

	// 1번
	aver = (nums[0] + nums[1] + nums[2] + nums[3] + nums[4]) / 5;

	// 2번
	for (int i = 0; i < 5; i++) {
		sum += nums[i];
	}	

	aver = sum / 5;

	printf("%d\n", aver);
}


int main() {
	// 비효율적인 저장
	fiveAverage();
	// 배열!
	// 같은 데이터를 여러개 묶어서 저장하는법
	// int a = 1, b = 2, c = 3, d = 4, e = 5;
	int nums[5] = { 1,2,3,4,5 };
	// (데이터 타입) 이름[배열의 크기] = { 초기값 };

	// [] 안부분에는  어떤 데이터를 선택할지 순서를 적어서 조회한다
	printf("%d\n", nums[2]); // 3
	printf("%d\n", nums[-2]); // 메모리값을 벗어나 더미데이터가 출력
	printf("%d\n", nums[8]); // 메모리값을 벗어나 더미데이터가 출력

	// 배열 그래서 어떻게 응용하나요?
	fiveAverageArray();

	// 3명의 4개의 과목에 대한 전체 평균
	// 2차원 배열
	// 1차원 배열을 데이터로 가지고있는 배열
	// 선언
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