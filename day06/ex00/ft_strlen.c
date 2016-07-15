/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 11:40:56 by amalcoci          #+#    #+#             */
/*   Updated: 2016/07/08 11:40:58 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		++cnt;
	return (cnt);
}