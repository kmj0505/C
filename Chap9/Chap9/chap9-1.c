#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//포인터 9-1
int main(void)
{
	int a;
	double b;
	char c;

	printf("int형 변수의 주소 : %u\n", &a);
	printf("double형 변수의 주소 : %u\n", &b);
	printf("char형 변수의 주소 : %x\n", &c);

	return 0;
}
