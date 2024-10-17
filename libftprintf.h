
#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int             ft_printf(const char *c, ...);
void	ft_putchar(char c);
void	ft_putnbr(int n);
#endif