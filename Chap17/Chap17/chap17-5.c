#include <stdlib.h>
#include <string.h>


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