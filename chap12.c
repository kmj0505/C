#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//예제 12-1

int main(void)
{
	printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
	printf("첫 번째 문자 : %c\n", *"apple");
	printf("두 번째 문자 : %c\n", *("apple" + 1));
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);

	return 0;
}


//예제 12-2

int main(void)
{
	char* dessert = "apple";

	printf("오늘 후식은 %s입니다.\n", dessert);
	dessert = "banana";
	printf("내일 후식은 %s입니다.\n", dessert);

	return 0;
}


//예제 12-3

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("첫 번째 단어 : %s\n", str);
	scanf("%s", str);
	printf("버퍼에 남아있는 두 번째 단어 : %s\n", str);

	return 0;
}


//예제 12-4

int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	gets(str);
	printf("입력한 문자열은 %s입니다.", str);
	gets(str);
	printf("버퍼에 남아있는 문자열은 %s입니다.", str);

	return 0;
}


//예제 12-5

#include <string.h>
int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	printf("입력된 문자열은 %s입니다\n", str);


	return 0;
}


//예제 12-6

int main(void)
{
	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);
	scanf("%*c"); //getchar(); //fgetc(stdin);
	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;
}


//예제 12-7

int main(void)
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}


//예제 12-8

#include <string.h>
int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);

	return 0;
}



//예제 12-9

#include <string.h>

int main(void)
{
	char str[20] = "mango tree";
	strncpy(str, "apple-ple", 7);
	str[5] = '\0';
	printf("%s\n", str);

	return 0;
}


//예제 12-10

#include <string.h>

int main(void)
{
	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	//strncat(str, "piece", 5);
	printf("%s\n", str);

	return 0;
}


//예제 12-11

#include <string.h>

int main(void)
{
	char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp = str2;
	printf("이름이 긴 과일은 :%s\n", resp);

	return 0;
}


//strlen은 null문자가 나오기 전까지의 문자열 개수를 센다

int main(void)
{
	char str[80] = "apple";

	printf("%d", strlen(str));

	return 0;
}


//예제 12-12

#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	//printf("사전에 나중에 나오는 과일 이름 : ");
	//if (strcmp(str1, str2) < 0)
	//	printf("%s\n", str2);
	//else
	//	printf("%s\n", str1);
	printf("앞에서 3개의 문자만 비교하면?\n");
	if (strncmp(str1, str2, 3) == 0)
		printf("같다.\n");
	else
		printf("다르다.\n");

	return 0;
}


//예제 12-13

char* my_strcpy(char* pd, char* ps);

int main(void)
{
	char str[80] = "strawberry";

	printf("바꾸기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple");
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));

	return 0;
}

char* my_strcpy(char* pd, char* ps)
{
	char* po = pd;

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';

	return po;
}
