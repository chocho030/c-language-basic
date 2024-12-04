// 2차원 배열을 for loop 을 이용하여 순회하시오!
// int arr[3][4] = {
//        {1, 2, 3, 4},
//        { 5, 6, 7, 8 },
//        { 9, 10, 11, 12 }
//    };
// output : 1 2 3 4 5 6 7 8 9 10 11 12 

#include <stdio.h>

int arr_prob() {
	int arr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d", arr[i][j]);
		}
	}

}
