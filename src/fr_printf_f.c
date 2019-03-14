#include "ft_printf.h"

// void	ft_putfloat(float )


void	ft_f_print(va_list *ap, f_s fs_l)
{
	double	f;
	int		d;
	int		len;

	f = va_arg(*ap, double);
	d = (int)f;
	len = fs_l.width - fs_l.plus - fs_l.space - fs_l.precision - fs_l.dot;
	len -= ft_number_length(d < 0 ? d * -1 : d, 10);
	if (fs_l.space)
		ft_putchar(d < 0 ? 0 : ' ');
	if (fs_l.minus)
	{
		ft_putchar((fs_l.plus && d > 0) ? '+' : 0);
		ft_putnbr(d);
		ft_putchar(fs_l.dot ? '.' : 0);
		while(fs_l.precision > 0 && fs_l.precision-- != 0)
			ft_putnbr((int)(f = 10 * f - (int)f * 10));
		ft_make_width(len, fs_l.zero ? '0' : ' ');
	}
	else
	{
		ft_putchar((fs_l.zero && fs_l.plus && d > 0) ? '+' : 0);
		ft_make_width(len, fs_l.zero ? '0' : ' ');
		ft_putchar((!fs_l.zero && fs_l.plus && d > 0) ? '+' : 0);
		ft_putnbr(d);
		ft_putchar(fs_l.dot ? '.' : 0);
		while(fs_l.precision > 0 && fs_l.precision-- != 0)
			ft_putnbr((int)(f = 10 * f - (int)f * 10));
	}
	
	
}