#include <stdio.h>


int main(void)
{
	int x, y, a, b;
	double h;


	printf("��ǻ�� ������ ������ �Է��Ͻÿ�:");
	scanf("%d", &x);
	printf("c��� ������ ������ �Է��Ͻÿ�:");
	scanf("%d", &y);
	printf("��������� ������ �Է��Ͻÿ�:");
	scanf("%d", &a);
	printf("���� ������ ������ �Է��Ͻÿ�:");
	scanf("%d", &b);

	h = (a + b + x + y) * 0.25;
	printf("��������� %lf ���Դϴ�\n", h);




}
