/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-do <lucas-do@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:11:17 by lucas-do          #+#    #+#             */
/*   Updated: 2024/10/21 16:37:55 by lucas-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_ptr(void *n)
{
	int	i;

	i = 0;
	ft_putchar('0');
	ft_putchar('x');
	i = ft_putnbr_base_len((unsigned long)n, 16, "0123456789abcde");
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 50;

	int	*b = &a;

	printf("%p\n", &b);
	ft_putnbr_ptr((unsigned long)&b);
	ft_putchar('\n');
}
*/
