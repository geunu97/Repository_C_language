#include <stdio.h>


int main(void)
{
	int x, y, a, b;
	double h;


	printf("컴퓨터 과목의 점수를 입력하시오:");
	scanf("%d", &x);
	printf("c언어 과목의 점수를 입력하시오:");
	scanf("%d", &y);
	printf("영어과목의 점수를 입력하시오:");
	scanf("%d", &a);
	printf("수학 과목의 점수를 입력하시오:");
	scanf("%d", &b);

	h = (a + b + x + y) * 0.25;
	printf("평균점수는 %lf 점입니다\n", h);




}
