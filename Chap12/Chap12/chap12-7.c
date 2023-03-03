#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//¿¹Á¦ 12-7

int main(void)
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}