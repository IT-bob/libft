/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:42:54 by aguerin           #+#    #+#             */
/*   Updated: 2016/11/18 18:48:40 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim_space(char const c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static int	ft_start_end(char const *s, unsigned int *start, unsigned int *end)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(s);
	while (ft_trim_space(s[i]) && i < len)
		i++;
	if (i == len)
		return (0);
	*start = i;
	i = len - 1;
	while (ft_trim_space(s[i]) && i > 0)
		i--;
	*end = i;
	return (1);
}

static char	*ft_strnull(void)
{
	char	*str;

	str = ft_memalloc(2);
	if (str)
	{
		ft_strcpy(str, "");
		return (str);
	}
	return (NULL);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;

	if (s)
	{
		if (!ft_strlen(s))
			return (ft_strnull());
		start = 0;
		end = 0;
		if (ft_start_end(s, &start, &end))
			return (ft_strsub(s, start, end - start + 1));
		else
			return (ft_strnull());
	}
	return (NULL);
}
