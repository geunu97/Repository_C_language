#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //printf,scanf
//void print_divisor(int); // 함수정의
//int perfect_number(int);

//프로젝트1
/*void main() {
	int score = 0;
	char grade = NULL;

	printf("점수를 입력하세요 :");
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
		printf("학점은 %c 입니다.\n", grade);
	}
	else {
		printf("입력을 잘못하셨습니다.\n");
	}
}*/

//프로젝트2
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
	int number; //약수를 구할 정수

	while (1) {
		printf("약수를 구할 정수를 입력하세요 (1이하면 종료):");
		scanf("%d",&number);
		if (number >= 2) {
			printf("%d에 대한 약수 : \n",number);
			print_divisor(number);
		}
		else {
			printf("%d에 대한 약수를 구할 수 없습니다.\n", number);
			printf("프로그램을 종료합니다.\n");
			break;
		}
		printf("\n");
	}
}*/

//프로젝트3
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
	printf("1000 이하의 완전수 : \n");
	for (number = 1; number <= 1000; number++) {
		if(perfect_number(number) == 1)
			printf("%d \n", number);
	}
}*/