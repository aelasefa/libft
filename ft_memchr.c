/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:38:59 by ayelasef          #+#    #+#             */
/*   Updated: 2024/10/23 17:01:22 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const char	*str;

	str = s;
	i = 0;
	while (str[i] && i < n)
	{
		if ((unsigned char)str[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
