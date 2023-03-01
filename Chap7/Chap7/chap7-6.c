#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//¿¹Á¦ 7-6
int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);
	printf("jam\n");
}


void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}
void fruit(void)
{
	printf("apple\n");
	fruit();
	printf("banana\n");
}