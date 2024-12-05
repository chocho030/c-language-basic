// 포인터 리뷰

int review1() {
	int num = 10;
	int* ptr = &num;
	*ptr = 20;
	printf("%d %d", num, *ptr);
}
// 실행결과 추론
// 10, 20
// 20 20

int review2() {
	int num = 5;
	int* ptr1 = &num;
	int** ptr2 = &ptr1;
	**ptr2 = 15;
	printf("%d %d %d", num, *ptr1, **ptr2);
}
// 실행결과 추론
// 5, 5, 15
// 15 15 15

int review3() {
	int a = 10, b = 20;
	int* p1 = &a;
	int* p2 = &b;
	*p1 = *p2;
	printf("%d %d", a, b);
}
// 실행결과 추론
// 20, 20

int review4() {
	int x = 100;
	int* ptr = &x;
	*ptr += 50;
	ptr = &x;
	*ptr *= 2;
	printf("%d", x);
}
// 실행결과 추론
// 300

