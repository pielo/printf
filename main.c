/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanglet <mlanglet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 03:05:21 by mlanglet          #+#    #+#             */
/*   Updated: 2013/12/19 20:02:33 by mlanglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libftprintf.h"

int main()
{
	int		f;
	int		g;
	int		truc = -2147483648;
	
	f = ft_printf("salut %s vous %% etes %d bonhommes", "les gars", truc);
	printf("\nmoi: %d\n", f);
	g = printf("salut %s vous %% etes %d bonhommes", "les gars", truc);
	printf("\nvrai: %d\n", g);
	return (0);
}
