/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:20:24 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/02/08 19:59:37 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadress(unsigned long int n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 0 && n <= 15)
	{
		count += ft_putstr("0x");
		count += ft_putchar(base[n]);
	}
	else
	{
		count += ft_putadress((n / 16));
		count += ft_putchar(base[n % 16]);
	}
	return (count);
}
