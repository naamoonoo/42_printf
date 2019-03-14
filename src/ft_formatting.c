#include "ft_printf.h"

void	ft_formatting(char **s, va_list *ap)
{	
	f_s		fs_l;
	char	format;
	format_specifier_setting(&fs_l);
	format = get_format(s, &fs_l);

	if (format == 'd')
		ft_d_print(ap, fs_l);
	else if (format == 'c')
		ft_c_print(ap, fs_l);
	else if (format == 's')
		ft_s_print(ap, fs_l);
	else if (format == 'p')
		ft_s_print(ap, fs_l);
	else if (format == 'f')
		ft_f_print(ap, fs_l);
	*s += 1;
}

char	get_format(char **s, f_s *fs_l)
{
	*s += 1;
	while (*s)
	{
		if (is_special(**s))
		{
			format_specifier_handle(**s, fs_l);
			*s += 1;
		}
		else if (is_format(**s))
			return (**s);
		else if (**s == '%')
		{
			ft_putchar('%');
			break ;
		}
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
	fs_l->dot = 0;
	fs_l->precision = 0;

}

void	format_specifier_handle(char c, f_s *fs_l)
{
	if (c == '+')
		fs_l->plus += 1;
	else if (c == '-')
		fs_l->minus += 1;
	else if (c == '#')
		fs_l->hash += 1;
	else if (c == ' ')
		fs_l->space += 1;
	else if (c == '.')
		fs_l->dot += 1;
	else if (fs_l->dot != 0 && c >= '0' && c <= '9')
		fs_l->precision = (fs_l->precision * 10) + c - '0';
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

