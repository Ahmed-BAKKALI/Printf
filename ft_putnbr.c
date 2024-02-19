/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:52:23 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/02/08 19:48:39 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		count += write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			count += write(1, "-", 1);
			n *= -1;
		}
		if (n >= 0 && n <= 9)
			count += ft_putchar(n + '0');
		else
		{
			count += ft_putnbr(n / 10);
			count += ft_putchar((n % 10) + '0');
		}
	}
	return (count);
}
