/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 10:54:18 by aguerin           #+#    #+#             */
/*   Updated: 2017/03/10 10:54:34 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Comme la fonction ft_atoi, ft_atoi_base renvoie un entier converti depuis une
** chaîne, mais représenté dans n'importe quelle base comprise entre 1 et 38.
** ft_atoi_base ne vérifie pas si la chaîne envoyée est correctement formatée en
** fonction de la base dans laquelle elle est représentée.
*/

#include "libft.h"

static void	error_verification(const char *str, int base)
{
	if (base < 2 || base > 37)
		ft_error("Erreur : base incorrecte - ft_atoi_base", -1);
	if (!str)
		ft_error("Erreur : chaîne (null) - ft_atoi_base", -1);
}

static int	conv_dec(const char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'A' && c <= 'Z')
		return (c - 55);
	if (c >= 'a' && c <= 'z')
		return (c - 87);
	ft_error("Erreur : problème de formatage de la chaîne - ft_atoi_base", -1);
	return (-1);
}

int			ft_atoi_base(const char *str, int base)
{
	int	i;
	int	nb;
	int	power;

	error_verification(str, base);
	i = 0;
	nb = 0;
	if (base == 10)
		return (ft_atoi(str));
	power = ft_strlen(&str[i]) - 1;
	while (str[i] != '\0')
		nb += (conv_dec(str[i++]) * ft_pow(base, power--));
	return (nb);
}
