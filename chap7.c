#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� 7-1
int sum(int x, int y);

int main(void)
{
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result : %d\n", result);

	return 0;
}


int sum(int x, int y)
{
	int temp;

	temp = x + y;

	return temp;
}



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


//���� 7-5
void fruit(void);

int main(void)
{
	fruit();

	return 0;
}

void fruit(void)
{
	printf("apple\n");
	fruit();
}


//���� 7-6
int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);
	printf("jam\n");
}


void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}
void fruit(void)
{
	printf("apple\n");
	fruit();
	printf("banana\n");
}