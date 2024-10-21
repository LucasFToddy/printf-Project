/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-do <lucas-do@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:59:45 by lucas-do          #+#    #+#             */
/*   Updated: 2024/10/21 15:50:55 by lucas-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	itoalen(long int nb)
{
	long int	slots;

	slots = 0;
	if (nb < 0 || nb == 0)
	{
		if (nb == -2147483648)
			nb--;
		nb *= -1;
		slots++;
	}
	while (nb > 0)
	{
		slots++;
		nb = nb / 10;
	}
	return (slots);
}

static void	ft_putnbr_base(int n, int base, char *digit_number)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(n *= -1, base, digit_number);
	}
	else if (n > base - 1)
	{
		ft_putnbr_base(n / base, base, digit_number);
		ft_putnbr_base(n % base, base, digit_number);
	}
	else
		ft_putchar(digit_number[n]);
}

int	ft_putnbr_base_len(int n, int base, char *digit_number)
{
	int	i;

	i = itoalen(n);
	ft_putnbr_base(n, base, digit_number);

	return (i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_putnbr_base_len(1000, 10, "0123456789"));
// }
