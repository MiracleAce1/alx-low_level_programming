#include <stdio.h>
/*main -Ace entry point*/
/* return: 0(success)*/
int main(void)
{
	char e;
	char m;

	for (e = 'a'; e <= 'z'; e++)
		putchar(e);
	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
