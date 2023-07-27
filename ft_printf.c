/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:38:25 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/26 18:01:15 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putc(char c)
{
	write(1, &c, 1);
	return (1);
}

int	type(char c, va_list lst)
{
	int	l;

	l = 0;
	if (c == 'c') 
		l += ft_putc(va_arg(lst, int));
	else if (c == 's') 
		l += ft_puts(va_arg(lst, char *)); 
	else if (c == 'p')
		l += ft_putp(va_arg(lst, void *));
	else if (c == 'd') 
		l += ft_putn(va_arg(lst, int));
		// byte sfırsa akifi sil
  //it looks at the int(four bytes) in   that stack after *str
	else if (c == 'i') 
		l += ft_putn(va_arg(lst, int));
	else if (c == 'u') 
		l += ft_putu(va_arg(lst, unsigned int)); 
	else if (c == 'x')
		l += ft_puth(va_arg(lst, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		l += ft_puth(va_arg(lst, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		l += ft_putc('%');
	else if	(c == '#')
		l += ft_puthash(
	return (l);
}
int	ft_printf(const char *str, ...)
{
	va_list	lst;//argümanları saklıyor
	int		l;
	int		i;

	l = 0;
	i = 0;
	va_start(lst, str);//iterated over
	while (str[i])
	{
		if (str[i] == '%')
		{
			l += type(str[i + 1], lst);
			i += 2;
		}
		else
		{
			l += ft_putc(str[i]);
			i++;
		}
	}
	va_end(lst);
	return (l);
}
