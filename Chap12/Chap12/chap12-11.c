#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//예제 12-11

#include <string.h>

int main(void)
{
	char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp = str2;
	printf("이름이 긴 과일은 :%s\n", resp);

	return 0;
}

/*
//strlen은 null문자가 나오기 전까지의 문자열 개수를 센다

int main(void)
{
	char str[80] = "apple";

	printf("%d", strlen(str));

	return 0;
}
*/