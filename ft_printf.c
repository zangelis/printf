/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zangelis <zangelis@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:39:59 by zangelis          #+#    #+#             */
/*   Updated: 2022/01/12 17:24:20 by zangelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checktype(const char *c, va_list *args)
{
	if (*c == 'c')
	{
		ft_putchar(va_arg(*args, int));
		return (1);
	}
	else if (*c == 's')
		return (ft_convert_str(va_arg(*args, char *)));
	else if (*c == 'p')
		return (ft_dec_to_hex(c, va_arg(*args, long long unsigned)));
	else if (*c == 'd' || *c == 'i')
		return (ft_convert_nbr(args));
	else if (*c == 'u')
		return (ft_put_unsigned_nbr(va_arg(*args, unsigned int)));
	else if (*c == 'x' || *c == 'X')
		return (ft_dec_to_hex(c, va_arg(*args, unsigned int)));
	else if (*c == '%')
	{
		ft_putchar('%');
		return (1);
	}
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		nbr;
	int		i;
	int		temp;

	nbr = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			temp = ft_checktype(&str[i + 1], &args);
			if (temp != 0)
				nbr += temp;
			i++;
		}
		else
			nbr += (ft_putchar(str[i]), 1);
		i++;
	}
	va_end(args);
	return (nbr);
}
