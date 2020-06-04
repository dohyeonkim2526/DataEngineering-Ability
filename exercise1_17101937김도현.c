#pragma warning(disable:4996)
#include<stdio.h>
#define stop '#'

void chline(char, unsigned int, unsigned int);

int main(void)
{
	char ch;
	int i, j;

	printf("Enter a char and two ints(# to quit): ");

	while ((scanf("%c %d %d", &ch, &i, &j) == 3) && (getchar != stop))
	{
		chline(ch, i, j);
		printf("\n");

		printf("Enter a char and two ints(# to quit): ");
	}

	return 0;
}

void chline(char ch, unsigned int i, unsigned int j)
{
	int columns;

	for (columns = 1; columns < i; columns ++)
		putchar(' ');

	for (; columns <= j; columns ++)
		putchar(ch);
}


