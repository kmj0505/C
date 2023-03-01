#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//¿¹Á¦ 6-2
int main(void)
{
	int a = 1;
	int i;

	for (i = 0; i < 3; i++)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}
