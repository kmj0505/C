#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//¿¹Á¦ 12-10

#include <string.h>

int main(void)
{
	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	//strncat(str, "piece", 5);
	printf("%s\n", str);

	return 0;
}
