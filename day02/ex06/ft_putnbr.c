/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 10:15:27 by amalcoci          #+#    #+#             */
/*   Updated: 2016/07/07 10:25:54 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int n;
	int k;

	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
		ft_putchar('-');
	n = nb;
	k = 1;
	while (n > 0)
	{
		k *= 10;
		n /= 10;
	}
	while (k > 1)
	{
		n = nb % k;
		k /= 10;
		n /= k;
		ft_putchar('0' + n);
	}
}
