#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//¹è¿­ 8-5
int main(void)
{
	char str1[10] = "tiger";
	char str2[10];

	strcpy(str1, "cat");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
}

