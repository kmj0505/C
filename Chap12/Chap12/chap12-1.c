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
