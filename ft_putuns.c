/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:18:11 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/02/09 17:59:33 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 0 && n <= 9)
		count += ft_putchar(n + '0');
	else
	{
		count += ft_putuns(n / 10);
		count += ft_putchar((n % 10) + '0');
	}
	return (count);
}
