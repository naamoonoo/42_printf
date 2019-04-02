#include "ft_printf.h"

int ft_printf(char *s, ...)
{
	va_list ap;
	int		res;

	va_start(ap, s);
	res = 0;
	while (*s)
	{
		if (*s == '%')
			ft_formatting(&s, &ap, &res);
		else if (*s == '{')
			ft_coloring(&s, &res);
		else
		{
			ft_putchar(*s++);
			res++;
		}
	}
	va_end(ap);
	return (res);
}
