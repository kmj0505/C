#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//p275 예제 10-4

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary; // pa = &ary
	int* pb = pa + 3; // pb = pa + 3, pb는 40

	printf("pa : %u\n", pa); // 10나옴
	printf("pb : %u\n", pb); // 40나옴
	pa++;
	printf("pb - pa : %u\n", pb - pa); // 4 - 2

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa); // 20
	else printf("%d\n", *pb);

	return 0;
}

