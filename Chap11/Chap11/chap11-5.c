#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� 11-5

int main(void)
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);
		if (res == EOF)break;
		printf("%d ", ch);
	}
	return 0;
}