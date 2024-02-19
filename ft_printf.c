/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:47:11 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/02/17 17:31:09 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	specifier(char format)
{
	if (format != 'c' && format != 's' && format != 'p' && format != 'd'
		&& format != 'i' && format != 'u' && format != 'x' && format != 'X')
		return (0);
	else
		return (1);
}

int	printype(char format, va_list arg)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (format == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (format == 'u')
		count += ft_putuns(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		count += ft_puthexa(va_arg(arg, unsigned int), format);
	else if (format == 'p')
		count += ft_putadress(va_arg(arg, unsigned long));
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	arg;

	i = 0;
	count = 0;
	va_start(arg, s);
	while (s[i] != '\0')
	{
		if (s[i] != '%' && s[i] != '\0')
			count += write(1, &s[i], 1);
		else if (s[i] == '%')
		{
			if (specifier(s[i + 1]) == 1)
				count += printype(s[++i], arg);
			else if (s[i + 1] == '%')
				count += write(1, &s[++i], 1);
		}
		i++;
	}
	va_end(arg);
	return (count);
}
