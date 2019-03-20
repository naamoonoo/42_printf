#include "ft_printf.h"

int64_t	get_number(va_list *ap, f_s fs)
{
	if (fs.length == l_LENGTH)
		return ((long)va_arg(*ap, long));
	else if (fs.length == ll_LENGTH)
		return ((long long)va_arg(*ap, long long));
	else if (fs.length == h_LENGTH)
		return ((short)va_arg(*ap, int));
	else if (fs.length == hh_LENGTH)
		return ((signed char)va_arg(*ap, int));
	else
		return ((int)va_arg(*ap, int));
}

void	di_print(va_list *ap, f_s fs)
{
	int64_t nbr;
	int		len;

	nbr = get_number(ap, fs);
	len = fs.width - is_sign(nbr < 0, fs);
	len -= fs.prec > ft_numlen(nbr, 10) ? fs.prec : ft_numlen(nbr, 10);
	if (fs.minus)
	{
		ft_putnbr_width(nbr, fs.prec, fs);
		ft_make_width(len, ' ');
	}
	else if (!fs.minus && fs.zero)
		ft_putnbr_width(nbr, fs.width - is_sign(nbr < 0, fs), fs);
	else if (!fs.minus && !fs.zero)
	{
		ft_make_width(len, ' ');
		ft_putnbr_width(nbr, fs.prec, fs);
	}
}
