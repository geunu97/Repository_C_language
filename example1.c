//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//1.도전문제
/*int main(void) {
	double light_speed = 300000;
	double distance = 149600000;
	int time, mtime, stime;

	time = distance / light_speed;
	mtime = time / 60;
	stime = time % 60;

	printf("빛의 속도는 %fkm/s \n", light_speed);
	printf("태양과 지구와의 거리 %fkm \n", distance);
	printf("도달 시간은 %d분 %d초\n", mtime, stime);
	return 0;
}
*/

//1번 
/*int main(void) {
	float a, b, c,sum,avg;
	scanf("%f %f %f", &a, &b, &c);
	sum = a + b + c;
	avg = sum / 3;
	printf("합계 : %f\n", sum);
	printf("평균 : %f", avg);
	return 0;
}
*/

//2번
/*int main(void) {
	float mile,meter;
	scanf("%f", &mile);
	meter = mile * 1.609;
	printf("미터 값 : %f", meter);
	return 0;
}
*/

//3번
/*
int main(void) {
	float w, h, area;
	printf("높이와 밑변 입력 : ");
	scanf("%f %f", &w, &h);
	area = w * h / 2;
	printf("넓이 : %f", area);
	return 0;
}
*/

//4번
/*int main(void) {
	float f, c;
	printf("화씨 온도 입력 : ");
	scanf("%f", &f);
	c = (f - 32) * 5 / 9;
	printf("섭씨온도 : %f ", c);
	return 0;
}
*/

//5번
/*int main(void) {
	float x,answer;
	printf("x의 값 입력 : ");
	scanf("%f", &x);
	answer = (3 * x * x) + (7 * x) + 11;
	printf("답 : %f", answer);
	return 0;
}
*/

//6번
/*int main(void) {
	float w,weight;
	printf("몸무게 입력 :");
	scanf("%f", &w);
	weight = w * 0.17;
	printf("달에서의 몸무게 : %f", weight);
	return 0;
}
*/

//7번
/*int main(void) {
	double data;
	printf("실수를 입력하시오:");
	scanf("%lf", &data);
	printf("실수형식으로는 %f입니다.\n", data);
	printf("지수형식으로는 %e입니다.\n", data);
	return 0;
}
*/

//8번
/*int main(void) {
	int data;
	printf("16진수 정수를 입력하세요:");
	scanf("%x", &data);
	printf("8진수로는 %#o입니다.\n", data);
	printf("10진수로는 %d입니다.\n", data);
	printf("16진수로는 %#x입니다.\n", data);
	return 0;
}
*/

//9번
/*int main(void) {
	int x, y;
	int temp;
	printf("두수를 입력하세요:");
	scanf("%d %d", &x, &y);
	printf("두수 x=%d이고, y=%d입니다.\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("두수 x=%d이고, y=%d입니다.", x, y);
	return 0;
}
*/

//10번
//잘 모르겠습니다...
//#define meter 3.3 ...?
//int main(void) {}