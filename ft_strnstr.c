/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:01:25 by ayelasef          #+#    #+#             */
/*   Updated: 2024/10/24 13:12:51 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle || len == 0)
		return (NULL);
	if (!needle && needle == haystack)
		return ((char *)haystack);
	while (*haystack)
	{
		i = 0;
		j = 0;
		while (haystack[i] != '\0' && haystack[i] == needle[j] && i < len)
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
