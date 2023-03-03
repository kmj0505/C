#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//¿¹Á¦ 12-9

#include <string.h>

int main(void)
{
	char str[20] = "mango tree";
	strncpy(str, "apple-ple", 7);
	str[5] = '\0';
	printf("%s\n", str);

	return 0;
}
