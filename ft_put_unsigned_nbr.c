/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zangelis <zangelis@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 09:48:38 by zangelis          #+#    #+#             */
/*   Updated: 2022/01/12 17:24:22 by zangelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_nbr(unsigned int nbr)
{
	char	str[10];
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (nbr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (nbr > 0)
	{
		str[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(str[i--]);
		count++;
	}
	return (count);
}
