/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 19:42:19 by hnam              #+#    #+#             */
/*   Updated: 2019/02/15 19:42:19 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		len;
	int		i;
	char	*res;

	i = 0;
	if (s == NULL)
		return (NULL);
	start = ft_start_idx(s);
	len = ft_strlen(s);
	if (start == len)
		len = 0;
	while (len > 0 && ft_is_space(s[len - 1]))
		len--;
	len = len == 0 ? len : len - start;
	res = ft_memalloc(len + 1);
	while (start < len)
		res[i++] = s[start++];
	return (res);
}
