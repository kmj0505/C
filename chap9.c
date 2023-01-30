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
*/

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


//포인터 9-3
int main(void)
{
	int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;
}


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

//p254 예제 9-7

void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

//p256 예제 9-8

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


//p258 예제 9-9

void swap(int x, int y);

int main(void)
{
	int a = 10, b = 20;

	swap(a, b);
	printf("a: %d, b: %d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}
