#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //printf,scanf
//void print_divisor(int); // �Լ�����
//int perfect_number(int);

//������Ʈ1
/*void main() {
	int score = 0;
	char grade = NULL;

	printf("������ �Է��ϼ��� :");
	scanf("%d", &score);

	//if-else
	if (score >= 0 && score <= 100) {
		switch (score/10){
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
			break;
		}
		printf("������ %c �Դϴ�.\n", grade);
	}
	else {
		printf("�Է��� �߸��ϼ̽��ϴ�.\n");
	}
}*/

//������Ʈ2
/*void print_divisor(int value) {
	int remains;
	for (int n = 2; n <= value; n++) {
		remains = value % n;
			if (remains == 0)
				printf("%d ", n);
	}
	printf("\n");
}

void main() {
	int number; //����� ���� ����

	while (1) {
		printf("����� ���� ������ �Է��ϼ��� (1���ϸ� ����):");
		scanf("%d",&number);
		if (number >= 2) {
			printf("%d�� ���� ��� : \n",number);
			print_divisor(number);
		}
		else {
			printf("%d�� ���� ����� ���� �� �����ϴ�.\n", number);
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		printf("\n");
	}
}*/

//������Ʈ3
/*int perfect_number(int number) {
	int sum =0;
	for (int i = 1; i < number; i++) {
		if (number % i == 0)
			sum += i;
	}
	if (sum == number)
		return 1;
	else
		return 0;
}

void main() {
	int number, n;
	printf("1000 ������ ������ : \n");
	for (number = 1; number <= 1000; number++) {
		if(perfect_number(number) == 1)
			printf("%d \n", number);
	}
}*/