#include "ft_printf.h"

void	o_print(va_list *ap, f_s fs)
{
	u_int64_t	d;
	int			len;
	char		*temp;
	
	temp = NULL;
	d = get_unsigned_number(ap, fs);
	if (d == 0)
		return ;
	if (fs.zero)
	{
		ft_putstr(fs.hash ? "0" : 0);
		temp = ft_itoa_base(d, OCTAL, fs.width - fs.hash);
		ft_putstr(temp);
	}
	else
	{
		temp = ft_itoa_base(d, OCTAL, 0);
		len = fs.width - fs.hash - ft_strlen(temp);
		!fs.minus ? ft_make_width(len, ' ') : 0;
		ft_putstr(fs.hash ? "0" : 0);
		ft_putstr(temp);
		fs.minus ? ft_make_width(len, ' ') : 0;
	}
	ft_strdel(&temp);
}

void	x_print(va_list *ap, f_s fs)
{
	u_int64_t	d;
	int			len;
	char		*temp;
	
	temp = NULL;
	d = get_unsigned_number(ap, fs);
	if (d == 0)
		return ;
	if (fs.zero)
	{
		ft_putstr(fs.hash ? "0x" : 0);
		temp = ft_itoa_base(d, HEXA, fs.width - fs.hash * 2);
		ft_putstr(temp);
	}
	else
	{
		temp = ft_itoa_base(d, HEXA, 0);
		len = fs.width - fs.hash * 2 - ft_strlen(temp);
		!fs.minus ? ft_make_width(len, ' ') : 0;
		ft_putstr(fs.hash ? "0x" : 0);
		ft_putstr(temp);
		fs.minus ? ft_make_width(len, ' ') : 0;
	}
	ft_strdel(&temp);
}

void	X_print(va_list *ap, f_s fs)
{
	u_int64_t	d;
	int			len;
	int			i;
	char		*temp;
	
	temp = NULL;
	d = get_unsigned_number(ap, fs);
	if (d == 0)
		return ;
	if (!(i = 0) && fs.zero)
	{
		ft_putstr(fs.hash ? "0X" : 0);
		temp = ft_itoa_base(d, HEXA, fs.width - fs.hash * 2);
		while(temp[i])
			ft_putchar(ft_toupper(temp[i++]));
	}
	else
	{
		temp = ft_itoa_base(d, HEXA, 0);
		len = fs.width - fs.hash * 2 - ft_strlen(temp);
		!fs.minus ? ft_make_width(len, ' ') : 0;
		ft_putstr(fs.hash ? "0X" : 0);
		while(temp[i])
			ft_putchar(ft_toupper(temp[i++]));
		fs.minus ? ft_make_width(len, ' ') : 0;
	}
	ft_strdel(&temp);
}

void	b_print(va_list *ap, f_s fs)
{
	u_int64_t	d;
	int			len;
	char		*temp;
	
	temp = NULL;
	d = get_unsigned_number(ap, fs);
	if (d == 0)
		return ;
	if (fs.zero)
	{
		ft_putstr(fs.hash ? "ob" : 0);
		temp = ft_itoa_base(d, BINARY, fs.width - fs.hash * 2);
		ft_putstr(temp);
	}
	else
	{
		temp = ft_itoa_base(d, BINARY, 0);
		len = fs.width - fs.hash * 2 - ft_strlen(temp);
		!fs.minus ? ft_make_width(len, ' ') : 0;
		ft_putstr(fs.hash ? "ob" : 0);
		ft_putstr(temp);
		fs.minus ? ft_make_width(len, ' ') : 0;
	}
	ft_strdel(&temp);
}
