# include "ft_printf.h"

int		is_special(char c)
{
	return (c == '+' || c == '-' || c == '#' 
	|| c == ' ' || (c >= '0' && c <= '9') || c == '.');
}

int		is_prefix(char c)
{
	return (c == 'h' || c == 'l' || c == 'L');
}

int		is_specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'p'
	|| c == 'd' || c == 'i' || c == 'o' || c == 'u'
	|| c == 'x' || c == 'X' || c == 'f');
}

void	ft_make_width(int len, char c)
{
	while (len > 0 && len-- != 0)
		ft_putchar(c);
}

void	flag_setting(f_s *fs)
{
	fs->plus = 0;
	fs->minus = 0;
	fs->hash = 0;
	fs->space = 0;
	fs->zero = 0;
	fs->width = 0;
	fs->dot = 0;
	fs->precision = 0;
}

