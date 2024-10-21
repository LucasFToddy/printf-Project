/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-do <lucas-do@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:11:51 by lucas-do          #+#    #+#             */
/*   Updated: 2024/10/21 11:19:12 by lucas-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen(int nb)
{
	int	slots;

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
		nb /= 10;
	}
	return (slots);
}
