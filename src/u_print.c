#include "ft_printf.h"

void	u_print(va_list *ap, f_s fs)
{
	unsigned int	d;
	int				len;

	d = va_arg(*ap, int);
	len = fs.width - fs.plus - fs.space;
	len -= ft_number_length(d < 0 ? d * -1 : d, 10);
	if (fs.minus)
	{
		if ((fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_putnbr(d);
		ft_make_width(len, fs.zero ? '0' : ' ');
	}
	else
	{
		if (fs.zero && (fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_make_width(len, fs.zero ? '0' : ' ');
		if (!fs.zero && (fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_putnbr(d);
	}
}

void	hu_print(va_list *ap, f_s fs)
{
	unsigned short int	d;
	int					len;

	d = va_arg(*ap, int);
	len = fs.width - fs.plus - fs.space;
	len -= ft_number_length(d < 0 ? d * -1 : d, 10);
	if (fs.minus)
	{
		if ((fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_putnbr(d);
		ft_make_width(len, fs.zero ? '0' : ' ');
	}
	else
	{
		if (fs.zero && (fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_make_width(len, fs.zero ? '0' : ' ');
		if (!fs.zero && (fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_putnbr(d);
	}
}

void	hhu_print(va_list *ap, f_s fs)
{
	unsigned char	d;
	int				len;

	d = va_arg(*ap, int);
	len = fs.width - fs.plus - fs.space;
	len -= ft_number_length(d < 0 ? d * -1 : d, 10);
	if (fs.minus)
	{
		if ((fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_putnbr(d);
		ft_make_width(len, fs.zero ? '0' : ' ');
	}
	else
	{
		if (fs.zero && (fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_make_width(len, fs.zero ? '0' : ' ');
		if (!fs.zero && (fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_putnbr(d);
	}
}

void	lu_print(va_list *ap, f_s fs)
{
	unsigned long int	d;
	int					len;

	d = va_arg(*ap, int);
	len = fs.width - fs.plus - fs.space;
	len -= ft_number_length(d < 0 ? d * -1 : d, 10);
	if (fs.minus)
	{
		if ((fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_putnbr(d);
		ft_make_width(len, fs.zero ? '0' : ' ');
	}
	else
	{
		if (fs.zero && (fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_make_width(len, fs.zero ? '0' : ' ');
		if (!fs.zero && (fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_putnbr(d);
	}
}

void	llu_print(va_list *ap, f_s fs)
{
	unsigned long long int	d;
	int						len;

	d = va_arg(*ap, long);
	len = fs.width - fs.plus - fs.space;
	len -= ft_number_length(d < 0 ? d * -1 : d, 10);
	if (fs.minus)
	{
		if ((fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_putnbr(d);
		ft_make_width(len, fs.zero ? '0' : ' ');
	}
	else
	{
		if (fs.zero && (fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_make_width(len, fs.zero ? '0' : ' ');
		if (!fs.zero && (fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_putnbr(d);
	}
}
