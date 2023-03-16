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
