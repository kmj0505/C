#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� 5-2
int main(void)
{
	int a = 10;

	if (a >= 0)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}
	printf("a : %d\n", a);

	return 0;
}