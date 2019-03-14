# include "ft_printf.h"

void	ft_c_print(va_list *ap, f_s fs_l)
{
	char	c;
	int		len;

	c = va_arg(*ap, int);
	len = fs_l.width - 1;
	if (fs_l.minus)
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

void	ft_s_print(va_list *ap, f_s fs_l)
{
	char	*s;
	int		len;

	s = va_arg(*ap, char *);
	len = fs_l.width - ft_strlen(s);
	if (fs_l.minus)
	{
		ft_putstr(s);
		ft_make_width(len, ' ');
	}
	else
	{
		ft_make_width(len, ' ');
		ft_putstr(s);
	}
}

void	ft_p_print(va_list *ap, f_s fs_l)
{
	int p;
	fs_l.minus -= fs_l.plus;
	p = va_arg(*ap, int);
	printf("%p",&p);
}