#include "main.h"
/**
 *print_alphabet_x10 - make x10 alphabet
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int line;

	line = 0;
	while (line < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		line++;
	}
}
