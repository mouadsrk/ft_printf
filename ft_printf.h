/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:52:28 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/17 17:38:30 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<stdio.h>
# include<unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n, int len);
int	ft_putstr(char *s);
int	ft_unsignedputnbr(unsigned int nb, int len);
int	hexa(unsigned int i, int len);
int	hexaup(unsigned int i, int len);
int	hexap(unsigned long long n, int len);

#endif