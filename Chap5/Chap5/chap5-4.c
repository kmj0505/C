#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� 5-4
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
		printf("a�� b�� �����ϴ�.\n");
	}
	else if (a < b)
	{
		printf("a�� b���� �۽��ϴ�.\n");
	}
	else
	{
		printf("a�� b���� Ů�ϴ�.\n");
	}

	printf("a : %d, b: %d\n", a, b);

	return 0;
}
