#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//1.��Ģ����
/*#include <stdio.h>

int main(void) {
	int x = 20;
	int y = 10;

	int sum = x + y;
	int diff = x - y;
	int mul = x * y;
	int div = x / y;

	printf("�μ��� �� : %d\n", sum);
	printf("�μ��� �� : %d\n", diff);
	printf("�μ��� �� : %d\n", mul);
	printf("�μ��� �� : %d", div);

	return 0;
}
 */

//2.����ڷκ��� �Է¹��� 2���� ������ ���� ����Ͽ� ���
/*#include <stdio.h>

int main(void) {
	int a, b,sum;
	printf("ù��° ���� �Է����ּ��� :");
	scanf_s("%d", &a);
	printf("�ι�° ���� �Է����ּ��� :");
	scanf_s("%d", &b);

	sum = a + b;

	printf("�� ���� �� : %d", sum);
	return 0;
}
*/

//3.�����ɾ��� ����ϴ� ���α׷�
/*#include <stdio.h>

int main(void) {
	int ysalary; 
	int msalary;

	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf_s("%d", &ysalary);
	msalary = ysalary / 12;

	printf("�����ɾ�(����: ����): %d\n", msalary);
	return 0;
}
*/

//4.���� ���� ��� ���α׷�
/*#include <stdio.h>

int main(void)
{
	float radius;
	float area;

	printf("�������� �Է��Ͻÿ� : ");
	scanf_s("%f", &radius);
	area = 3.14 * radius * radius;
	printf("���� ���� : %f\n", area);

	return 0;
}
*/

//5.ȯ���� ����ϴ� ���α׷�
/*#include <stdio.h>
int main(void)
{
	double rate; 
	double usd; 
	int krw; 

	printf("ȯ���� �Է��Ͻÿ�: ");
	scanf_s("%lf", &rate); 
	printf("��ȭ �ݾ��� �Է��Ͻÿ�: "); 
	scanf_s("%d", &krw); 

	usd = krw / rate; 

	printf("��ȭ %d���� %lf�޷��Դϴ�.\n", krw, usd); 
	return 0; 
}
*/

//6.�簢���� �ѷ��� ����
/*#include <stdio.h>
int main(void)
{
	double w;
	double h;
	double area;
	double perimeter;
	//��������2��
	//double w,h,area,perimeter;

	w = 10.0;
	h = 5.0;
	//��������3��
	//scanf_s("%lf %lf",&w,&h);
	area = w * h;
	perimeter = 2 * (w + h);

	printf("�簢���� ����: %lf\n", area);
	printf("�簢���� �ѷ�: %lf\n", perimeter);
	//��������1��
	// printf("�簢���� ����: %lf\n�簢���� �ѷ� : %lf", area, perimeter);
	return 0;
}
*/