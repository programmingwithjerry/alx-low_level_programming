#include "main.h"
/**
* main-print putchar followed by a new line
*
* Return :always 0
*/
int main(void)
{
	char s[] = "_putchar";
	int icount = 0;

	while (s[icount] != '\0')
	{
		_putchar(s[icount]);
		icount++;
	}
	_putchar(10);

	return (0);
}
