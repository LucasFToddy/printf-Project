/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-do <lucas-do@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:44:52 by lucas-do          #+#    #+#             */
/*   Updated: 2024/10/17 19:43:55 by lucas-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *s, ...)
{
	va_list	lista;
	size_t	i;

	va_start(lista, s);
	i = 0;
	while (s[i])
	{
		if ((s[i] == 'd' || s[i] == 'i') && s[i + 1] == '%')
		{
			ft_putnbr(va_arg(lista, int));
			i = i + 2;
		}
		if (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
	}
	return (1);
}

int	main(void)
{
	int	d;

	d = 10;
	ft_printf("sera que vai d%", d);
}
