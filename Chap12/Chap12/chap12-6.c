#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//예제 12-6

int main(void)
{
	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);
	scanf("%*c"); //getchar(); //fgetc(stdin);
	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;
}

