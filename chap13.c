#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//���� 13-4

//void auto_func(void);
void static_func(void);

int main(void)
{
	int i;

	printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}


	printf("���� ���� ����(static)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}

void auto_func(void)
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a;  // static int a=20; �� ��� �ٸ�
	a = 20;
	a++;
	printf("%d\n", a);

}

