#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//¿¹Á¦ 7-5
void fruit(void);

int main(void)
{
	fruit();

	return 0;
}

void fruit(void)
{
	printf("apple\n");
	fruit();
}
