/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:15:37 by joslopez          #+#    #+#             */
/*   Updated: 2022/05/16 11:25:34 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_putstr(char *str, int *i2)
{
	int		i;

	if (!str)
	{
		ft_putstr("(null)", i2);
		return ;
	}
	i = 0;
	while (str[i])
	{
		write(1, &(str[i]), 1);
		i++;
	}
	*i2 += i;
}
