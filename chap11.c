#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//���� 11-4

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}
	return 0;
}


//���� 11-5

int main(void)
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);
		if (res == EOF)break;
		printf("%d ", ch);
	}
	return 0;
}
*/

//���� 11-6

void my_gets(char* str, int size);

int main(void)
{
	char str[7];

	my_gets(str, sizeof(str));
	printf("�Է��� ���ڿ� : %s\n", str);

	return 0;
}
void my_gets(char* str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1))
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
}


//���� 11-7

int main(void)
{
	int num, grade;

	printf("�й� �Է� : ");
	scanf("%d", &num);
	getchar();
	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}
