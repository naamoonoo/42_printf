#include "ft_printf.h"

long double	get_float_number(va_list *ap, f_s fs)
{
	if (fs.length == L_LENGTH)
		return ((long double)va_arg(*ap, long double));
	if (fs.length == l_LENGTH)
		return ((double)va_arg(*ap, double));
	else
		return ((float)va_arg(*ap, double));
}

void	f_print(va_list *ap, f_s fs)
{
	float	f;
	int		len;

	f = get_float_number(ap, fs);
	len = fs.width - is_signed(f < 0, fs) - fs.prec - fs.dot;
	len -= ft_numlen((long)f, 10) + (!fs.prec && !fs.dot ? 6 : 0);
	if (!fs.prec && ABS(f - (int64_t)f)> 0.5)
		f += f < 0 ? -1 : 1;
	if (fs.zero)
	{
		ft_putnbr_width((long)f, len + ft_numlen((long)f, 10), fs);
		ft_put_decimal(f, fs);
	}
	else
	{
		!fs.minus ? ft_make_width(len, ' ') : 0;
		ft_putnbr_width((long)f, 0, fs);
		ft_put_decimal(f, fs);
		fs.minus ? ft_make_width(len, ' ') : 0;
	}

}