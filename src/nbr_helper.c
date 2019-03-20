#include "ft_printf.h"

int		is_sign(int is_minus, f_s fs)
{
	return (is_minus || fs.plus || fs.space);
}

void	sign_handler(int is_minus, f_s fs)
{
	if (is_minus)
		return (ft_putchar('-'));
	else if (fs.plus)
		return (ft_putchar('+'));
	else if (!fs.plus && fs.space)
		return (ft_putchar(' '));
}

void	ft_putnbr_width(int64_t n, int minimum_len, f_s fs)
{
	int amount;
	
	sign_handler(n < 0, fs);
	n *= n < 0 ? -1 : 1;
	amount = minimum_len - ft_numlen(n, 10);
	minimum_len != 0 ? ft_make_width(amount, '0') : 0;
	ft_putnbr(n);
}

void	ft_put_float(long double n, f_s fs)
{
	unsigned long long t;

	n *= n < 0 ? -1 : 1;
	if ((fs.dot && fs.prec) || (!fs.dot && !fs.prec) || fs.hash)
		ft_putchar('.');
	fs.prec += !fs.prec && !fs.dot ? 6 : 0;
	while (fs.prec-- > 0)
	{
		n = 10 * n;
		if (fs.prec == 0)
			n += (long)(n * 10) % 10 < 5 ? 0 : 1; 
		t = (unsigned long long)n;
		n -= t;
		t %= 10;
		// if (fs.is_g && !fs.hash && (int)t == 0)
		// 	break ;
		// for g trancnate '0'!!!!
		ft_putchar(t + '0');
	}
}

void	ft_put_expo(int e_num, f_s fs)
{
	if (e_num == -42424242)
		return ;
	ft_putchar(fs.is_upper ? 'E' : 'e');
	fs.plus = 1;
	fs.space = 0;
	ft_putnbr_width(e_num, 2, fs);
}