#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


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
