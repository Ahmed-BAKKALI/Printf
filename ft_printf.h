/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbakkal <ahbakkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:46:32 by ahbakkal          #+#    #+#             */
/*   Updated: 2024/02/09 17:33:21 by ahbakkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_putuns(unsigned int n);
int	ft_puthexa(unsigned int n, char specifier);
int	ft_putadress(unsigned long int n);

#endif