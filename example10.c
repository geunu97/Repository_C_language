#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1번
/*
int total(int kor, int eng, int mat) {
	int Total;
	Total = kor + eng + mat;
	return Total;
}
double average(int tot) {
	double avg;
	avg = tot / 3.0;
	return avg;
}
void print_title(void) {
	printf("========< 성적표 >========\n");
	printf("--------------------------\n");
	printf("국어 영어 수학 총점 평균\n");
	printf("--------------------------\n");
}
int main() {
	int a, b, c;
	printf("세과목의 점수 입력 : ");
	scanf("%d %d %d", &a, &b, &c);
	print_title();
	printf("%d   %d   %d   %d   %lf", a, b, c, total(a, b, c), average(a+b+c));
	return 0;
}
*/

//2번
/*int evensum(int num) {
	int evenSum = 0;
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			evenSum += i;
		}
	}
	return evenSum;
}
int oddsum(int num) {
	int oddSum = 0;
	for (int i = 1; i <= num; i++) {
		if (i % 2 != 0) {
			oddSum += i;
		}
	}
	return oddSum;
}
int main(){
	int a;
	printf("하나의 숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("입력받은 수까지의 짝수 합 : %d\n", evensum(a));
	printf("짝수 합까지의 홀수의 합 : %d\n", oddsum(evensum(a)));
	return 0;
}
*/

//3번
/*double add(double a, double b) {
	double result;
	result = a + b;
	return result;
}
double sub(double a, double b) {
	double result;
	result = a - b;
	return result;
}
double mul(double a, double b) {
	double result;
	result = a * b;
	return result;
}
double div(double a, double b) {
	double result;
	result = a / b;
	return result;
}
void menu_disp() {
	printf("1. 덧셈(addition)\n");
	printf("2. 뺄셈(subtraction)\n");
	printf("3. 곱셈(multiplication)\n");
	printf("4. 나눗셈(division)\n");
	printf(">> 원하는 메뉴를 선택하세요 : ");
}
void res_disp(double result) {
	printf("결과값은 %lf입니다.", result);
}

int main() {
	menu_disp();

	int menu;
	double a, b;
	scanf("%d", &menu);
	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%lf %lf", &a,&b);

	switch (menu){
	case 1 : 
		add(a, b);
		res_disp(add(a, b));
		break;
	case 2:
		sub(a, b);
		res_disp(sub(a, b));
		break;
	case 3:
		mul(a, b);
		res_disp(mul(a, b));
		break;
	case 4:
		div(a, b);
		res_disp(div(a, b));
		break;
	default:
		break;
	}
}
*/
