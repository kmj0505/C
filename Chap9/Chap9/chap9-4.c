#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//������ 9-4
int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("���� a�� �� : %d\n", *pa); // *pa = 10

	pa = &b;  // pa�� b�� �ּҸ� ����Ŵ / *pa = 220
	printf("���� b�� �� : %d\n", *pa);

	//pa = &a; // pa�� a�� �ּҸ� ����Ŵ / *pa = 10
	pa = &a;
	a = 20;
	printf("���� a�� �� : %d\n", *pa); // a=30 > *pa=30

	return 0;
}
