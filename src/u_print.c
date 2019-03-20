#include "ft_printf.h"

uint64_t	get_unsigned_number(va_list *ap, f_s fs)
{
	if (fs.length == l_LENGTH)
		return ((unsigned long)va_arg(*ap, unsigned long));
	else if (fs.length == ll_LENGTH)
		return ((unsigned long long)va_arg(*ap, unsigned long long));
	else if (fs.length == h_LENGTH)
		return ((unsigned short)va_arg(*ap, int));
	else if (fs.length == hh_LENGTH)
		return ((unsigned char)va_arg(*ap, int));
	else
		return ((unsigned int)va_arg(*ap, int));
}

void		u_print(va_list *ap, f_s fs)
{
	uint64_t	nbr;
	int			len;

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
