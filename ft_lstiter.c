/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 11:42:32 by aguerin           #+#    #+#             */
/*   Updated: 2016/11/18 11:45:26 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*lst1;

	lst1 = lst;
	while (lst1)
	{
		f(lst1);
		lst1 = lst1->next;
	}
}
