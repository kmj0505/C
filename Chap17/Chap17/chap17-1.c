#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� 17-1

//#pragma pack(1); //�̰� ���� �е�����Ʈ�� ��ä�����Ƿ� s1����ü�� ũ��� 12
struct student
{
	int num;
	double grade;
};

int main(void)
{
	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;
	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);
	printf("%d", sizeof(s1)); // s1 ����ü�� ũ��� �е�����Ʈ�� ���� 16�� ���´�
	return 0;
}
