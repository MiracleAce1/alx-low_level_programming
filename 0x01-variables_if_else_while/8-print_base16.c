#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Ace main code entry*/
int main(void)
{
	int ace;
	char law;

	for (ace = 48; ace < 58; ace++)
		putchar(ace);
	for (law = 'a'; law <= 'f'; law++)
		putchar(law);
	putchar('\n');
	return (0);
}
