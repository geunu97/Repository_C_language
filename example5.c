#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//1번
/*int event(int n) {
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}
int absolute(int n) {
	return abs(n);
}
int sign(int n) {
	if (n < 0)
		return -1;
	else if (n > 0)
		return 1;
	else
		return 0;
}
int main(void) {
	int a;
	scanf("%d", &a);
	event(a);
	absolute(a);
	sign(a);
}
*/

//2번
/*double f_to_c(double f) {
	return 5.0 / 9.0 * (f - 32.0);
}
int main(void) {
	double f;
	scanf("%lf", &f);
	printf("화씨 온도 : %lf", f_to_c(f));
}
*/

//3번
/*cal_area(double radius) {
	return 3.141592 * radius * radius;
}

int main(void) {
	double radius;
	scanf("%lf", &radius);
	printf("원의 면적: %lf", cal_area(radius));
}
*/

//4번
/*int get_tax(int income) {
	if (income <= 10000000)
		return income * 0.08;
	else
		return income * 0.1;
}
int main(void) {
	int income;
	scanf("%d", &income);
	printf("세금 : %d",get_tax(income));
}
*/

//5번
/*int b_rand() {
		int a = rand() % 2;
		return a;
}
int main(void) {
	srand((unsigned)time(NULL));
	for (int i = 0; i< 5; i++) {
		printf("%d\n", b_rand());
	}
}
*/

//6번
/*double get_distance(double x1, double y1, double x2, double y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main(void) {
	double x1, y1, x2, y2;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	printf("%lf",get_distance(x1, y1, x2, y2));
}
*/

//7번
/*int is_prime(){
	for (int i = 2; i <= 100; i++) {
		for (int k = 2; k <= 100; k++) {
			if (i % k == 0 && i != k)
				break;
			else if (i % k == 0 && i == k)
				printf("%d\n", i);
		}
	}
}
int main(void) {
	is_prime();
}
*/