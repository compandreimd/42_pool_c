/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 19:01:31 by amalcoci          #+#    #+#             */
/*   Updated: 2016/07/07 19:06:59 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

typedef unsigned long		marker;
marker		g_one = 1;

void	ft_comb(int pool, int need, marker chosen, int at)
{
	if (pool < need + at) 
		return ;
	if (!need)
	{
		at = 0;
		while (at < pool)
		{
			if (chosen & (g_one << at)) 
				ft_putchar('0' + at);
			at++;
		}	
		ft_putchar(',');
		ft_putchar(' ');
		return ;
	}
	ft_comb(pool, need - 1, chosen | (g_one << at), at + 1);
	ft_comb(pool, need, chosen, at + 1);
}

void	ft_print_combn(int n)
{
	ft_comb(10, n, 0, 0);
	ft_putchar('\b');
	ft_putchar('\b');
}
