#include "ft_printf.h"

void	i_print(va_list *ap, f_s fs)
{
	int d;
	int len;
	int	min_len;

	d = va_arg(*ap, int);
	len = fs.width - fs.plus - fs.space - (d < 0 ? 1 : 0);
	len -= ft_number_length(d < 0 ? d * -1 : d, 10);
	min_len = 0;
	if (fs.precision > ft_number_length(d < 0 ? d * -1 : d, 10))
		min_len = fs.precision - ft_number_length(d < 0 ? d * -1 : d, 10);
	if (fs.minus)
	{
		if ((fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_make_width(min_len, '0');
		ft_putnbr(d);
		ft_make_width(len - min_len, fs.zero ? '0' : ' ');
	}
	else
	{
		if (fs.zero && (fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_make_width(len - min_len, fs.zero ? '0' : ' ');
		if (!fs.zero && (fs.plus || fs.space) && d > 0)
			ft_putchar(fs.plus ? '+' : ' ');
		ft_make_width(min_len, '0');
		ft_putnbr(d);
	}
}

void	hi_print(va_list *ap, f_s fs)
{
	short int	d;
	int			len;

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

void	hhi_print(va_list *ap, f_s fs)
{
	signed char	d;
	int			len;

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

void	li_print(va_list *ap, f_s fs)
{
	long int	d;
	int			len;

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

void	lli_print(va_list *ap, f_s fs)
{
	long long int	d;
	int				len;

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
