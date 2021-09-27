#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char str[4];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	i = 0;
	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}
	return 0;
}


int main(void)
{
	char str1[6] = "Seoul";
	char str2[3] = {'i','s', '\n0' };
	char str3[] = "the capital city of Korea.";
	printf("%s %s %s\n", str1, str2, str3);
}


int main(void)
{
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	int i;
	printf("원본 문자열=%s\n", src);
	for (i = 0; src[i] != '\0'; i++)
		dst[i] = src[i];
	dst[i] = '\0';
	printf("복사된 문자열=%s\n", dst);
}


int count_word(char* s);
int main(void)
{
	int wc = count_word("the c book...");
	printf("단어의 개수: %d \n", wc);
}
int count_word(const char* s)
{
	int i, wc = 0, waiting = 1; 
	for (i = 0; s[i] != NULL; ++i) 
		if (isalpha(s[i])) 
		{
			if (waiting) 
			{
				wc++; 
				waiting = 0; 
			}
		}
		else 
			waiting = 1; 
	return wc;
} 


int main(void)
{
	char s[] = "language";
	char c = 'g';
		char* p;
	int loc;
	p = strchr(s, c);
	loc = (int)(p - s);
	if (p != NULL)
		printf("첫번째 %c가 %d에서 발견되었음\n", c, loc);
	else
		printf("%c가 발견되지 않았음\n", c);
}


char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";
char* token;
int main(void)
{
	token = strtok(s, seps);
	while (token != NULL)
	{
		printf("토큰: %s\n", token);
		token = strtok(NULL, seps);
	}
}


int main(void)
{
	char s1[] = "100";
	char s2[] = "12.93";
	char buffer[100];
	int i;
	double d, result;
	i = atoi(s1); 
	d = atof(s2); 
	result = i + d;
	sprintf(buffer, "%f", result); 
	printf("연산 결과는 %s입니다.\n", buffer);
}


int main(void)
{
	int i, n;
	char* fruits[] = {
	"apple",
	"blueberry",
	"orange",
	"melon"
	};
	n = sizeof(fruits) / sizeof(fruits[0]); 
	for (i = 0; i < n; i++)
		printf("%s \n", fruits[i]);
}


void encrypt(char cipher[], int shift);
int main(void) {
	char cipher[50]; 
	int shift = 3;
	printf("문자열을 입력하시오: ");
	gets(cipher); 
	encrypt(cipher, shift); 
	return 0;
}
void encrypt(char cipher[], int shift) {
	int i = 0;
	while (cipher[i] != '\0') {
		if (cipher[i] >= 'a' && cipher[i] <= 'z'){ 
			cipher[i] += shift;
			if (cipher[i] > 'z')
				cipher[i] -= 26; 
	}
	i++;
}
printf("암호화된 문자열: %s", cipher);
}


int check(char s[], char a[], char ch);
int main(void) {
	char solution[100] = "meet at midnight"; 
		char answer[100] = "____ __ ________"; 
		char ch;
	while (1) {
		printf("문자열을 입력하시오: %s \n", answer);
		printf("글자를 추측하시오: ");
		ch = getchar();
		if (check(solution, answer, ch) == 1)
			break;
		fflush(stdin); 
	}
	return 0;
}
int check(char s[], char a[], char ch)
{
	int i;
	for (i = 0; s[i] != NULL; i++) {
		if (s[i] == ch)
			a[i] = ch;
	}
	if (strcmp(s, a) == 0) return 1; 
	else return 0;
}
