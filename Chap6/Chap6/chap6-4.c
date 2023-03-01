#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//¿¹Á¦ 6-4
int main(void)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}