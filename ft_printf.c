/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:41:40 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 23:34:19 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check_type(va_list *ap, char type, size_t *len)
{
	if (type == 'c')
		*len += ft_printchar(va_arg(*ap, int));
	if (type == 's')
		*len += ft_printstr(va_arg(*ap, char *));
	if (type == 'p')
		*len += ft_printptr(va_arg(*ap, unsigned long int));
	if (type == 'd' || type == 'i')
		*len += ft_printnbr(va_arg(*ap, int));
	if (type == 'u')
		*len += ft_printnbr(va_arg(*ap, unsigned int));
	if (type == 'x')
		ft_printhex(va_arg(*ap, unsigned int), "0123456789abcdef", len);
	if (type == 'X')
		ft_printhex(va_arg(*ap, unsigned int), "0123456789ABCDEF", len);
	if (type == '%')
		*len += ft_printchar('%');
}

int	ft_printf(const char *str, ...)
{
	size_t		len;
	int			i;
	va_list		ap;

	len = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_check_type(&ap, str[i + 1], &len);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
