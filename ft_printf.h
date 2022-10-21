/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:01:07 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/21 19:47:58 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
size_t	ft_printchar(char c);
size_t	ft_printstr(char *str);
size_t	ft_printnbr(long int nb);
void	ft_printhex(unsigned int nbr, char *base, size_t *len);
size_t	ft_nbrlen(long int nb);
size_t	ft_printptr(unsigned long int nb);
size_t	ft_strlen(char *str);
#endif
