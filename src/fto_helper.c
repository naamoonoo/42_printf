#include "ft_printf.h"

char	*normalized_float_number(float n)
{
	char	*res;
	char	*temp;
	int		i;
	float	dv;

	i = 0;
	dv = 1.0 / 2.0;
	res = ft_strnew(32); // set to null and need to free!
	res[i++] = n < 0 ? '1' : '0';
	n = ABS(n);
	temp = ft_itoa_base_u((uint64_t)n, 2, 0);
	ft_strcat(res, temp);
	i += ft_strlen(temp);
	ft_strdel(&temp);
	res[i++] = '.';
	n -= (uint64_t)n;
	while (i <= 32 && n > 0)
	{
		res[i++] = (n >= dv ? '1' : '0');
		n -= (n >= dv ? dv : 0);
		dv /= 2.0;
	}
	return (res);
}

char	*ftob(float n)
{
	char	*res;
	char	*nf;
	char	*temp;
	int		exponent;
	int		idx;

	nf = normalized_float_number(n); // need to be freed;
	res = ft_strnew(32);
	res[0] = nf[0];
	exponent = ft_strchr_idx(nf, '.') - 2;
	temp = ft_itoa_base_u(exponent + BIAS, 2, 0);
	ft_strcat(res, temp);
	ft_strdel(&temp);
	ft_strcat(res, nf + 2);
	ft_strdel(&nf);
	idx = ft_strchr_idx(res, '.');
	ft_memmove(res + idx, res + idx + 1, ft_strlen(res) - idx);
	idx = ft_strlen(res);
	while (idx < 32)
		res[idx++] = '0';
	return (res);
}

char	*btox(char *b)
{
	char	*res;
	char	*t1;
	char	*t2;
	int		i;

	res = ft_strnew(ft_strlen(b) / 4);
	i = 0;
	while (i < (int)ft_strlen(b) / 4)
	{
		t1 = ft_strsub(b, 4 * i, 4);
		t2 = ft_itoa_base(ft_atoi_base(t1, BINARY), HEXA, 0);
		res[i++] = t2[0];
		ft_strdel(&t1);
		ft_strdel(&t2);
	}
	return (res);
}
