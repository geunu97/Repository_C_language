#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1��
/*int main(void) {
	char ch;
	scanf("%c", &ch);

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'ou')
		printf("�����Դϴ�.");
	else
		printf("�����Դϴ�.");
	return 0;
}
*/

//2��
/*int main(void) {
	int a, b, c, min;
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b) {
		int min = b;
		if (min >= c)
			printf("�ּڰ� : %d", c);
		else
			printf("�ּڰ� : %d", min);
	}
	else {
		int min = a;
		if (min >= c)
			printf("�ּڰ� : %d", c);
		else
			printf("�ּڰ� : %d", min);
	}
}*/

//3��
/*
int main(void) {
	int a, b, c,sum,avg,result;
	printf("���� ���� ���� ������ �Է����ּ���:");
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	avg = sum / 3;

	printf("�� : %d\n", sum);
	printf("��� : %d\n", avg);
	if (avg >= 90)
		printf("���� : A");
	else if(avg >= 80)
		printf("���� : B");
	else
		printf("���� : C");
}
*/

//4��
/*
int main(void) {
	int user, com;
	srand(time(NULL));
	com = rand() % 3 + 1;// (1=����, 2=����, 3=��)

	printf("����ڰ��� �Է��ϼ��� :");
	scanf("%d", &user);
	if (user == 1 && com == 2)
		printf("����ڰ� ����");
	else if(user == 1 && com == 3)
		printf("����ڰ� �̰��");
	else if (user == 2 && com == 1)
		printf("����ڰ� �̰��");
	else if (user == 2 && com == 3)
		printf("����ڰ� ����");
	else if (user == 3 && com == 1)
		printf("����ڰ� ����");
	else if (user == 3 && com == 2)
		printf("����ڰ� �̰��");
	else
		printf("����");
}
*/

//5��
/*
int main(void) {
	int a, b;
	printf("Ű�� �Է����ּ��� : ");
	scanf("%d", &a);
	printf("���̸� �Է����ּ��� : ");
	scanf("%d", &b);

	if (a >= 140 && b >= 10) 
		printf("Ÿ�� �����ϴ�.");
	else
		printf("�˼��մϴ�.");
}
*/

//6��
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

//7��
/*
int main(void) {
	int x, y;
	printf("x,y�� �Է����ּ��� :");
	scanf("%d %d", &x, &y);
	if (x > 0 && y > 0)
		printf("1��и�");
	else if(x < 0 && y > 0)
		printf("2��и�");
	else if (x < 0 && y < 0)
		printf("3��и�");
	else
		printf("4��и�");
}
*/