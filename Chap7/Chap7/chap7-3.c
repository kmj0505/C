#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� 7-3
int get_num(void);

int main(void)
{
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);
	return 0;
}

int get_num(void)
{
	int num;


	printf("��� �Է� : ");
	scanf("%d", &num);

	return num;
}


void print_char(char ch, int count);

int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	return;
}
