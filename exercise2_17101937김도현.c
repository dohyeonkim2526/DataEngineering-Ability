#pragma warning(disable:4996)
#include<stdio.h>
#define stop '/'

void input(char, unsigned int, unsigned int);

int main(void)
{
	char ch;
	int i, j;

	printf("Enter a char and two ints (/ to quit): ");

	while ((scanf("%c %d %d", &ch, &i, &j) == 3) && (getchar != stop)) {
		input(ch, i, j);
		printf("\n");

		printf("Enter a char and two ints (/ to quit): ");
	}

	return 0;
}

void input(char ch, unsigned int i, unsigned int j)
{
	for (int rows = 0; rows < j; rows++)
	{
		for (int columns = 0; columns < i; columns++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}