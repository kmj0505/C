#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� 5-6
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