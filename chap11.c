#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//예제 11-4

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


//예제 11-5

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

//예제 11-6

void my_gets(char* str, int size);

int main(void)
{
	char str[7];

	my_gets(str, sizeof(str));
	printf("입력한 문자열 : %s\n", str);

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


//예제 11-7

int main(void)
{
	int num, grade;

	printf("학번 입력 : ");
	scanf("%d", &num);
	getchar();
	printf("학점 입력 : ");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}
