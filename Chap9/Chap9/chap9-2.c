#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//포인터 9-2
int main(void)
{
	int a; //정수형 a 선언
	int* pa; //pa가 가리키는 정수형 a의 주소 = &a 선언

	pa = &a; //pa는 a의 주소
	*pa = 10; //*pa가 가리키는 a에 10을 대입 (a=10)

	printf("포인터로 a값 출력 : %d\n", *pa);
	printf("변수명으로 a값 출력 : %d\n", a);

	return 0;
}
