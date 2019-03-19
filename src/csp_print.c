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
	if (fs.prec)
		s = ft_strsub(s, 0, fs.prec);
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
	if (fs.prec)
		ft_strdel(&s);
}

void	p_print(va_list *ap, f_s fs)
{
	intptr_t	ptr;
	char		*temp;
	
	temp = NULL;
	ptr = va_arg(*ap, intptr_t);
	if (!ptr)
		ft_putstr("0x0");
	ft_putstr("0x");
    temp = ft_itoa_base(ptr, HEXA, 12);
	if (fs.minus)
    	ft_putstr(temp);
	else
		ft_putstr(temp);
	ft_strdel(&temp);
}