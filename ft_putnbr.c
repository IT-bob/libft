/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:28:13 by aguerin           #+#    #+#             */
/*   Updated: 2016/11/08 19:54:38 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putnbr(int n)
{
	unsigned int	m;

	if (n < 0)
	{
		ft_putchar('-');
		m = -n;
	}
	else
		m = n;
	if (m > 9)
	{
		ft_putnbr(m / 10);
		ft_putchar((m % 10) + '0');
	}
	else
		ft_putchar(m + '0');
}
