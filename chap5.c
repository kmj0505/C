#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//예제 5-1
int main(void)
{
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;
	}

	printf("a : %d, b : %d\n", a, b);

	return 0;
}

//예제 5-2
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

//예제 5-3
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


//예제 5-6
int main(void)
{
	{
		int rank = 2, m = 0;

		switch (rank)
		{
		case 1:
			m = 300;
			break;

		case 2:
			m = 200;
			break;

		case 3:
			m = 100;
			break;

		default:
			m = 10;
			break;
		}

		printf("m : %d\n", m);

		return 0;
	}
}