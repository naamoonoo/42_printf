#include "ft_printf.h"

int ft_printf(char *s, ...)
{
	// int		i;
	va_list ap;
	// int		count;

	// count = 0;
	// i = -1;
	// while(s[++i] && s[i] == '%')
	// 	count++;
	
	
	va_start(ap, s);
	while (*s)
	{
		if (*s == '\\')
			ft_escape(++s);
		else if (*s == '%')
		{
			// printf("%% is coming\n");
			// if (*s == 'd')
			// {
			// 	printf("hey\n");
			// 	int nbr = va_arg(ap, int);
			// 	ft_putnbr(nbr);
			// 	*s += 1;
			// }
			ft_formatting(&s, &ap);
			// s++;
		}
		else
			ft_putchar(*s++);
	}
	va_end(ap);

	// ft_putstr(input);
	
	return (0);
}