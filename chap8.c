#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//p219 Ȯ�ι���3

int main(void)
{
	int A[3] = { 1,2,3 };
	int B[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		B[i] = A[i % 3];
	}

	for (i = 0; i < 10; i++)
	{
		printf("%5d", B[i]);
	}
	return 0;
}


//�迭 8-3
int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++)
	{
		scanf("%d", &score[i]);
	}
	
	for (i = 0; i < count; i++)
	{
		total += score[i];
	}
	avg = total / (double)count;

	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;
}


//�迭 8-4
int main(void)
{
	char str[9] = "applejam";
	//str[3] = '\n';
	//printf("%s", str);

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);

	return 0;
}


//�迭 8-5
int main(void)
{
	char str1[10] = "tiger";
	char str2[10];

	strcpy(str1, "cat");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
}


//�迭 8-6
int main(void)
{
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);

	return 0;
}

//p228 ���� 8-7

int main(void)
{
	char str[5];

	str[0] = 'O';
	str[1] = 'K';
	str[2] = '\0';

	printf("%s\n", str);

	return 0;
}
