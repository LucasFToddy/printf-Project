/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-do <lucas-do@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:44:52 by lucas-do          #+#    #+#             */
/*   Updated: 2024/10/21 17:15:56 by lucas-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	int	ft_check_arg(const char *str, va_list list)
{
	int	len;

	len = 0;
	str++;
	if (*str == 'c')
		len += ft_putchar((char)va_arg(list, int));
	else if (*str == 's')
		len += ft_putstr(va_arg(list, char *));
	else if (*str == 'p')
		len += ft_putnbr_ptr(va_arg(list, void *));
	else if (*str == 'd' || *str == 'i')
		len += ft_putnbr_base_len(va_arg(list, int), 10, "0123456789");
	else if (*str == 'u')
		len += ft_putnbr_base_len(va_arg(list, unsigned int), 10, "0123456789");
	else if (*str == 'x')
		len += ft_putnbr_base_len(va_arg(list, unsigned int), 16, "0123456789abcdef");
	else if (*str == 'X')
		len += ft_putnbr_base_len(va_arg(list, unsigned int), 16, "0123456789ABCDEF");
	else if (*str == '%')
	{
		ft_putchar('%');
		len++;
	}
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int	r;

	va_start(list, s);
	r = 0;
	while (s++)
	{
		if (*s == '%')
			r += ft_check_arg(s, list);
	}
	va_end(list);
	return (r);
}
#include <stdio.h>
int	main(void)
{
	int	d;

	d = 2;
	ft_printf("sera que vai %d\n", d);
	printf("%d\n", d);
}
