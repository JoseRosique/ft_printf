/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:13:41 by joslopez          #+#    #+#             */
/*   Updated: 2022/05/16 11:25:27 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	ft_print_all(const char *str, int *i, va_list args, int j)
{
	if (str[j + 1] == '%')
		ft_putchar('%', i);
	else if (str[j + 1] == 'c')
		ft_putchar(va_arg(args, int), i);
	else if (str[j + 1] == 's')
		ft_putstr(va_arg(args, char *), i);
	else if (str[j + 1] == 'p')
	{
		ft_putstr("0x", i);
		ft_puthex(va_arg(args, unsigned long long), i);
	}
	else if (str[j + 1] == 'd' || str[j + 1] == 'i')
		ft_putint(va_arg(args, int), i);
	else if (str[j + 1] == 'u')
		ft_putui(va_arg(args, unsigned int), i);
	else if (str[j + 1] == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", i);
	else if (str[j + 1] == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, str);
	while (str[j])
	{
		if (str[j] == '%')
		{
			ft_print_all(str, &i, args, j);
			j++;
		}
		else
			ft_putchar(str[j], &i);
		j++;
	}
	va_end(args);
	return (i);
}
