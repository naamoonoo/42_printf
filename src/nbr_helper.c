#include "ft_printf.h"

void	ft_make_width(int len, char c)
{
	while (len > 0 && len-- != 0)
		ft_putchar(c);
}

int		is_signed(int is_minus, f_s fs)
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

void	ft_putnbr_width(int64_t n, int len, f_s fs)
{
	int amount;
	
	sign_handler(n < 0, fs);
	n *= n < 0 ? -1 : 1;
	amount = len - ft_numlen(n, 10);
	len != 0 ? ft_make_width(amount, '0') : 0;
	ft_putnbr(n);
}

void	ft_put_decimal(long double n, f_s fs)
{
	unsigned long long t;

	n *= n < 0 ? -1 : 1;
	
	if ((fs.dot && fs.prec) || (!fs.dot && !fs.prec))
		ft_putchar('.');
	fs.prec += !fs.prec && !fs.dot ? 6 : 0;
	while(fs.prec-- > 0)
	{
		n = 10 * n;
		if (fs.prec == 0)
			n += (long)(n * 10) % 10 < 5 ? 0 : 1; 
		t = (unsigned long long)n;
		n -= t;
		t %= 10;
		ft_putchar(t + '0');
	}
}

			// num *= 10;
			// whole = (unsigned long long)num;
			// num -= whole;
			// whole %= 10;
			// ft_putchar(whole + '0');

// int	decimal_len(long double n)
// {
// 	int count;
	
// 	count = 0;
// 	printf("%Lf\n", n);
// 	while ((n = n * 10 - (long)(n * 10)) != 0.0)
// 		count++;
// 	printf("%d\n", count);
// 	return count;
// }



// 	// sign_handler(n < 0, fs);
// 	// n *= n < 0 ? -1 : 1;
// 	// ft_make_width(len, '0');
// 	// if (fs.dot && !fs.prec)
// 	// 	n += (long)(n * 10) % 10 < 5 ? 0 : 1;
// 	// ft_putnbr(n);
// 	// n -= (long)n;
// 	// ft_putchar(fs.prec ? '.' : 0);
// 	// while(fs.prec-- != 0)
// 	// {
// 	// 	n = 10 * n - (long)n * 10;
// 	// 	if (fs.prec == 0)
// 	// 		n += (long)(n * 10) % 10 < 5 ? 0 : 1; 
// 	// 	ft_putnbr((long)n);
// 		// ft_putnbr((long)(n = 10 * n - (long)n * 10));
// 	// }
	
// 	// n += (n * 100) % 10 > 4 ? 1 : 0;
// 	// ft_putnbr(n);

// // void	ft_putfloat(long double n)
// // {
// // 	// if (n == LDBL_MIN)
// // 		// ft_putstr(LDBL_MIN);//how to handle?

// // 	if (n < 0)
// // 	{
// // 		ft_putchar('-');
// // 		n *= -1;
// // 	}
// // 	if (n < 1)
// // 	{

// // 	}
// // 	else if (n >= 10)
// // 		ft_putnbr(n / 10);
// // 	ft_putchar((n % 10) + '0');

// // }

// // // 133.71251