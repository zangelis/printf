/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zangelis <zangelis@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:54:09 by zangelis          #+#    #+#             */
/*   Updated: 2022/01/21 11:48:18 by zangelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

// ft_convert.c
int		ft_convert_str(char *str);
int		ft_convert_nbr(va_list *args);

// ft_dec_to_hex.c
int		ft_dec_to_hex(const char *c, long long unsigned nbr);
int		ft_case_converter(const char *c, int nbr);

// ft_helper.c
void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *str);
char	*ft_itoa(int n);

// ft_printf.c
int		ft_printf(const char *str, ...);

// ft_put_unsigned_nbr.c
int		ft_put_unsigned_nbr(unsigned int nbr);

#endif
