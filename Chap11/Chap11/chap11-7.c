#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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