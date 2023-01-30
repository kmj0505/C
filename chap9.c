#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//������ 9-1
int main(void)
{
	int a;
	double b;
	char c;

	printf("int�� ������ �ּ� : %u\n", &a);
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %x\n", &c);

	return 0;
}
*/

//������ 9-2
int main(void)
{
	int a; //������ a ����
	int* pa; //pa�� ����Ű�� ������ a�� �ּ� = &a ����
	
	pa = &a; //pa�� a�� �ּ�
	*pa = 10; //*pa�� ����Ű�� a�� 10�� ���� (a=10)

	printf("�����ͷ� a�� ��� : %d\n", *pa);
	printf("���������� a�� ��� : %d\n", a);

	return 0;
}


//������ 9-3
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

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);

	return 0;
}


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

//p254 ���� 9-7

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

//p256 ���� 9-8

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


//p258 ���� 9-9

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
