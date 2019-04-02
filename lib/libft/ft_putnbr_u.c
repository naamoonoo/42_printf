
#include "libft.h"

void	ft_putnbr_u(uint64_t n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_u(n / 10);
	ft_putchar((n % 10) + '0');
}
