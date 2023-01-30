#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//예제 17-1

//#pragma pack(1); //이걸 쓰면 패딩바이트가 안채워지므로 s1구조체의 크기는 12
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
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);
	printf("%d", sizeof(s1)); // s1 구조체의 크기는 패딩바이트로 인해 16이 나온다
	return 0;
}


//예제 17-2

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

	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);
	printf("자기소개 : ");
	gets(yuni.intro);

	printf("이름 : %s\n", yuni.name);
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 :%s\n", yuni.intro);
	free(yuni.intro);

	return 0;
}


//예제 17-3

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

	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);
	printf("학번 : %d\n", yuni.id);
	printf("학점 : %.1lf\n", yuni.grade);

	return 0;
}


//예제 17-5
struct vision       // 로봇의 시력을 저장할 구조체
{
	double left;    // 왼쪽 눈
	double right;   // 오른쪽 눈
};

struct vision exchange(struct vision robot);   // 두 시력을 바꾸는 함수

int main(void)
{
	struct vision robot;                       // 구조체 변수 선언

	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));  // 시력 입력
	robot = exchange(robot);                   // 교환 함수 호출
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)    // 구조체를 반환하는 함수
{
	double temp;                   // 교환을 위한 임시 변수

	temp = robot.left;             // 좌우 시력 교환
	robot.left = robot.right;
	robot.right = temp;

	return robot;                  // 구조체 변수 반환
}

//예제 17-6

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

	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps->eng);
	printf("수학 : %d\n", ps->math);

	return 0;
}


//예제 17-9

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
