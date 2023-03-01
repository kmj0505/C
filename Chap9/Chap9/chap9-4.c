#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//포인터 9-4
int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a의 값 : %d\n", *pa); // *pa = 10

	pa = &b;  // pa가 b의 주소를 가리킴 / *pa = 220
	printf("변수 b의 값 : %d\n", *pa);

	//pa = &a; // pa가 a의 주소를 가리킴 / *pa = 10
	pa = &a;
	a = 20;
	printf("변수 a의 값 : %d\n", *pa); // a=30 > *pa=30

	return 0;
}
