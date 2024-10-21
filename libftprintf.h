
#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int             ft_printf(const char *c, ...);
int             ft_intlen(int nb);
int             ft_putstr(char *s);
int             ft_putnbr_base_len(int n, int base, char *digit_number);
int	        ft_putnbr_ptr(void *n);
int	ft_putchar(char c);
void	ft_putnbr(int n);
#endif