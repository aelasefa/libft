/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:35:36 by ayelasef          #+#    #+#             */
/*   Updated: 2024/10/24 10:59:31 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*rsrc;
	char		*rdst;
	size_t		i;

	rsrc = (const char *) src;
	rdst = (char *)dst;
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			rdst[len] = rsrc[len];
		}
	}
	else if (src > dst)
	{
		i = 0;
		while (i < len)
		{
			rdst[i] = rsrc[i];
			i++;
		}
	}
	return (dst);
}