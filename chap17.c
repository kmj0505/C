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


//���� 17-2

#include <stdlib.h>
#include <string.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;
};

int main(void)
{
	struct profile yuni;

	strcpy(yuni.name, "������");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);
	printf("�ڱ�Ұ� : ");
	gets(yuni.intro);

	printf("�̸� : %s\n", yuni.name);
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.1lf\n", yuni.height);
	printf("�ڱ�Ұ� :%s\n", yuni.intro);
	free(yuni.intro);

	return 0;
}


//���� 17-3

#include <stdlib.h>
#include <string.h>

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;
	int id;
	double grade;
};

int main(void)
{
	struct student yuni;

	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("���� : %d\n", yuni.pf.age);
	printf("Ű : %.1lf\n", yuni.pf.height);
	printf("�й� : %d\n", yuni.id);
	printf("���� : %.1lf\n", yuni.grade);

	return 0;
}


//���� 17-5
struct vision       // �κ��� �÷��� ������ ����ü
{
	double left;    // ���� ��
	double right;   // ������ ��
};

struct vision exchange(struct vision robot);   // �� �÷��� �ٲٴ� �Լ�

int main(void)
{
	struct vision robot;                       // ����ü ���� ����

	printf("�÷� �Է� : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));  // �÷� �Է�
	robot = exchange(robot);                   // ��ȯ �Լ� ȣ��
	printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)    // ����ü�� ��ȯ�ϴ� �Լ�
{
	double temp;                   // ��ȯ�� ���� �ӽ� ����

	temp = robot.left;             // �¿� �÷� ��ȯ
	robot.left = robot.right;
	robot.right = temp;

	return robot;                  // ����ü ���� ��ȯ
}

//���� 17-6

struct score
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score yuni = { 90, 80, 70 };
	struct score* ps = &yuni;

	printf("���� : %d\n", (*ps).kor);
	printf("���� : %d\n", ps->eng);
	printf("���� : %d\n", ps->math);

	return 0;
}


//���� 17-9

struct list
{
	int num;
	struct list* next;
};

int main(void)
{
	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30,0 };
	struct list* head = &a, * current;

	a.next = &b;
	b.next = &c;

	printf("head->num : %d\n", head->num);
	printf("head->next->num : %d\n", head->next->num);

	printf("list all : ");
	current = head;
	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n");

	return 0;
}
