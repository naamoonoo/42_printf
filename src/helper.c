# include "ft_printf.h"

int		is_special(char c)
{
	return (c == '+' || c == '-' || c == '#' 
	|| c == ' ' || (c >= '0' && c <= '9') || c == '.');
}

int		is_format(char c)
{
	return (c == 'c' || c == 's' || c == 'p' 
	|| c == 'd' || c == 'i' || c == 'f');
}

void	ft_make_width(int len, char c)
{
	while (len > 0 && len-- != 0)
		ft_putchar(c);
}
