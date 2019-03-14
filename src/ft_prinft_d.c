#include "ft_printf.h"

void	ft_d_print(va_list *ap, f_s fs_l)
{
	int d;
	int len;

	d = va_arg(*ap, int);
	len = fs_l.width - fs_l.plus - fs_l.space ;
	len -= ft_number_length(d < 0 ? d * -1 : d, 10);
	if (fs_l.minus)
	{
		
		ft_putchar((fs_l.plus && d > 0) ? '+' : 0);
		ft_putnbr(d);
		ft_make_width(len, fs_l.zero ? '0' : ' ');
	}
	else
	{
		ft_putchar((fs_l.zero && fs_l.plus && d > 0) ? '+' : 0);
		ft_make_width(len, fs_l.zero ? '0' : ' ');
		ft_putchar((!fs_l.zero && fs_l.plus && d > 0) ? '+' : 0);
		ft_putnbr(d);
	}	
}