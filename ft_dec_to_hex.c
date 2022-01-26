/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zangelis <zangelis@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:00:27 by zangelis          #+#    #+#             */
/*   Updated: 2022/01/12 17:24:16 by zangelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dec_to_hex(const char *c, long long unsigned nbr)
{
	int		i;
	int		count;
	char	str[20];

	i = 0;
	count = 0;
	if (*c == 'p')
		count += (ft_putstr("0x"), 2);
	if (nbr == 0)
		return (ft_putchar('0'), count + 1);
	while (nbr > 0)
	{
		str[i++] = ft_case_converter(c, nbr % 16);
		nbr = nbr / 16;
	}
	i--;
	while (i >= 0)
		count += (ft_putchar(str[i--]), 1);
	return (count);
}

int	ft_case_converter(const char *c, int nbr)
{
	if (10 <= nbr && nbr <= 15 && *c == 'X')
		return (nbr - 10 + 'A');
	else if (10 <= nbr && nbr <= 15)
		return (nbr - 10 + 'a');
	else
		return (nbr + '0');
}
