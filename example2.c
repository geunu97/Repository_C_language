//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//��������
/*
int main(void)
{
	double f_temp;
	double c_temp;
	printf("ȭ���µ��� �Է��Ͻÿ�");
	scanf("%lf", &f_temp);
	c_temp = 5.0 / 9.0 * (f_temp - 32);
	printf("�����µ��� %lf�Դϴ�", c_temp);
	return 0;
}
*/

//1��
/*
int main(void) {
	int a,b,c;
	printf("100���� ���� ������ �Է����ּ���:");
	scanf("%d", &a);
	b = a / 10;
	c = a % 10;
	printf("���� �ڸ� : %d\n", b);
	printf("���� �ڸ� : %d\n", c);

	return 0;
}
*/

//2��
/*
int main(void) {
	double cm;
	double inch;
	double feet;

	printf("Ű�� �Է��ϼ���:");
	scanf("%lf", &cm);

	inch = cm / 2.54;
	feet = inch / 12.0;
	inch = inch - (int)feet * 12;

	printf("%d�� %d��Ʈ %lf��ġ�Դϴ�\n", (int)cm, (int)feet, inch);

	return 0;
}
*/

//3��
/*
int main(void) {
	int value;
	
	printf("������ �Է��ϼ���:");
	scanf("%d", &value);

	value = ~value;
	value ++;

	printf("2�� ������ : %d\n", value);
	return 0;
}
*/

//4��
/*
int main(void) {
	int value1, value2, value3, maxvalue;

	printf("������ �Ǽ��� �Է��ϼ���:");
	scanf("%d %d %d", &value1, &value2, &value3);

	maxvalue = (value1 > value2) ? value1 : value2;
	maxvalue = (maxvalue > value3) ? maxvalue : value3;

	printf("�ִ밪�� : %d\n", maxvalue);
	return 0;
}
*/

//5��
/*
int main(void) {
	int a, b, c,sum,avg;
	printf("���� ���� ���� ������ �Է����ּ���:");
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	avg = sum / 3;
	printf("�� : %d\n", sum);
	printf("��� : %d", avg);
}
*/