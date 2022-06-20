/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:15:57 by joslopez          #+#    #+#             */
/*   Updated: 2022/05/16 11:25:32 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putint(int nb, int *i)
{
	long long	nbr;

	nbr = (long long)nb;
	if (nbr < 0)
	{
		ft_putchar('-', i);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putint(nbr / 10, i);
		nbr %= 10;
	}
	ft_putchar(nbr + '0', i);
}
