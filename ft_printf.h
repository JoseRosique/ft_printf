/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:16:36 by joslopez          #+#    #+#             */
/*   Updated: 2022/05/16 11:25:28 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

void	ft_putchar(char c, int *i);
void	ft_putint(int nb, int *i2);
void	ft_putnbr_base(unsigned int n, char *base, int *i);
void	ft_putstr(char *str, int *i2);
void	ft_putui(unsigned int nb, int *i);
void	ft_puthex(unsigned long long nb, int *i);
int		ft_printf(const char *str, ...);

#endif
