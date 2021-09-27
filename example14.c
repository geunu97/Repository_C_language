//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define STUDENT_NUM 10

//단축키
//주석처리:Ctrl + K,C
//주석해제:Ctrl + K,U
//빌드:컴파일 + 링크 (Ctrl + F5)

/*자료형
  문자형:char(1byte)
  정수형:short(2byte),long(4byte),long long(8byte) --> 정수는 int 기본
  실수형:float(4byte),double(8byte)-->상수의 실수는 double 기본
 */

 //main을 호출하는 대상은 무엇인가? --> 운영체제
 

 //성적처리프로그램 ver1.0
 /* void main() {
	 printf("성적처리프로그램 ver1.0\n");
	 printf("국어:100점, 수학:80점, 영어:50점\n");
	 printf("확인이 완료되었습니다.\n");
 }*/

 //성적처리프로그램 ver1.1
 /*void main() {
	 int kor = 0, math = 0, eng = 0;
	 printf("성적처리프로그램 ver1.1\n");
	 printf("국어:");scanf("%d", &kor);
	 printf("수학:");scanf("%d", &math);
	 printf("영어:");scanf("%d", &eng);

	 printf("국어:%d,수학:%d,영어:%d\n", kor, math, eng);
	 printf("총점:%d\n", kor + math + eng);
 }*/

 //성적처리프로그램 ver1.2
 /*void main() {
	 double kor = 0, math = 0, eng = 0;
	 printf("성적처리프로그램 ver1.1\n");
	 printf("국어:"); scanf("%lf", &kor);
	 printf("수학:"); scanf("%lf", &math);
	 printf("영어:"); scanf("%lf", &eng);

	 printf("국어:%.2lf,수학:%.2lf,영어:%.2lf\n", kor, math, eng);
	 printf("총점:%.2lf\n", kor + math + eng);
	 printf("평균:%.2lf\n", (kor + math + eng) / 3);
 }*/

 //성적처리프로그램 ver1.4
 /*void main() {
	 int kor = 0, math = 0, eng = 0;
	 int max = 0;
	 printf("##성적처리프로그램 ver1.4##\n");
	 printf("국어:");scanf("%d", &kor);
	 printf("수학:");scanf("%d", &math);
	 printf("영어:");scanf("%d", &eng);

	 printf("국어:%d,수학:%d,영어:%d\n", kor, math, eng);
	 printf("총점:%d\n", kor + math + eng);
	 printf("평균:%.2lf\n", (double)(kor + math + eng) / 3.0);

	 //조건연산자 
	 max = (kor > math) ? kor : math;
	 max = (max > eng) ? max : eng;
	 printf("최고점:%d\n", max);
 }*/

 //성적처리프로그램 ver2.0
 /*void main() {
	int kor = 0, math = 0, eng = 0;
	int max = 0;
	char grade = NULL;
	double average = 0.0;

	printf("##성적처리프로그램 ver2.0##\n");
	printf("국어:"); scanf("%d", &kor);
	printf("수학:"); scanf("%d", &math);
	printf("영어:"); scanf("%d", &eng);

	printf("국어:%d,수학:%d,영어:%d\n", kor, math, eng);
	printf("총점:%d\n", kor + math + eng);
	average = (double)(kor + math + eng) / 3.0;
	printf("평균:%.2lf\n", average);

	//조건연산자 
	max = (kor > math) ? kor : math;
	max = (max > eng) ? max : eng;
	printf("최고점:%d\n", max);

	//조건문
	if (average >= 90.0)		grade = 'A';
	else if (average >= 80.0)	grade = 'B';
	else if (average >= 70.0)	grade = 'C';
	else if (average >= 60.0)	grade = 'D';
	else                        grade = 'F';

	printf("학점 : %c\n",grade);
 }*/

 //성적처리프로그램 ver2.1
 //void main() {
 //	 int basic_score = 0;
 //	 int total = 0;
 //	 double average = 0.0;
	 
	 //반복문 : for,while,do-while
	 //1. for문
	 /*for (int i = 0; i < STUDENT_NUM; i++) {
		 printf("기컴 점수: ");
		 scanf_s("%d",&basic_score);
		 total = total + basic_score;
	 }*/

	 //2. while문
	 /*int i = 0;
	 while (i < STUDENT_NUM) {
		 printf("기컴 점수: ");
		 scanf_s("%d", &basic_score);
		 total = total + basic_score;
		 i++;
	 }*/
	 
	 //3. do-while문
	 /*int i = 0;
	 do{
		 printf("기컴 점수: ");
		 scanf_s("%d", &basic_score);
		 total = total + basic_score;
		 i++;
	 } while (i < STUDENT_NUM);
	 */

	 //4. 강조하고픈 반복문 사용법!!
	 //기컴 점수를 입력받되, 10명이 아니라 사용자가
	 //음수를 입력하기 전까지 받아서 평균을 구한다.
	 //반복문에서 보초값을 활용:보초값(Sentinal,경계값)->음수

	 /*int student_count = 0;
	 do{
	 printf("기컴 점수: ");
	 scanf_s("%d", &basic_score);
	 if (basic_score < 0) break;
	 total += basic_score;
	 student_count++;
	 } while (1);
	
	 average = (double)total / student_count;
	 printf("총점 : %d\n", total);
	 printf("학생수 : %d\n", student_count);
	 printf("평균 : %lf\n", average);

	 }*/


//프로젝트1
/*void main() {
	int a,b;
	char str1[1024];
	char str2[1024];

	printf("정보를 입력하세요\n");
	printf("학과: ");
	scanf("%s", str1);

	printf("학년: ");
	scanf("%d", &a);

	printf("입학년도: ");
	scanf("%d", &b);

	printf("이름: ");
	scanf("%s", str2);

	printf("나는 %s학과 %d학년 %d학번 %s입니다.", str1,a, b, str2);
	
	return 0;
}*/

//프로젝트2
/*void main() {
	float a, b, c;
	float max, min;

	printf("세 개의 수를 입력하세요.\n");
	printf("첫 번째 수: ");
	scanf("%f", &a);
	printf("두 번째 수: ");
	scanf("%f", &b);
	printf("세 번째 수: ");
	scanf("%f", &c);

	max = (a >= b) ? a : b;
	max = (max >= c) ? max : c;

	min = (a >= b) ? b : a;
	min = (min >= c) ? c : min;

	printf("가장 큰 수와 작은 수의 차이 = %.1f", max-min);
}*/

//프로젝트3
/*void main() {
	float array[10];
	float avg,sum=0.0;
	float count = 0.0;

	printf("최대 10개의 실수를 입력하세요.\n");
	printf("입력을 종료하려면 0 이하의 수를 입력하세요.\n");

	
	for (int i = 0; i < 10; i++) {
		printf("숫자 %d : ", i + 1);
		scanf("%f", &array[i]);
		if (array[i] <= 0)
			break;
		sum += array[i];
		count++;
	}
	avg = sum / count;
	printf("평균 : %.2f", avg);
}*/