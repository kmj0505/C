#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//예제 5-4
int main(void)
{
	int a = 20, b = 10;

	if (a > 10)
	{
		if ((b >= 0) && (b < 10))
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}
	if (a == b)
	{
		printf("a는 b와 같습니다.\n");
	}
	else if (a < b)
	{
		printf("a는 b보다 작습니다.\n");
	}
	else
	{
		printf("a는 b보다 큽니다.\n");
	}

	printf("a : %d, b: %d\n", a, b);

	return 0;
}
