/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:23:23 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/21 19:22:55 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printnbr(long int nb)
{
	size_t		len;

	if (nb < 0)
	{
		ft_printchar('-');
		ft_printnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_printnbr(nb / 10);
		ft_printnbr(nb % 10);
	}
	else
		ft_printchar(nb + 48);
	len = ft_nbrlen(nb);
	return (len);
}
