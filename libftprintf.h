/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanglet <mlanglet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 03:27:41 by mlanglet          #+#    #+#             */
/*   Updated: 2013/12/19 19:35:49 by mlanglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>

int		ft_printf(const char *fmt, ...);
char	*ft_itoa(int n);
char	*ft_strnew(size_t size);
void	ft_putchar(char c);
size_t	ft_strlen(const char *s);
void	ft_putnbr(int n);

#endif
