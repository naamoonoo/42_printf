#include "ft_printf.h"

void	f_print(va_list *ap, f_s fs)
{
	double	f;
	int		d;
	int		len;

	f = va_arg(*ap, double);
	d = (int)f;
	len = fs.width - fs.plus - fs.space - fs.precision - fs.dot;
	len -= ft_number_length(d < 0 ? d * -1 : d, 10);
	if (fs.space)
		ft_putchar(d < 0 ? 0 : ' ');
	if (fs.minus)
	{
		ft_putchar((fs.plus && d > 0) ? '+' : 0);
		ft_putnbr(d);
		ft_putchar(fs.dot ? '.' : 0);
		while(fs.precision > 0 && fs.precision-- != 0)
			ft_putnbr((int)(f = 10 * f - (int)f * 10));
		ft_make_width(len, fs.zero ? '0' : ' ');
	}
	else
	{
		ft_putchar((fs.zero && fs.plus && d > 0) ? '+' : 0);
		ft_make_width(len, fs.zero ? '0' : ' ');
		ft_putchar((!fs.zero && fs.plus && d > 0) ? '+' : 0);
		ft_putnbr(d);
		ft_putchar(fs.dot ? '.' : 0);
		while(fs.precision > 0 && fs.precision-- != 0)
			ft_putnbr((int)(f = 10 * f - (int)f * 10));
	}
	
	
}