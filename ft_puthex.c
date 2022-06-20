/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:16:05 by joslopez          #+#    #+#             */
/*   Updated: 2022/05/16 11:25:30 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long nb, int *i)
{
	if (nb >= 16)
	{
		ft_puthex(nb / 16, i);
	}
	ft_putchar("0123456789abcdef"[nb % 16], i);
}
