#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1번
/*int main(void) {
	char ch;
	scanf("%c", &ch);

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'ou')
		printf("모음입니다.");
	else
		printf("자음입니다.");
	return 0;
}
*/

//2번
/*int main(void) {
	int a, b, c, min;
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b) {
		int min = b;
		if (min >= c)
			printf("최솟값 : %d", c);
		else
			printf("최솟값 : %d", min);
	}
	else {
		int min = a;
		if (min >= c)
			printf("최솟값 : %d", c);
		else
			printf("최솟값 : %d", min);
	}
}*/

//3번
/*
int main(void) {
	int a, b, c,sum,avg,result;
	printf("국어 영어 수학 점수를 입력해주세요:");
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	avg = sum / 3;

	printf("합 : %d\n", sum);
	printf("평균 : %d\n", avg);
	if (avg >= 90)
		printf("학점 : A");
	else if(avg >= 80)
		printf("학점 : B");
	else
		printf("학점 : C");
}
*/

//4번
/*
int main(void) {
	int user, com;
	srand(time(NULL));
	com = rand() % 3 + 1;// (1=가위, 2=바위, 3=보)

	printf("사용자값을 입력하세요 :");
	scanf("%d", &user);
	if (user == 1 && com == 2)
		printf("사용자가 졌다");
	else if(user == 1 && com == 3)
		printf("사용자가 이겼다");
	else if (user == 2 && com == 1)
		printf("사용자가 이겼다");
	else if (user == 2 && com == 3)
		printf("사용자가 졌다");
	else if (user == 3 && com == 1)
		printf("사용자가 졌다");
	else if (user == 3 && com == 2)
		printf("사용자가 이겼다");
	else
		printf("비겼다");
}
*/

//5번
/*
int main(void) {
	int a, b;
	printf("키를 입력해주세요 : ");
	scanf("%d", &a);
	printf("나이를 입력해주세요 : ");
	scanf("%d", &b);

	if (a >= 140 && b >= 10) 
		printf("타도 좋습니다.");
	else
		printf("죄송합니다.");
}
*/

//6번
/*
int main(void) {
	int a;
	scanf("%d", &a);
	switch (a) {
	case 1:
		printf("Jan");
		break;
	case 2:
		printf("Feb");
		break;
	case 3:
		printf("Mar");
		break;
	case 4:
		printf("Apr");
		break;
	case 5:
		printf("May");
		break;
	case 6:
		printf("Jun");
		break;
	case 7:
		printf("Jul");
		break;
	case 8:
		printf("Aug");
		break;
	case 9:
		printf("Set");
		break;
	case 10:
		printf("Oct");
		break;
	case 11:
		printf("Nov");
		break;
	case 12:
		printf("Dec");
		break;
	default:
		break;
	}
}
*/

//7번
/*
int main(void) {
	int x, y;
	printf("x,y를 입력해주세요 :");
	scanf("%d %d", &x, &y);
	if (x > 0 && y > 0)
		printf("1사분면");
	else if(x < 0 && y > 0)
		printf("2사분면");
	else if (x < 0 && y < 0)
		printf("3사분면");
	else
		printf("4사분면");
}
*/