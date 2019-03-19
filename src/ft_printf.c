#include "ft_printf.h"

int ft_printf(char *s, ...)
{
	va_list ap;
	
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
			ft_formatting(&s, &ap);
		// else if ('{')
			// ft_coloring
		else
			ft_putchar(*s++);
	}
	va_end(ap);
	return (0);
}

