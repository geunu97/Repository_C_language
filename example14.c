//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define STUDENT_NUM 10

//����Ű
//�ּ�ó��:Ctrl + K,C
//�ּ�����:Ctrl + K,U
//����:������ + ��ũ (Ctrl + F5)

/*�ڷ���
  ������:char(1byte)
  ������:short(2byte),long(4byte),long long(8byte) --> ������ int �⺻
  �Ǽ���:float(4byte),double(8byte)-->����� �Ǽ��� double �⺻
 */

 //main�� ȣ���ϴ� ����� �����ΰ�? --> �ü��
 

 //����ó�����α׷� ver1.0
 /* void main() {
	 printf("����ó�����α׷� ver1.0\n");
	 printf("����:100��, ����:80��, ����:50��\n");
	 printf("Ȯ���� �Ϸ�Ǿ����ϴ�.\n");
 }*/

 //����ó�����α׷� ver1.1
 /*void main() {
	 int kor = 0, math = 0, eng = 0;
	 printf("����ó�����α׷� ver1.1\n");
	 printf("����:");scanf("%d", &kor);
	 printf("����:");scanf("%d", &math);
	 printf("����:");scanf("%d", &eng);

	 printf("����:%d,����:%d,����:%d\n", kor, math, eng);
	 printf("����:%d\n", kor + math + eng);
 }*/

 //����ó�����α׷� ver1.2
 /*void main() {
	 double kor = 0, math = 0, eng = 0;
	 printf("����ó�����α׷� ver1.1\n");
	 printf("����:"); scanf("%lf", &kor);
	 printf("����:"); scanf("%lf", &math);
	 printf("����:"); scanf("%lf", &eng);

	 printf("����:%.2lf,����:%.2lf,����:%.2lf\n", kor, math, eng);
	 printf("����:%.2lf\n", kor + math + eng);
	 printf("���:%.2lf\n", (kor + math + eng) / 3);
 }*/

 //����ó�����α׷� ver1.4
 /*void main() {
	 int kor = 0, math = 0, eng = 0;
	 int max = 0;
	 printf("##����ó�����α׷� ver1.4##\n");
	 printf("����:");scanf("%d", &kor);
	 printf("����:");scanf("%d", &math);
	 printf("����:");scanf("%d", &eng);

	 printf("����:%d,����:%d,����:%d\n", kor, math, eng);
	 printf("����:%d\n", kor + math + eng);
	 printf("���:%.2lf\n", (double)(kor + math + eng) / 3.0);

	 //���ǿ����� 
	 max = (kor > math) ? kor : math;
	 max = (max > eng) ? max : eng;
	 printf("�ְ���:%d\n", max);
 }*/

 //����ó�����α׷� ver2.0
 /*void main() {
	int kor = 0, math = 0, eng = 0;
	int max = 0;
	char grade = NULL;
	double average = 0.0;

	printf("##����ó�����α׷� ver2.0##\n");
	printf("����:"); scanf("%d", &kor);
	printf("����:"); scanf("%d", &math);
	printf("����:"); scanf("%d", &eng);

	printf("����:%d,����:%d,����:%d\n", kor, math, eng);
	printf("����:%d\n", kor + math + eng);
	average = (double)(kor + math + eng) / 3.0;
	printf("���:%.2lf\n", average);

	//���ǿ����� 
	max = (kor > math) ? kor : math;
	max = (max > eng) ? max : eng;
	printf("�ְ���:%d\n", max);

	//���ǹ�
	if (average >= 90.0)		grade = 'A';
	else if (average >= 80.0)	grade = 'B';
	else if (average >= 70.0)	grade = 'C';
	else if (average >= 60.0)	grade = 'D';
	else                        grade = 'F';

	printf("���� : %c\n",grade);
 }*/

 //����ó�����α׷� ver2.1
 //void main() {
 //	 int basic_score = 0;
 //	 int total = 0;
 //	 double average = 0.0;
	 
	 //�ݺ��� : for,while,do-while
	 //1. for��
	 /*for (int i = 0; i < STUDENT_NUM; i++) {
		 printf("���� ����: ");
		 scanf_s("%d",&basic_score);
		 total = total + basic_score;
	 }*/

	 //2. while��
	 /*int i = 0;
	 while (i < STUDENT_NUM) {
		 printf("���� ����: ");
		 scanf_s("%d", &basic_score);
		 total = total + basic_score;
		 i++;
	 }*/
	 
	 //3. do-while��
	 /*int i = 0;
	 do{
		 printf("���� ����: ");
		 scanf_s("%d", &basic_score);
		 total = total + basic_score;
		 i++;
	 } while (i < STUDENT_NUM);
	 */

	 //4. �����ϰ��� �ݺ��� ����!!
	 //���� ������ �Է¹޵�, 10���� �ƴ϶� ����ڰ�
	 //������ �Է��ϱ� ������ �޾Ƽ� ����� ���Ѵ�.
	 //�ݺ������� ���ʰ��� Ȱ��:���ʰ�(Sentinal,��谪)->����

	 /*int student_count = 0;
	 do{
	 printf("���� ����: ");
	 scanf_s("%d", &basic_score);
	 if (basic_score < 0) break;
	 total += basic_score;
	 student_count++;
	 } while (1);
	
	 average = (double)total / student_count;
	 printf("���� : %d\n", total);
	 printf("�л��� : %d\n", student_count);
	 printf("��� : %lf\n", average);

	 }*/


//������Ʈ1
/*void main() {
	int a,b;
	char str1[1024];
	char str2[1024];

	printf("������ �Է��ϼ���\n");
	printf("�а�: ");
	scanf("%s", str1);

	printf("�г�: ");
	scanf("%d", &a);

	printf("���г⵵: ");
	scanf("%d", &b);

	printf("�̸�: ");
	scanf("%s", str2);

	printf("���� %s�а� %d�г� %d�й� %s�Դϴ�.", str1,a, b, str2);
	
	return 0;
}*/

//������Ʈ2
/*void main() {
	float a, b, c;
	float max, min;

	printf("�� ���� ���� �Է��ϼ���.\n");
	printf("ù ��° ��: ");
	scanf("%f", &a);
	printf("�� ��° ��: ");
	scanf("%f", &b);
	printf("�� ��° ��: ");
	scanf("%f", &c);

	max = (a >= b) ? a : b;
	max = (max >= c) ? max : c;

	min = (a >= b) ? b : a;
	min = (min >= c) ? c : min;

	printf("���� ū ���� ���� ���� ���� = %.1f", max-min);
}*/

//������Ʈ3
/*void main() {
	float array[10];
	float avg,sum=0.0;
	float count = 0.0;

	printf("�ִ� 10���� �Ǽ��� �Է��ϼ���.\n");
	printf("�Է��� �����Ϸ��� 0 ������ ���� �Է��ϼ���.\n");

	
	for (int i = 0; i < 10; i++) {
		printf("���� %d : ", i + 1);
		scanf("%f", &array[i]);
		if (array[i] <= 0)
			break;
		sum += array[i];
		count++;
	}
	avg = sum / count;
	printf("��� : %.2f", avg);
}*/