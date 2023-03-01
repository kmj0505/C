#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//배열 8-4
int main(void)
{
	char str[9] = "applejam";
	//str[3] = '\n';
	//printf("%s", str);

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);

	return 0;
}
