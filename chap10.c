#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� 10.1.1

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	printf("�迭�� ��ü�� �� : %u\n", ary);
	printf("ù ��° �迭 ����� �ּ� : %u\n", &ary[0]);
	printf("�迭���� ����Ű�� ����� �� : %d\n", *ary);
	printf("ù ��° �迭 ����� �� : %d\n", ary[0]);

	return 0;

}


//p265 ���� 10-1

int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
	scanf("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}

	return 0;
}


//p268 ���� 10-2

int main(void)
{
	int ary[3];
	int* pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}
	return 0;
}


//p271 ���� 10-3

int main(void)
{
	int ary[] = { 10,20,30 };
	//int* pa = ary;
	int i;

	printf("�迭�� �� : ");
	for (i = 0; i < sizeof(ary) / sizeof(int); i++)
	{
		printf("%d ", *(ary+i));
		//pa++;
	}
	return 0;
}


//p275 ���� 10-4

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary; // pa = &ary
	int* pb = pa + 3; // pb = pa + 3, pb�� 40

	printf("pa : %u\n", pa); // 10����
	printf("pb : %u\n", pb); // 40����
	pa++;
	printf("pb - pa : %u\n", pb - pa); // 4 - 2

	printf("�տ� �ִ� �迭 ����� �� ��� : ");
	if (pa < pb) printf("%d\n", *pa); // 20
	else printf("%d\n", *pb);

	return 0;
}


//p282 ���� 10-5

void print_ary(int* pa);

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary);

	return 0;
}

void print_ary(int* pa)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]);
	}
}


//p286 ���� 10-7

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("�迭�� �ִ� : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size)
{
	int i;

	printf("%d���� �Ǽ��� �Է� : ", size);
	for (i = 0; i < size; i++)
	{
		scanf_s("%lf", pa + i);
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;
	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i];
	}
	return max;
}
