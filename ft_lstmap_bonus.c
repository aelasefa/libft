/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstmap_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:10:30 by ayelasef          #+#    #+#             */
/*   Updated: 2024/11/02 12:11:53 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		ptr = ft_lstnew(f(lst->content));
		if (ptr == NULL)
		{
			ft_lstclear(&ptr, del);
			return (NULL);
		}
		ft_lstadd_back(&new, ptr);
		lst = lst->next;
	}
	return (new);
}
