#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//������ 9-2
int main(void)
{
	int a; //������ a ����
	int* pa; //pa�� ����Ű�� ������ a�� �ּ� = &a ����

	pa = &a; //pa�� a�� �ּ�
	*pa = 10; //*pa�� ����Ű�� a�� 10�� ���� (a=10)

	printf("�����ͷ� a�� ��� : %d\n", *pa);
	printf("���������� a�� ��� : %d\n", a);

	return 0;
}
