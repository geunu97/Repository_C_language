//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//도전문제
/*
int main(void)
{
	double f_temp;
	double c_temp;
	printf("화씨온도를 입력하시오");
	scanf("%lf", &f_temp);
	c_temp = 5.0 / 9.0 * (f_temp - 32);
	printf("섭씨온도는 %lf입니다", c_temp);
	return 0;
}
*/

//1번
/*
int main(void) {
	int a,b,c;
	printf("100보다 작은 정수를 입력해주세요:");
	scanf("%d", &a);
	b = a / 10;
	c = a % 10;
	printf("십의 자리 : %d\n", b);
	printf("일의 자리 : %d\n", c);

	return 0;
}
*/

//2번
/*
int main(void) {
	double cm;
	double inch;
	double feet;

	printf("키를 입력하세요:");
	scanf("%lf", &cm);

	inch = cm / 2.54;
	feet = inch / 12.0;
	inch = inch - (int)feet * 12;

	printf("%d는 %d피트 %lf인치입니다\n", (int)cm, (int)feet, inch);

	return 0;
}
*/

//3번
/*
int main(void) {
	int value;
	
	printf("정수를 입력하세요:");
	scanf("%d", &value);

	value = ~value;
	value ++;

	printf("2의 보수는 : %d\n", value);
	return 0;
}
*/

//4번
/*
int main(void) {
	int value1, value2, value3, maxvalue;

	printf("세개의 실수를 입력하세요:");
	scanf("%d %d %d", &value1, &value2, &value3);

	maxvalue = (value1 > value2) ? value1 : value2;
	maxvalue = (maxvalue > value3) ? maxvalue : value3;

	printf("최대값은 : %d\n", maxvalue);
	return 0;
}
*/

//5번
/*
int main(void) {
	int a, b, c,sum,avg;
	printf("국어 영어 수학 점수를 입력해주세요:");
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	avg = sum / 3;
	printf("합 : %d\n", sum);
	printf("평균 : %d", avg);
}
*/