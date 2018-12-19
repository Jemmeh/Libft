/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 23:01:34 by jcope             #+#    #+#             */
/*   Updated: 2018/10/22 23:02:53 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char			*ft_itoa(int n)
{
	long	num;
	char	*new;
	int		len;

	num = (long)n;
	len = ft_numlen(num);
	if (!(new = ft_strnew(len)))
		return (NULL);
	if (num < 0){
		new[0] = '-';
		num = -num;
	}
	while (len >= 0)
	{
		new[len] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (new);
}
