/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <bkjornra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 17:06:56 by hnam              #+#    #+#             */
/*   Updated: 2019/03/20 00:16:03 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(uint64_t n, uint64_t base)
{
	if (n < base)
		return (1);
	else
		return (ft_numlen(n % base, base)
			+ ft_numlen(n / base, base));
}
