#include <stdio.h>
/* ACE coding */
/* return: 0 (successs)*/
int main(void)
{
	char ace;

	for (ace = 'a'; ace <= 'z'; ace++)
	{
		if (ace != 'q' && ace != 'e')
			putchar(ace);
	}
	putchar('\n');
	return (0);
}
