#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//1번
/*void get_sum_diff(int x, int y, int* p_sum,int* p_diff){
	*p_sum = x = y;
	*p_diff = x - y;
}
int main() {
	int x=80, y=50;
	int sum, diff;
	get_sum_diff(x, y, &sum, &diff);
}
*/

//2번
/*void array_fill(int* A, int size) {
	int i;
	for (i = 0; i < size; i++) {
		*A[i] = rand();
	}
}
*/

//3번
/*void array_print(int* A, int n)
{
	int i;
	printf("A[]={ ");
	for (i = 0; i < n; i++) {
		printf("%d,", *A[i]);
	}
	printf(" }\n");
}
*/

/*
int main(void)
{
	int i = 10;
	char c = 69;
	float f = 12.3;
	printf("i의 주소: %u\n", &i); 
	printf("c의 주소: %u\n", &c); 
	printf("f의 주소: %u\n", &f); 
	return 0;
}

int main(void)
{
int i = 10;
double f = 12.3;
int *pi = NULL;
double *pf = NULL;
pi = &i;
pf = &f;
printf(“%u %u\n”, pi, &i);
printf(“%u %u\n”, pf, &f);
return 0;
}

int main(void){
char *pc;
int *pi;
double *pd;
pc = (char *)10000;
pi = (int *)10000;
pd = (double *)10000;
printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
pc++;
pi++;
pd++;
printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
printf(“pc+2 = %d, pi+2 = %d, pd+2 = %d\n”, pc+2, pi+2, pd+2);
}

int main(void)
{
int data = 0x0A0B0C0D;
char *pc;
pc = (char *)&data;
for (int i = 0; i < 4; i++) {
printf(“*(pc + %d) = %02X \n”, i, *(pc + i));
}
}

int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept)
{
if( x1 == x2 )
return -1;
else {
*slope = (float)(y2 - y1)/(float)(x2 - x1);
*yintercept = y1 - (*slope)*x1;
return 0;
}
}
int main(void)
{
float s, y;
if( get_line_parameter(3,3,6,6,&s,&y) == -1 )
printf("에러\n");
else
printf("기울기는 %f, y절편은 %f\n", s, y);
}

int main(void)
{
int a[] = { 10, 20, 30, 40, 50 };
int *p;
p = a;
printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
printf("p[0]=%d p[1]=%d p[2]=%d \n\n", p[0], p[1], p[2]);
p[0] = 60;
p[1] = 70;
p[2] = 80;
printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
printf("p[0]=%d p[1]=%d p[2]=%d \n", p[0], p[1], p[2]);
}

void getSensorData(double * p)
{
p[0] = rand()%100;
p[1] = rand()%100;
p[2] = rand()%100;
return;
}
int main(void)
{
double sensorData[3];
getSensorData(sensorData);
printf("왼쪽 센서와 장애물과의 거리: %lf \n", sensorData[0]);
printf("중간 센서와 장애물과의 거리: %lf \n", sensorData[1]);
printf("오른쪽 센서와 장애물과의 거리: %lf \n", sensorData[2]);
}
*/