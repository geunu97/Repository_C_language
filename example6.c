#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

//�ǽ�1
/*void plus(int a, int b, int count) {
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("���� ��� : %d\n", a + b);
}
void min(int a, int b, int count) {
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("���� ��� : %d\n", a - b);
}
void mul(int a, int b, int count) {
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("���� ��� : %d\n", a * b);
}
void div(int a, int b, int count) {
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("���� ��� : %d\n", a / b);
}

int main(void) {
	static int pluscount = 0;
	static int mincount = 0;
	static int divcount = 0;
	static int mulcount = 0;

	int a, b;
	char ch;
	for (;;) {
		printf("�ΰ��� ���� �����ڸ� �Է��Ͻÿ� :");
		scanf("%d %c %d", &a, &ch, &b);
		if (ch == '+') {
			pluscount++;
			plus(a, b, pluscount);
		}
		else if (ch == '-') {
			mincount++;
			min(a, b, mincount);
		}
		else if (ch == '*') {
			mulcount++;
			mul(a, b, mulcount);
		}
		else if (ch == '/') {
			divcount++;
			div(a, b, divcount);
		}
	}
}
*/

//�ǽ�2
/*void get_dice_face() {
	static int a = 0;
	static int b = 0;
	static int c = 0;
	static int d = 0;
	static int e = 0;
	static int f = 0;
	static int rand = 0;
	for (int i = 0; i < 100; i++) {
		rand = rand % 6 + 1;
		if (rand == 1)
			a++;
		else if (rand == 2)
			b++;
		else if (rand == 3)
			c++;
		else if (rand == 4)
			d++;
		else if (rand == 5)
			e++;
		else
			f++;
	}
	printf("1->%d\n", a);
	printf("2->%d\n", b);
	printf("3->%d\n", c);
	printf("4->%d\n", d);
	printf("5->%d\n", e);
	printf("6->%d\n", f);
}
 
int main() {
	srand((unsigned)time(NULL));
	get_dice_face();
}  
*/ //srand�� ����ص� ������ �𸣰ھ ������ �������� ���ɴϴ�..


//����1
/*int main(void){
	int i;
	for(i = 0; i < 5; i++){
		int temp = 1;
		printf("temp = %d\n", temp);
		temp++;
	}
	return 0;
}
*/

//����2
/*void inc(int counter);
int main(void){
	int i;
	i = 10;
	printf("�Լ� ȣ���� i=%d\n", i);
	inc(i);
	printf("�Լ� ȣ���� i=%d\n", i);
	return 0;
}
void inc(int counter){
	counter++;
}
*/

//����3
/*int A;
int B;
int add()
{
	return A + B;
}
int main()
{
	int answer;
	A = 5;
	B = 7;
	answer = add();
	printf("%d + %d = %d\n", A, B, answer);
	return 0;
}
*/

//����4
/*int x;
void sub();
int main(void) {
	for (x = 0; x < 10; x++)
		sub();
}
void sub() {
	for (x = 0; x < 10; x++)
		printf("*");
}
*/

//����5
/*void sub() {
	static int scount = 0;
	int acount = 0;
	printf("scount = %d\t", scount);
	printf("acount = %d\n", acount);
	scount++;
	acount++;
}
int main(void) {
	sub();
	sub();
	sub();
	return 0;
}
*/

//����6
/*void save(int amount)
{
	static long balance = 0;
	if (amount >= 0)
		printf("%d \t\t", amount);
	else
		printf("\t %d \t", -amount);
	balance += amount;
	printf("%d \n", balance);
}
int main(void) {
	printf("==============================\n");
	printf("�Ա� \t���\t �ܰ�\n");
	printf("==============================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("==============================\n");
	return 0;
}
*/

//����7
/*long factorial(int n)
{
	printf("factorial(%d)\n", n);
	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}
int main(void)
{
	int n = 0;
	long f;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	printf("%d!�� %d�Դϴ�. \n", n, factorial(n));
	return 0;
}
*/

//����8
/*void print_binary(int x);
int main(void)
{
	print_binary(9);
}
void print_binary(int x)
{
	if (x > 0)
	{
		print_binary(x / 2); 
		printf("%d", x % 2); 
	}
}
*/

//����9
/*int gcd(int x, int y);
int main(void){
	printf("%d\n", gcd(30, 20));
}
int gcd(int x, int y){
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}
*/

//����10
/*void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
		printf("���� 1�� %c ���� %c���� �ű��.\n", from, to);
	else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("���� %d�� %c���� %c���� �ű��.\n", n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}
int main(void)
{
	hanoi_tower(4, 'A', 'B', 'C');
	return 0;
}
*/

