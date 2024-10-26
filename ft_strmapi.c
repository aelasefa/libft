/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:29:01 by ayelasef          #+#    #+#             */
/*   Updated: 2024/10/26 17:42:11 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_new(size_t size)
{
	char	*new_str;

	new_str = malloc(sizeof(char) * size + 1);
	if (!new_str)
		return (NULL);
	return (new_str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	unsigned int	i;
	char			*new;

	size = ft_strlen(s);
	new = ft_new(size);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
