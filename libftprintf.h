/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-do <lucas-do@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:27:00 by lucas-do          #+#    #+#             */
/*   Updated: 2024/10/23 19:28:42 by lucas-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *c, ...);
int	ft_putstr(char *s);
int	ft_putnbr_base(unsigned int n, unsigned int base, char *digit);
int	ft_putnbr_ptr(void *n);
int	ft_putchar(char c);
int	ft_putnbr(int n);
#endif
