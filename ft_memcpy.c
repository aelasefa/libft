/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:57:04 by ayelasef          #+#    #+#             */
/*   Updated: 2024/10/23 16:38:39 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*rsrc;
	char		*rdst;
	size_t		i;

	if (!src && !dst)
		return (NULL);
	rsrc = src;
	rdst = dst;
	i = 0;
	if (rsrc != rdst)
	{
		while (i < n)
		{
			rdst[i] = (unsigned char)rsrc[i];
			i++;
		}
	}
	return (dst);
}
