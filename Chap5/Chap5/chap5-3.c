#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� 5-3
int main(void)
{
	int a = 0, b = 0;

	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}
	printf("b : %d\n", b);
	return 0;
}