/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-do <lucas-do@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:01:55 by lucas-do          #+#    #+#             */
/*   Updated: 2024/10/21 11:06:00 by lucas-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
}
*/