//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//1.��������
/*int main(void) {
	double light_speed = 300000;
	double distance = 149600000;
	int time, mtime, stime;

	time = distance / light_speed;
	mtime = time / 60;
	stime = time % 60;

	printf("���� �ӵ��� %fkm/s \n", light_speed);
	printf("�¾�� �������� �Ÿ� %fkm \n", distance);
	printf("���� �ð��� %d�� %d��\n", mtime, stime);
	return 0;
}
*/

//1�� 
/*int main(void) {
	float a, b, c,sum,avg;
	scanf("%f %f %f", &a, &b, &c);
	sum = a + b + c;
	avg = sum / 3;
	printf("�հ� : %f\n", sum);
	printf("��� : %f", avg);
	return 0;
}
*/

//2��
/*int main(void) {
	float mile,meter;
	scanf("%f", &mile);
	meter = mile * 1.609;
	printf("���� �� : %f", meter);
	return 0;
}
*/

//3��
/*
int main(void) {
	float w, h, area;
	printf("���̿� �غ� �Է� : ");
	scanf("%f %f", &w, &h);
	area = w * h / 2;
	printf("���� : %f", area);
	return 0;
}
*/

//4��
/*int main(void) {
	float f, c;
	printf("ȭ�� �µ� �Է� : ");
	scanf("%f", &f);
	c = (f - 32) * 5 / 9;
	printf("�����µ� : %f ", c);
	return 0;
}
*/

//5��
/*int main(void) {
	float x,answer;
	printf("x�� �� �Է� : ");
	scanf("%f", &x);
	answer = (3 * x * x) + (7 * x) + 11;
	printf("�� : %f", answer);
	return 0;
}
*/

//6��
/*int main(void) {
	float w,weight;
	printf("������ �Է� :");
	scanf("%f", &w);
	weight = w * 0.17;
	printf("�޿����� ������ : %f", weight);
	return 0;
}
*/

//7��
/*int main(void) {
	double data;
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &data);
	printf("�Ǽ��������δ� %f�Դϴ�.\n", data);
	printf("�����������δ� %e�Դϴ�.\n", data);
	return 0;
}
*/

//8��
/*int main(void) {
	int data;
	printf("16���� ������ �Է��ϼ���:");
	scanf("%x", &data);
	printf("8�����δ� %#o�Դϴ�.\n", data);
	printf("10�����δ� %d�Դϴ�.\n", data);
	printf("16�����δ� %#x�Դϴ�.\n", data);
	return 0;
}
*/

//9��
/*int main(void) {
	int x, y;
	int temp;
	printf("�μ��� �Է��ϼ���:");
	scanf("%d %d", &x, &y);
	printf("�μ� x=%d�̰�, y=%d�Դϴ�.\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("�μ� x=%d�̰�, y=%d�Դϴ�.", x, y);
	return 0;
}
*/

//10��
//�� �𸣰ڽ��ϴ�...
//#define meter 3.3 ...?
//int main(void) {}