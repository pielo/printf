/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanglet <mlanglet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 03:03:49 by mlanglet          #+#    #+#             */
/*   Updated: 2013/12/19 20:26:08 by mlanglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libftprintf.h"
#include <stdio.h>

int		ft_printf(const char *fmt, ...)
{
	va_list		ap;
	int			truc;
	char		*nbr;
	size_t		i;
	size_t		size;
	char		*nb;
/*	int			z;*/

	i = 0;
	size = 0;
	nb = ft_strnew(13);
	if (fmt != NULL)
	{
		va_start(ap, fmt);
		while (fmt[i] != '\0')
		{
			if (fmt[i] == '%')
			{
				i++;
				if (fmt[i] == '%')
				{
					ft_putchar('%');
					size++;
				}
/*				if (fmt[i] >= '0' && fmt[i] <= '9')
				{
					z = 0;
					while (fmt[i] != 'd')
					{
						nb[z] = fmt[i];
						z++;
						i++;
					}
				}*/
				if (fmt[i] == 'd')
				{
					size++;
					truc = va_arg(ap, int);
					ft_putnbr(truc);
					if (truc < -1)
						truc = -1 * (truc + 1);
					while (truc > 0)
					{
						truc = truc / 10;
						size++;
					}
				}
				if (fmt[i] == 'c')
				{
					ft_putchar((char)va_arg(ap, int));
					size++;
				}
				if (fmt[i] == 's')
				{
					write(1, (nbr = va_arg(ap, char *)), sizeof(nbr));
					size += ft_strlen(nbr);
				}
			}
			else
			{
				write(1, &fmt[i], 1);
				size++;
			}
			i++;
		}
		va_end(ap);
	}
	return (size);
}
