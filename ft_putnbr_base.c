/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:15:50 by joslopez          #+#    #+#             */
/*   Updated: 2022/05/16 11:26:47 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putchar(char c, int *i);

int	check_base(char *base)
{
	int	no_error;
	int	cont;
	int	cont2;

	cont = 0;
	no_error = 1;
	while (base[cont] != '\0' && no_error)
	{
		cont2 = cont + 1;
		if (base[cont] == '+' || base[cont] == '-')
			no_error = 0;
		while (base[cont2] != '\0' && no_error)
		{
			if (base[cont] == base[cont2])
				no_error = 0;
			cont2++;
		}
		cont++;
	}
	if (cont < 2)
		no_error = 0;
	return (no_error);
}

int	n_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	print_number(unsigned int nbr, char *base, int num_base, int *i)
{
	char	imp;

	if (nbr / num_base != 0)
		print_number(nbr / num_base, base, num_base, i);
	imp = base[nbr % num_base];
	ft_putchar(imp, i);
}

void	ft_putnbr_base(unsigned int n, char *base, int *i)
{
	int		no_error;
	int		num_base;

	no_error = check_base(base);
	if (no_error)
	{
		num_base = n_base(base);
		print_number(n, base, num_base, i);
	}
}
