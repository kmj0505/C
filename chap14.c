#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//���� 14-1
int main(void)
{
	int score[3][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("4������ ���� �Է� : ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("���� : %d, ��� : %.2lf\n", total, avg);
	}
	return 0;
}


//���� 14-2

int main(void)
{
	int num[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}


//���� 14-3

int main(void)
{

	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);
	for (i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}
	for (i = 0; i < count; i++)
	{
		printf("%s ", animal[i]);
	}

	return 0;
}


//���� 14-4

int main(void)
{
	char animal1[5][10] = {
		{'d','o','g','\0'},
		{'t', 'i', 'g', 'e', 'r','\0'},
		{'r','a','b','b','i','t','\0'},
		{'h','o','r','s','e','\0'},
		{'c','a','t','\0'}
	};

	char animal2[][10] = { "dog", "tiger", "rabbit", "horse", "cat" };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal2[i]);
	}
	return 0;
}


//���� 14-5

int main(void)
{
	int score[2][3][4] = {
		{{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}},
		{{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
	};

	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d�� ����...\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}


//���� 14-6

int main(void)
{
	char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}
