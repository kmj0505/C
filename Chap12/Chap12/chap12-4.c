#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//예제 12-4

int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	gets(str);
	printf("입력한 문자열은 %s입니다.", str);
	gets(str);
	printf("버퍼에 남아있는 문자열은 %s입니다.", str);

	return 0;
}
