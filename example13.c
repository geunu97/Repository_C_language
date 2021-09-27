//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

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



