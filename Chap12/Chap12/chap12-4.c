#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


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
