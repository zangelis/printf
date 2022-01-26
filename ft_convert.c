/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zangelis <zangelis@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:52:13 by zangelis          #+#    #+#             */
/*   Updated: 2022/01/12 17:24:17 by zangelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_str(char *str)
{
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	else
	{
		ft_putstr(str);
		return (ft_strlen(str));
	}
}

int	ft_convert_nbr(va_list *args)
{
	char	*str;
	int		count;

	str = ft_itoa((int) va_arg(*args, int));
	ft_putstr(str);
	count = ft_strlen(str);
	free (str);
	return (count);
}
