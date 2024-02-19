/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:47:37 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/02/08 19:47:13 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char specifier)
{
	int		count;
	char	*base;

	count = 0;
	if (specifier == 'X')
		base = "0123456789ABCDEF";
	else if (specifier == 'x')
		base = "0123456789abcdef";
	if (n >= 0 && n <= 15)
		count += ft_putchar(base[n]);
	else
	{
		count += ft_puthexa((n / 16), specifier);
		count += ft_putchar(base[n % 16]);
	}
	return (count);
}
