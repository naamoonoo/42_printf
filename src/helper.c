#include "ft_printf.h"

void	ft_make_width(int len, char c)
{
	while (len > 0 && len-- != 0)
		ft_putchar(c);
}

void	ft_putstr_upper(char *s)
{
	int i;

	i = -1;
	if (s)
		while (s[++i])
			ft_putchar(ft_toupper(s[i]));
}

int		get_enum(long double f)
{
	int e_num;

	e_num = 0;
	while(ABS(f) > 0.0 && ABS(f) < 1.0)
	{
		f *= 10.0;
		e_num -= 1;
	}
	return (e_num);
}