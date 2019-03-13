#include "fillit.h"

char	*bw_shift_right(char *b1, size_t amount)
{
	size_t	i;
	size_t	len;
	char 	*res;
	
	i = 0;
	if(!b1)
		return (NULL);
	len = ft_strlen(b1);
	res = ft_memalloc(len + 1);
	while(i < amount)
		res[i++] = '0';
	while (i < len)
	{
		res[i] = b1[i - amount];
		i++;
	}
	return (res);
}