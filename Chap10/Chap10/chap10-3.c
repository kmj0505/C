#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//p271 ���� 10-3

int main(void)
{
	int ary[] = { 10,20,30 };
	//int* pa = ary;
	int i;

	printf("�迭�� �� : ");
	for (i = 0; i < sizeof(ary) / sizeof(int); i++)
	{
		printf("%d ", *(ary + i));
		//pa++;
	}
	return 0;
}

