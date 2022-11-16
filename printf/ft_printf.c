/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:52:18 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/16 23:43:16 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	chrch(char s)
{
	if (s == 'c' || s == 's' || s == 'p' || s == 'd' || s == 'i' || s == 'u')
		return (1);
	if (s == 'x' || s == 'X' || s == '%')
		return (1);
	return (0);
}

int	formatype(char s, void *p, int	*len)
{
	if (s == 'c')
	{
		*len += ft_putchar((char)p);
	}
	else if (s == 's')
		*len += ft_putstr((char *)p);
	else if (s == 'd' || s == 'i')
		*len = ft_putnbr((int) p,*len);
	else if (s == 'u')
	*len = ft_unsignedputnbr((unsigned) p, *len);
	else if (s == 'x')
		*len = hexa((unsigned int) p,*len);
	else if (s == 'X')
		*len = hexaup((unsigned int) p,*len);
	else if (s == 'p')
	{
		*len += ft_putstr("0x");
		*len = hexap((unsigned long long)p, *len);
	}
	return (*len);
}

int	ft_printf(const char *s, ...)
{
	int		len;
	char	*ptr;
	va_list	p;
	int		i;

	ptr = (char *) s;
	len = 0;
	va_start (p, s);
	i = 0;
	while (ptr[i])
	{
		if (s[i] == '%' && chrch(s[i + 1]))
		{
			i++;
			if (s[i] == '%')
				len += ft_putchar(ptr[i]);
			else
			len = formatype(ptr[i], va_arg(p, void *), &len);
		}
		else if (s[i] != '%')
			len += ft_putchar(ptr[i]);
		i++;
	}
	va_end(p);
	return (len);
}
