/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:55:53 by ayelasef          #+#    #+#             */
/*   Updated: 2024/11/02 11:49:44 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
