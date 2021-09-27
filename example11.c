#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//1.사칙연산
/*#include <stdio.h>

int main(void) {
	int x = 20;
	int y = 10;

	int sum = x + y;
	int diff = x - y;
	int mul = x * y;
	int div = x / y;

	printf("두수의 합 : %d\n", sum);
	printf("두수의 차 : %d\n", diff);
	printf("두수의 곱 : %d\n", mul);
	printf("두수의 몫 : %d", div);

	return 0;
}
 */

//2.사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력
/*#include <stdio.h>

int main(void) {
	int a, b,sum;
	printf("첫번째 수를 입력해주세요 :");
	scanf_s("%d", &a);
	printf("두번째 수를 입력해주세요 :");
	scanf_s("%d", &b);

	sum = a + b;

	printf("두 수의 합 : %d", sum);
	return 0;
}
*/

//3.월수령액을 계산하는 프로그램
/*#include <stdio.h>

int main(void) {
	int ysalary; 
	int msalary;

	printf("연봉을 입력하시오(단위: 만원): ");
	scanf_s("%d", &ysalary);
	msalary = ysalary / 12;

	printf("월수령액(단위: 만원): %d\n", msalary);
	return 0;
}
*/

//4.원의 면적 계산 프로그램
/*#include <stdio.h>

int main(void)
{
	float radius;
	float area;

	printf("반지름을 입력하시오 : ");
	scanf_s("%f", &radius);
	area = 3.14 * radius * radius;
	printf("원의 면적 : %f\n", area);

	return 0;
}
*/

//5.환율을 계산하는 프로그램
/*#include <stdio.h>
int main(void)
{
	double rate; 
	double usd; 
	int krw; 

	printf("환율을 입력하시오: ");
	scanf_s("%lf", &rate); 
	printf("원화 금액을 입력하시오: "); 
	scanf_s("%d", &krw); 

	usd = krw / rate; 

	printf("원화 %d원은 %lf달러입니다.\n", krw, usd); 
	return 0; 
}
*/

//6.사각형의 둘레와 면적
/*#include <stdio.h>
int main(void)
{
	double w;
	double h;
	double area;
	double perimeter;
	//도전문제2번
	//double w,h,area,perimeter;

	w = 10.0;
	h = 5.0;
	//도전문제3번
	//scanf_s("%lf %lf",&w,&h);
	area = w * h;
	perimeter = 2 * (w + h);

	printf("사각형의 넓이: %lf\n", area);
	printf("사각형의 둘레: %lf\n", perimeter);
	//도전문제1번
	// printf("사각형의 넓이: %lf\n사각형의 둘레 : %lf", area, perimeter);
	return 0;
}
*/