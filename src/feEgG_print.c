#include "ft_printf.h"

long double	get_float_number(va_list *ap, t_s fs)
{
	if (fs.length == L_LENGTH)
		return ((long double)va_arg(*ap, long double));
	if (fs.length == l_LENGTH)
		return ((double)va_arg(*ap, double));
	else
		return ((float)va_arg(*ap, double));
}

int		f_print(va_list *ap, t_s fs)
{
	long double	f;
	int			len;

	f = get_float_number(ap, fs);
	len = fs.width - is_sign(f < 0, fs) - fs.prec - fs.dot - fs.hash;
	len -= ft_numlen((int64_t)f, 10) + (!fs.prec && !fs.dot ? 6 : 0);
	if (fs.dot && !fs.prec && ABS(f - (int64_t)f) > 0.5)
		f += f < 0 ? -1 : 1;
	if (fs.zero)
	{
		ft_putnbr_width((int64_t)f, len + ft_numlen((int64_t)f, 10), fs);
		ft_put_float(f, fs);
	}
	else
	{
		!fs.minus ? ft_make_width(len, ' ') : 0;
		ft_putnbr_width((int64_t)f, 0, fs);
		ft_put_float(f, fs);
		fs.minus ? ft_make_width(len, ' ') : 0;
	}
	return (len + fs.prec + fs.dot);
}

static long double handled_number(long double f, int *e_num)
{
	if (*e_num < -4)
	{
		if (ABS((int64_t)f) == 0)
		{
			*e_num = 0;
			while(ABS(f) > 0.0 && ABS(f) < 1.0)
			{
				f *= 10.0;
				*e_num -= 1;
			}
		}
		else if (ABS((int64_t)f) > 10)
		{
			*e_num = ft_numlen((int64_t)f, 10) - 1;
			while(ABS(f) > 10.0)
				f /= 10.0;
		}
		else
			*e_num = 0;
	}
	else
		*e_num = -42424242;
	return (f);
}


int		ee_print(va_list *ap, t_s fs)
{
	long double	f;
	int			len;
	int			e_num;

	e_num = -4242;
	f = handled_number(get_float_number(ap, fs), &e_num);
	len = fs.width - is_sign(f < 0, fs) - fs.prec - fs.dot - fs.hash;
	len -= (ft_numlen((int64_t)f, 10) + 4);
	len -= ((!fs.prec && !fs.dot ? 6 : 0) + (e_num < 0 ? 1 : 0));
	if (fs.dot && !fs.prec && ABS(f - (int64_t)f) > 0.5)
		f += f < 0 ? -1 : 1;
	if (fs.zero)
	{
		ft_putnbr_width((int64_t)f, len + ft_numlen((int64_t)f, 10), fs);
		ft_put_float(f, fs);
		ft_put_expo(e_num, fs);
	}
	else
	{
		!fs.minus ? ft_make_width(len, ' ') : 0;
		ft_putnbr_width((int64_t)f, 0, fs);
		ft_put_float(f, fs);
		ft_put_expo(e_num, fs);
		fs.minus ? ft_make_width(len, ' ') : 0;
	}
	return (len + fs.prec + fs.dot);
}

int		g_print(va_list *ap, t_s fs)
{
	long double	f;
	int			len;
	int			e_num;

	f = get_float_number(ap, fs);
	e_num = get_enum(f);
	len = fs.width - is_sign(f < 0, fs) - fs.prec - fs.dot - fs.hash;
	len -= ft_numlen((int64_t)f, 10) + (!fs.prec && !fs.dot ? 6 : 0);
	f = handled_number(f, &e_num);
	len -= e_num != -42424242 ? ((e_num < 0 ? 1 : 0) + 4) : 0;
	if (fs.dot && !fs.prec && ABS(f - (int64_t)f) > 0.5)
		f += f < 0 ? -1 : 1;
	if (fs.zero)
	{
		ft_putnbr_width((int64_t)f, len + ft_numlen((int64_t)f, 10), fs);
		ft_put_float(f, fs);
		ft_put_expo(e_num, fs);
	}
	else
	{
		!fs.minus ? ft_make_width(len, ' ') : 0;
		ft_putnbr_width((int64_t)f, 0, fs);
		ft_put_float(f, fs);
		ft_put_expo(e_num, fs);
		fs.minus ? ft_make_width(len, ' ') : 0;
	}
	return (len + fs.prec + fs.dot);
}
