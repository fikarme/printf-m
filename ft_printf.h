/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:38:30 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/26 12:40:02 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h> //sil

int		ft_printf(const char *str, ...);
int		ft_putc(char c);
int		ft_puts(char *s);
int		ft_putp(void *p);
int		ft_putn(int n);
int		ft_putu(unsigned int u);
int		ft_puth(unsigned long h, char *p);

#endif  