#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1��
/*int main() {
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	printf("1���� %d���� �ֽ��ϴ�.\n", days[0]);
	printf("2���� %d���� �ֽ��ϴ�.", days[1]);
}
*/

//2��
/*int main() {
	int x[10];
	int max = 0;
	int min = 32767;
	srand((unsigned)time(NULL));

	for (int i = 0; i <= 9; i++) {
		x[i] = rand();
		if (max < x[i]) 
			max = x[i];
		else if (min > x[i])
			min = x[i];
	}
	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d", min);
}
*/

//3��
/*void array_copy(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		b[i] = a[i];
		printf("b�� ���� ��� : %d\n", b[i]);
	}
}
int main() {
	int a[5];
	int b[5];
	for (int k = 0; k <= 4; k++) {
		printf("a�� ���� �Է� :");
		scanf("%d", &a[k]);
	}
	array_copy(a, b, 5);
}
*/

//4��
/*int main() {
	srand((unsigned)time(NULL));
	int array[10] = { 0 };
	int n;
	int count=0,max;
	for (int i = 0; i < 100; i++) {
		n = rand() % 10;
		array[n]++;
	}
	for(int k=0; k<10; k++){
		if (count < array[k]) {
			count = array[k];
			max = k;
		}
	}
	printf("���� ���� ������ �� : (%d)", max);
	printf(" %d��", count);
}
*/

//5��
/*int main() {
	int r1sum=0, r2sum=0, r3sum=0;
	int	c1sum=0, c2sum=0, c3sum=0, c4sum=0, c5sum=0;

	int array[3][5] = { 12,56,32,16,98,
						99,56,34,41,3,
						65,3,87,78,21 };

	for (int i = 0; i <= 2; i++) {
		for (int k = 0; k <= 4; k++) {
			if (i == 0)
				r1sum += array[i][k];
			else if(i == 1)
				r2sum += array[i][k];
			else if (i == 2)
				r3sum += array[i][k];
			if (k == 0)
				c1sum += array[i][k];
			if (k == 1)
				c2sum += array[i][k];
			if (k == 2)
				c3sum += array[i][k];
			if (k == 3)
				c4sum += array[i][k];
			if (k == 4)
				c5sum += array[i][k];
		}
	}
	printf("1�� �� : %d\n", r1sum);
	printf("2�� �� : %d\n", r2sum);
	printf("3�� �� : %d\n", r3sum);
	printf("1�� �� : %d\n", c1sum);
	printf("2�� �� : %d\n", c2sum);
	printf("3�� �� : %d\n", c3sum);
	printf("4�� �� : %d\n", c4sum);
	printf("5�� �� : %d\n", c5sum);
}
*/

//����
/*int main(void)
{
int i;
int scores[5];
scores[0] = 10;
scores[1] = 20;
scores[2] = 30;
scores[3] = 40;
scores[4] = 50;
for(i=0;i < 5; i++)
printf("scores[%d]=%d\n",i, score[i]);
}

int main(void)
{
int scores[5] = { 31, 63, 62, 87, 14 };
int i;
for(i = 0; i < 5; i++)
printf("scores[%d] = %d\n", i, scores[i]);
}

#define SIZE 6
int main(void)
{
int freq[SIZE] = { 0 }; 
int i;
for(i = 0; i < 10000; i++) 
++freq[ rand() % 6 ]; 
printf("====================\n");
printf("�� ��\n");
printf("====================\n");
for(i = 0; i < SIZE; i++)
printf("%3d %3d \n", i, freq[i]);
}

#define SIZE 10
int main(void)
{
char ans1;
int seat1, seat2, i;
int seats[SIZE] = { 0 };
while (1)
{
printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ�n) ");
scanf(" %c", &ans1);if (ans1 == 'y')
{
printf("-------------------------------\n");
printf(" 1 2 3 4 5 6 7 8 9 10\n");
printf("-------------------------------\n");
for (i = 0; i < SIZE; i++)
printf(" %d", seats[i]);
printf("\n");
printf("�¼� ��ȣ 2���� �Է��Ͽ��ּ���: ");
scanf("%d%d", &seat1, &seat2);
if ((seat1 <= 0 || seat1 > SIZE) ||
(seat2 <= 0 || seat2 > SIZE)) {
printf("1���� 10������ ���ڸ� �Է��ϼ���\n");
continue;
}if (seats[seat1 - 1] == 0 && seats[seat2 - 1] == 0) {

seats[seat1 - 1] = 1;
seats[seat2 - 1] = 1;
printf("����Ǿ����ϴ�.\n");
}
else {
printf("�̹� ����� �ڸ��Դϴ�.\n");
continue;
}
}
else if (ans1 == 'n')
return 0;
}
return 0;
}

#define SIZE 10
int main(void)
{
int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
int i, j, temp, least;
for(i = 0; i < SIZE-1; i++)
{
least = i;
for(j = i + 1; j < SIZE; j++)
if(list[j] < list[least])
least = j;
temp = list[i];
list[i] = list[least];
list[least] = temp;
}

for(i = 0;i < SIZE; i++)
printf("%d ", list[i]);
printf("\n");
return 0;
}

#define SIZE 16
int binary_search(int list[], int n, int key);
int main(void)
{
int key;
int grade [SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };
printf("Ž���� ���� �Է��Ͻÿ�:");
scanf("%d", &key);
printf("Ž�� ���= %d\n", binary_search(grade, SIZE, key));
}

int binary_search(int list[], int n, int key)
{
int low, high, middle;
low = 0;
high = n-1;
while( low <= high ){ 
printf("[%d %d]\n", low, high); 
middle = (low + high)/2; 
if( key == list[middle] ) 
return middle;
else if( key > list[middle] )
low = middle + 1; 
else
high = middle - 1;
}
}
*/