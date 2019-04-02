
#include "libft.h"

uint64_t	ft_pow_u(uint64_t base, int times)
{
	if (times == 0)
		return (1);
	else if (times == 1)
		return (base);
	else
		return (ft_pow_u(base, times - 1) * base);
}
