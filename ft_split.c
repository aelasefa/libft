/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:25:41 by ayelasef          #+#    #+#             */
/*   Updated: 2024/10/27 09:36:35 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char sep)
{
	int	i;
	int	next;
	int	count;

	i = 0;
	next = 1;
	count = 0;
	while (s[i])
	{
		if (next)
		{
			if (ft_isalpha(s[i]) && (s[i + 1] == sep || s[i + 1] == '\0'))
			{
				count++;
				next = 0;
			}
		}
		else
			next = 1;
		i++;
	}
	return (count);
}

static char	**array_with_words(char **array, char const *str, char c)
{
	int	index;
	int	i;
	int	j;

	i = 0;
	index = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		j = i;
		while (str[i] != c && str[i])
			i++;
		array[index] = malloc(i - j + 1);
		if (!array)
			return (NULL);
		ft_strlcpy(array[index++], str + j, i - j + 1);
	}
	array[index] = NULL;
	return (array);
}

static void	ft_free(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		count;

	count = ft_count_words(s, c);
	array = malloc(sizeof(char *) * count + 1);
	if (!array_with_words(array, s, c))
	{
		ft_free(array);
		return (NULL);
	}
	return (array);
}
