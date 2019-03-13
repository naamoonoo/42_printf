#include "ft_printf.h"

void	ft_formatting(char **s, va_list *ap)
{	
	f_s		fs_l;
	char	format;
	format_specifier_setting(&fs_l);
	format = get_format_char(s, &fs_l);

	if (format == 'd')
		ft_d_print(ap, fs_l);
	else if (format == 'c')
		ft_c_print(ap, fs_l);
	else if (format == 's')
		ft_s_print(ap, fs_l);
	else if (format == 'p')
		ft_s_print(ap, fs_l);
	*s += 1;
}

char	get_format_char(char **s, f_s *fs_l)
{
	*s += 1;
	while (*s)
	{
		if (is_special(**s))
		{
			special_char_handle(**s, fs_l);
			*s += 1;
		}
		else if (is_format(**s))
			return (**s);
	}
	return (0);
}

void	format_specifier_setting(f_s *fs_l)
{
	fs_l->plus = 0;
	fs_l->minus = 0;
	fs_l->hash = 0;
	fs_l->space = 0;
	fs_l->zero = 0;
	fs_l->width = 0;
}

void	special_char_handle(char c, f_s *fs_l)
{
	if (c == '+')
		fs_l->plus += 1;
	else if (c == '-')
		fs_l->minus += 1;
	else if (c == '#')
		fs_l->hash += 1;
	else if (c == ' ')
		fs_l->space += 1;
	else if (c >= '1' && c <= '9')
		fs_l->width = (fs_l->width * 10) + c - '0';
	else if (c == '0')
	{
		if (fs_l->width != 0)
			fs_l->width = (fs_l->width * 10) + c - '0';
		else
			fs_l->zero += 1;
	}
}

int		is_special(char c)
{
	return (c == '+' || c == '-' || c == '#' 
	|| c == ' ' || (c >= '0' && c <= '9'));
}

int		is_format(char c)
{
	return (c == 'c' || c == 's' || c == 'p' 
	|| c == 'd' || c == 'i');
}

void	ft_make_width(int len, char c)
{
	while (len-- != 0)
		ft_putchar(c);
}

void	ft_d_print(va_list *ap, f_s fs_l)
{
	int d;

	d = va_arg(*ap, int);
	if (fs_l.space)
		ft_putchar(' ');
	if (fs_l.plus && d > 0 && fs_l.width == 0)
		ft_putchar('+');
	if (fs_l.minus)
		ft_putnbr(d);
	if (fs_l.width != 0)
	{
		ft_make_width(fs_l.width - ft_number_length(d, 10) - fs_l.plus - fs_l.space, fs_l.zero ? '0' : ' ');
	}
		
	if (!fs_l.minus)
		ft_putnbr(d);
		

}

void	ft_c_print(va_list *ap, f_s fs_l)
{
	char c;
	fs_l.minus -= fs_l.plus;
	c = va_arg(*ap, int);
	ft_putchar(c);
}

void	ft_s_print(va_list *ap, f_s fs_l)
{
	char *s;
	fs_l.minus -= fs_l.plus;
	s = va_arg(*ap, char *);
	ft_putstr(s);
}

void	ft_p_print(va_list *ap, f_s fs_l)
{
	int p;
	fs_l.minus -= fs_l.plus;
	p = va_arg(*ap, int);
	printf("%p",&p);
}