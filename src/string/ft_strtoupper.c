/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 11:21:17 by aguerin           #+#    #+#             */
/*   Updated: 2017/03/22 11:21:48 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strtoupper() prend en entrée une chaîne allouée dynamiquement
** et transforme les lettres minuscules qui la composent en majuscules.
*/

char	*ft_strtoupper(char *str)
{
	int	i;

	if (!str)
		ft_error("Erreur : Chaîne NULL. - ft_strtoupper()", -1);
	i = -1;
	while (str[++i])
		str[i] = ft_toupper(str[i]);
	return (str);
}
