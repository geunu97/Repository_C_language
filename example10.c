#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1��
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
	printf("========< ����ǥ >========\n");
	printf("--------------------------\n");
	printf("���� ���� ���� ���� ���\n");
	printf("--------------------------\n");
}
int main() {
	int a, b, c;
	printf("�������� ���� �Է� : ");
	scanf("%d %d %d", &a, &b, &c);
	print_title();
	printf("%d   %d   %d   %d   %lf", a, b, c, total(a, b, c), average(a+b+c));
	return 0;
}
*/

//2��
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
	printf("�ϳ��� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("�Է¹��� �������� ¦�� �� : %d\n", evensum(a));
	printf("¦�� �ձ����� Ȧ���� �� : %d\n", oddsum(evensum(a)));
	return 0;
}
*/

//3��
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
	printf("1. ����(addition)\n");
	printf("2. ����(subtraction)\n");
	printf("3. ����(multiplication)\n");
	printf("4. ������(division)\n");
	printf(">> ���ϴ� �޴��� �����ϼ��� : ");
}
void res_disp(double result) {
	printf("������� %lf�Դϴ�.", result);
}

int main() {
	menu_disp();

	int menu;
	double a, b;
	scanf("%d", &menu);
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
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
