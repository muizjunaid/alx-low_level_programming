#include "main.h"
/**
*_puts_recursion - duplicate of puts();
*@s: input string
*Return: 0 SUCCESS
*/
void _puts_recursion(char *s)
{int con = 0;

recursion_ass(s, con);
}
/**
*recursion_ass - created to assist _puts_recursion();
*@s: inputing string
*@con: index position
*/
void recursion_ass(char *s, int con)
{
	int len = strlen(s);

	if (con < len)
	{
		_putchar(s[con]);
		con++;
		recursion_ass(s, con);
	}
	else
	{
		_putchar('\n');
	}
}
