#include "ft_printf.h"

void	ft_escape(char *s)
{
	if (*s)
	{
		if (*s == 'a')
			ft_putchar('\a');
		else if (*s == 'b')
			ft_putchar('\b');
		else if (*s == 't')
			ft_putchar('\t');
		else if (*s == 'f')
			ft_putchar('\f');
		else if (*s == 'r')
			ft_putchar('\r');
		else if (*s == 'n')
			ft_putchar('\n');
		else if (*s == 'v')
			ft_putchar('\v');
		else if (*s == '\\') //not working!
			printf("helr?\n");
		else if (*s == '\"')
			ft_putchar('\"');
		else if (*s == '\'')
			ft_putchar('\'');
		else if (*s == '%')
			ft_putchar('%');
	}
}