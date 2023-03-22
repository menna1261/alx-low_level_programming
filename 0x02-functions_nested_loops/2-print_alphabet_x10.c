#include"main.h"

/**
 * Print_alphapet_x10 - function that will print the alphapet 10 times
 *
*/

void print_alphapet_x10(void)
{
	int line;
	char ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
        }
}
