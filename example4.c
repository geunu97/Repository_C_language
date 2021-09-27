#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//도전문제 1
/*int main()
{
	int answer;
	int guess = 0;
	int tries = 0;
	srand((unsigned)time(NULL));
	answer = rand() % 100;
	do {
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;
		if (guess > answer)
			printf("제시한 정수가 높습니다.\n");
		if (guess < answer)
			printf("제시한 정수가 낮습니다.\n");
	} while (guess != answer);
	printf("정답입니다.\n시도횟수=%d\n", tries);
	return 0;
}
*/

//도전문제 2
/*int main(void)
{
	int x, y;
	for (x = 1; x <= 6; x++)
	{
		for (y = 1; y <= 6; y++)
		{
			if (x + y == 6)
				printf("%d+%d=%d\n", x, y, x + y);
		}
	}
	return 0;
}
*/

//도전문제3
/*int main(void)
{
	int x, y, z;
	for (x = 1; x <= 6; x++)
	{
		for (y = 1; y <= 6; y++)
		{
			for (z = 1; z <= 6; z++)
			{
				if (x + y + z == 10)
					printf("%d+%d+%d=%d\n", x, y, z, x + y + z);
			}
		}
	}
	return 0;
}
*/

//과제1
/*
int main(void) {
	int i;
	int sum = 0;

//	for (i = 0; i <= 100; i += 3)
//		sum += i;
//	printf("%d", sum);


//	i = 0;
//	while (i < 100) {
//		sum += i;
//		i += 3;
//	}
//	printf("%d", sum);


//	i = 0;
//	do {
//		sum += i;
//		i += 3;
//	}while(i < 100);
//	printf("%d", sum);
}
*/

//2번은 잘모르겠습니다...
/*int main() {
	int a;
	int sum = 0;

	while(scanf("%d", &a) != EOF) {
		if (a == EOF)
			break;
		sum += a;
	}
	printf("%d", sum);
}
*/

//3-1번
/*int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
*/

//3-2번
/*
int main() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d",j);
		}
		printf("\n");
	}
}
*/