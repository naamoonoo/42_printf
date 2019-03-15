# include "ft_printf.h"

void	c_print(va_list *ap, f_s fs)
{
	char	c;
	int		len;

	c = va_arg(*ap, int);
	len = fs.width - 1;
	if (fs.minus)
	{
		ft_putchar(c);
		ft_make_width(len, ' ');
	}
	else
	{
		ft_make_width(len, ' ');
		ft_putchar(c);
	}
}

void	s_print(va_list *ap, f_s fs)
{
	char	*s;
	int		len;

	s = va_arg(*ap, char *);
	if (fs.precision)
		s = ft_strsub(s, 0, fs.precision);
	len = fs.width - ft_strlen(s);
	if (fs.minus)
	{
		ft_putstr(s);
		ft_make_width(len, ' ');
	}
	else
	{
		ft_make_width(len, ' ');
		ft_putstr(s);
	}
	if (fs.precision)
		ft_strdel(&s);
}

void	p_print(va_list *ap, f_s fs)
{
	int p;
	fs.minus -= fs.plus;
	p = va_arg(*ap, int);
	printf("%p",&p);
}