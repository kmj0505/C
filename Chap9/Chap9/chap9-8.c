#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//p256 ¿¹Á¦ 9-8

int a = 10, b = 20;
void swap(void);

int main(void)
{


	swap();
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(void)
{
	int temp;

	temp = a;
	a = b;
	b = temp;

}

