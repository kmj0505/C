#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//���� 12-1

int main(void)
{
	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
	printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);
	printf("ù ��° ���� : %c\n", *"apple");
	printf("�� ��° ���� : %c\n", *("apple" + 1));
	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);

	return 0;
}


//���� 12-2

int main(void)
{
	char* dessert = "apple";

	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
	dessert = "banana";
	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);

	return 0;
}


//���� 12-3

int main(void)
{
	char str[80];

	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("ù ��° �ܾ� : %s\n", str);
	scanf("%s", str);
	printf("���ۿ� �����ִ� �� ��° �ܾ� : %s\n", str);

	return 0;
}


//���� 12-4

int main(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	gets(str);
	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);
	gets(str);
	printf("���ۿ� �����ִ� ���ڿ��� %s�Դϴ�.", str);

	return 0;
}


//���� 12-5

#include <string.h>
int main(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	printf("�Էµ� ���ڿ��� %s�Դϴ�\n", str);


	return 0;
}


//���� 12-6

int main(void)
{
	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);
	scanf("%*c"); //getchar(); //fgetc(stdin);
	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);

	return 0;
}


//���� 12-7

int main(void)
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}


//���� 12-8

#include <string.h>
int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("���� ���ڿ� : %s\n", str1);
	strcpy(str1, str2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, "banana");
	printf("�ٲ� ���ڿ� : %s\n", str1);

	return 0;
}



//���� 12-9

#include <string.h>

int main(void)
{
	char str[20] = "mango tree";
	strncpy(str, "apple-ple", 7);
	str[5] = '\0';
	printf("%s\n", str);

	return 0;
}


//���� 12-10

#include <string.h>

int main(void)
{
	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	//strncat(str, "piece", 5);
	printf("%s\n", str);

	return 0;
}


//���� 12-11

#include <string.h>

int main(void)
{
	char str1[80], str2[80];
	char* resp;

	printf("2���� ���� �̸� �Է� : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp = str2;
	printf("�̸��� �� ������ :%s\n", resp);

	return 0;
}


//strlen�� null���ڰ� ������ �������� ���ڿ� ������ ����

int main(void)
{
	char str[80] = "apple";

	printf("%d", strlen(str));

	return 0;
}


//���� 12-12

#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	//printf("������ ���߿� ������ ���� �̸� : ");
	//if (strcmp(str1, str2) < 0)
	//	printf("%s\n", str2);
	//else
	//	printf("%s\n", str1);
	printf("�տ��� 3���� ���ڸ� ���ϸ�?\n");
	if (strncmp(str1, str2, 3) == 0)
		printf("����.\n");
	else
		printf("�ٸ���.\n");

	return 0;
}


//���� 12-13

char* my_strcpy(char* pd, char* ps);

int main(void)
{
	char str[80] = "strawberry";

	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	my_strcpy(str, "apple");
	printf("�ٲ� �� ���ڿ� : %s\n", str);
	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));

	return 0;
}

char* my_strcpy(char* pd, char* ps)
{
	char* po = pd;

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';

	return po;
}
